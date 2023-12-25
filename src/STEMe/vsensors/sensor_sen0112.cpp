#include "sensor_sen0112.h"
#include "ui_sensor_sen0112.h"


QT_CHARTS_USE_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////Function for Sensor...

void Sensor_SEN0112::setDeviceWidget(VDevice dev,VUser user)
{
   m_deviceInformation = dev;
    this->setWindowTitle(m_deviceInformation.name());
   ui->label_Name_2->setText(m_deviceInformation.name());
   ui->label_Address_2->setText(QString::number(m_deviceInformation.address()));
   ui->label_SerialNumber_2->setText(m_deviceInformation.serialNumber());
   ui->label_Description_2->setText(m_deviceInformation.description());
   //Check user
   m_user = user;
   if(user.accountType()!=VUser::root)ui->pushButton_Calib_2->setEnabled(false);
   //Create Sensor
   m_edev_sen0112 = new EDev_Sen0112();
   m_edev_sen0112->setSensorUnit(EDev_Sen0112::SSU_Lux);
   m_edev_sen0112->setSampleTime(m_modbusSampleTime);
   m_edev_sen0112->Start(dev);

   if(m_displayTimer)delete m_displayTimer;
   m_displayTimer = new QTimer();
   connect(m_displayTimer,&QTimer::timeout,this,&Sensor_SEN0112::on_displayTimer);
   m_displayTimer->start(m_displayInterval);
   ui->spinBox_SampleTime_2->setValue(m_modbusSampleTime);

}


void Sensor_SEN0112::sensorCalibration(double valueCalib,double valueRaw)
{
    if(m_edev_sen0112->isConnect()){
        m_deviceCalibration->setCalibrating(valueCalib,valueRaw);
        switch(m_deviceCalibration->calibStatus()){
        case VDeviceCalibration::Calib_default:
            m_edev_sen0112->setSampleTime(m_modbusSampleTime);
            break;
        case VDeviceCalibration::Calib_Sampling_OnePoint:
            m_edev_sen0112->setSampleTime(m_deviceCalibration->sampleTime());
            break;
        case VDeviceCalibration::Calib_Sampling_TwoPoint:
            break;
        case VDeviceCalibration::Calib_Sampling_ThreePoint:
            break;
        case VDeviceCalibration::Calib_WriteData:
            m_edev_sen0112->writeCalib(m_deviceCalibration->pointCalib(),m_deviceCalibration->valueCalib(m_edev_sen0112->resolution()));
            m_deviceCalibration->setCalibStatus(VDeviceCalibration::Calib_Writing);
            m_SWS_Status = SWS_Calib;
            break;
        case VDeviceCalibration::Calib_Writing:
            break;
        case VDeviceCalibration::Calib_Cancel:
            break;
        case VDeviceCalibration::Calib_Finished:this->setInfoCalib();
            break;
        case VDeviceCalibration::Calib_Error_Tolerance:
            break;
        case VDeviceCalibration::Calib_Error_Connect:
                break;
        }
    }
m_deviceCalibration->setConnectStatus(m_edev_sen0112->isConnect());

}

void Sensor_SEN0112::setInfoCalib()
{
    if(m_user.accountType()==VUser::root){
        int _p = m_edev_sen0112->pointCalib();
        if(_p>0){
            ui->label_calibInfo_2->setText("(Đã hiệu chuẩn " + QString::number(_p) + " điểm.)");
            ui->label_calibInfo_2->setStyleSheet("color: rgb(0, 255, 0);");
        }
        else{
            ui->label_calibInfo_2->setText("(Chưa hiệu chuẩn)");
            ui->label_calibInfo_2->setStyleSheet("color: rgb(255, 255, 127);");
        }
    }
}



void Sensor_SEN0112::sensorWriteReport(bool status)
{
    switch(m_SWS_Status){
    case Sensor_SEN0112::SWS_SetZero:
        break;
    case Sensor_SEN0112::SWS_Calib:
        if(status)m_deviceCalibration->setCalibStatus(VDeviceCalibration::Calib_Finished);
        else m_deviceCalibration->setCalibStatus(VDeviceCalibration::Calib_Error_Connect);
        break;
    case Sensor_SEN0112::SWS_default:
        return;
    }
    m_SWS_Status = Sensor_SEN0112::SWS_default;
}

void Sensor_SEN0112::calculateParametes(double value, int resolution)
{
        //Calculate
        if(m_GET_SAMPLE_STATUS){
        m_GET_SAMPLE_COUNT++;
        m_GET_SAMPLE_SUM+=value;
        if(m_GET_SAMPLE_MAX<value)m_GET_SAMPLE_MAX=value;
        if(m_GET_SAMPLE_MIN>value)m_GET_SAMPLE_MIN=value;

        //Display
        ui->label_sampleInfo_2->setText("Đang lấy mẫu số    " + QString::number(m_GET_SAMPLE_COUNT));
        ui->label_ValueMax_2->setText(QString::number(m_GET_SAMPLE_MAX,'f',resolution));
        ui->label_ValueMin_2->setText(QString::number(m_GET_SAMPLE_MIN,'f',resolution));
        ui->label_ValueAvg_2->setText(QString::number((m_GET_SAMPLE_SUM/m_GET_SAMPLE_COUNT),'f',resolution));
        if(m_GET_SAMPLE_COUNT>ui->spinBox_setSample_2->value()){
            m_GET_SAMPLE_STATUS=false;
            ui->label_sampleInfo_2->setText("Các tham số cơ bản");
            ui->pushButton_getSamples_2->setStyleSheet("background-color: rgb(225, 225, 225);color: rgb(0, 0, 0);");
            ui->pushButton_getSamples_2->setText("Lấy mẫu");
            }
        }
}

/////////////////////////////////////////////////////////////////////////////////////////////////Function for Display....
void Sensor_SEN0112::on_displayTimer()
{
    if(m_edev_sen0112->isConnect()){
        m_displayTimer->setInterval(m_displayInterval);
        m_edev_sen0112->setSampleTime(m_modbusSampleTime);
        m_edev_sen0112->update();
        switch (m_edev_sen0112->pollStatus()) {
        case ESensors::sensorIdle:
            break;
        case ESensors::sensorReadCommand:
            break;
        case ESensors::sensorWriteCommand:
            break;
        case ESensors::sensorReadError:
            break;
        case ESensors::sensorWriteError:
            sensorWriteReport(false);
            break;
        case ESensors::sensorReadReply:
            this->displayPoll();
            m_edev_sen0112->setPollStatus(ESensors::sensorIdle);
            break;
        case ESensors::sensorWriteReply:
            sensorWriteReport(true);
            break;
        }
    }
    else {
        m_displayTimer->setInterval(500);
        m_edev_sen0112->setSampleTime(500);
        if(m_displayToggle){
            ui->lcdNumber_Value_2->display(-1);
            m_displayToggle=false;
        }
        else {
            ui->lcdNumber_Value_2->display(0);
            m_displayToggle=true;
        }
    }
    //Chart Calib
    if(m_deviceCalibration)this->sensorCalibration(m_edev_sen0112->valueCalib(),m_edev_sen0112->value());
}
void Sensor_SEN0112::displayPoll()
{
    double _lux = m_edev_sen0112->valueCalib();
    //get average of value
    if(ui->checkBox_setMathAvg_2->isChecked()){
        _lux = VDevice::mathAvg(_lux,&m_VALUE_AVG,ui->spinBox_setSample_2->value());
        }
    ui->lcdNumber_Value_2->display(QString::number(_lux,'f',m_edev_sen0112->resolution()));
    //calculate basic parameters
    this->calculateParametes(_lux,m_edev_sen0112->resolution());
    //Chart graph
    if(m_vchartZoom){
        m_vchartZoom->vchartGraph(_lux,ui->comboBox_Temp_Unit_2->currentText());
        if(m_vchartZoom->isHidden()){
            m_vchartZoom=nullptr;
            }
        }
}

void Sensor_SEN0112::on_setChartParameter(int sampleTime)
{
    m_modbusSampleTime = QString::number(sampleTime).toUShort();
    ui->spinBox_SampleTime_2->setValue(sampleTime);
    m_edev_sen0112->setSampleTime(m_modbusSampleTime);
}


/////////////////////////////////////////////////////////////////////////////////////////////////Main Function for Module.....
Sensor_SEN0112::Sensor_SEN0112(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sensor_SEN0112)
{
    ui->setupUi(this);


}
Sensor_SEN0112::~Sensor_SEN0112()
{
    delete ui;
}

void Sensor_SEN0112::closeEvent(QCloseEvent *event)
{
    QMessageBox  msg;
    msg.setStandardButtons(QMessageBox::No|QMessageBox::Yes);
    msg.setText("Bạn có muốn thoát khỏi màn hình \'" + this->windowTitle() + "\' không?\n");
    msg.setWindowTitle(this->windowTitle());
    msg.setParent(nullptr);
    msg.setIcon(QMessageBox::Question);
    msg.setWindowIcon(this->windowIcon());
    msg.exec();
     if (msg.result() != QMessageBox::Yes) {
         event->ignore();
     } else {
         m_displayTimer->deleteLater();
         m_vchartZoom->deleteLater();
         m_edev_sen0112->close();
         event->accept();
     }
}

void Sensor_SEN0112::on_pushButton_ChartZoom_clicked()
{
    if(m_vchartZoom) delete m_vchartZoom;
        m_vchartZoom = new Vchart_Zoom();
        m_vchartZoom->setDevice(m_deviceInformation);
        m_vchartZoom->vchartInit(0,1,60,m_modbusSampleTime);
        connect(m_vchartZoom,&Vchart_Zoom::setChartParameter,this,&Sensor_SEN0112::on_setChartParameter);
        m_vchartZoom->show();
}

void Sensor_SEN0112::on_pushButton_getSamples_2_clicked()
{
    if(ui->pushButton_getSamples_2->text()=="Lấy mẫu"){
        m_GET_SAMPLE_STATUS=true;
        m_GET_SAMPLE_SUM = 0;
        m_GET_SAMPLE_MAX = std::numeric_limits<double>::min();
        m_GET_SAMPLE_MIN = std::numeric_limits<double>::max();
        m_GET_SAMPLE_COUNT = 0;
        ui->pushButton_getSamples_2->setStyleSheet("background-color: rgb(225, 225, 225);color: rgb(170, 0, 0);");
        ui->pushButton_getSamples_2->setText("Dừng");
    }
    else{
        m_GET_SAMPLE_STATUS=false;
        ui->label_sampleInfo_2->setText("Các tham số cơ bản");
        ui->pushButton_getSamples_2->setStyleSheet("background-color: rgb(225, 225, 225);color: rgb(0, 0, 0);");
        ui->pushButton_getSamples_2->setText("Lấy mẫu");
    }
}

void Sensor_SEN0112::on_comboBox_Temp_Unit_2_currentIndexChanged(int index)
{
    switch(index){
    case 0:m_edev_sen0112->setSensorUnit(EDev_Sen0112::SSU_Lux);
        break;
    }
}

void Sensor_SEN0112::on_spinBox_SampleTime_2_valueChanged(int arg1)
{
    if(arg1>ui->spinBox_SampleTime_2->minimum())ui->pushButton_SetSampleTime_2->setEnabled(true);
}

void Sensor_SEN0112::on_pushButton_SetSampleTime_2_clicked()
{
    ui->pushButton_SetSampleTime_2->setEnabled(false);
    m_modbusSampleTime = QString::number(ui->spinBox_SampleTime_2->value()).toUShort();
    m_edev_sen0112->setSampleTime(m_modbusSampleTime);
}

void Sensor_SEN0112::on_pushButton_Calib_2_clicked()
{
    if(m_deviceCalibration)delete m_deviceCalibration;
    m_deviceCalibration = new VDeviceCalibration();
    int _local_X = this->geometry().x()+(this->width()-m_deviceCalibration->width())/2;
    int _local_Y = this->geometry().y()+(this->height()-m_deviceCalibration->height())/2;
    m_deviceCalibration->setGeometry(_local_X,_local_Y,m_deviceCalibration->width(),m_deviceCalibration->height());
    m_deviceCalibration->setResolution(m_edev_sen0112->resolution());
    m_deviceCalibration->setTolerance(5);
    m_deviceCalibration->setCalibTime(30);
    m_deviceCalibration->setSampleNumber(300);
    m_deviceCalibration->setValueCalib_Y1(100);
    m_deviceCalibration->setUnit(m_edev_sen0112->sensorUnitText());
    m_deviceCalibration->show();
}

void Sensor_SEN0112::on_tabWidget_2_tabBarClicked(int index)
{
    if(index==2)this->setInfoCalib();
}

void Sensor_SEN0112::on_pushButton_Exit_clicked()
{
    this->close();
}
