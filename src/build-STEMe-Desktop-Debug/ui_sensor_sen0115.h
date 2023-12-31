/********************************************************************************
** Form generated from reading UI file 'sensor_sen0115.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSOR_SEN0115_H
#define UI_SENSOR_SEN0115_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sensor_SEN0115
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_Infor_2;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_ValueMax;
    QLabel *label_ValueAvg;
    QLabel *label_ValueMin;
    QLCDNumber *lcdNumber_Value;
    QSpinBox *spinBox_setSample;
    QPushButton *pushButton_getSamples;
    QLabel *label_sampleInfo;
    QCheckBox *checkBox_setMathAvg;
    QFrame *frame;
    QComboBox *comboBox_Unit;
    QPushButton *pushButton;
    QCheckBox *checkBox_setTemperature;
    QLCDNumber *lcdNumber_Temp;
    QWidget *tab_4;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_Name;
    QLabel *label_Address;
    QLabel *label_SerialNumber;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_Description;
    QWidget *tab_6;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *pushButton_SetSampleTime;
    QSpinBox *spinBox_SampleTime;
    QFrame *line_2;
    QPushButton *pushButton_Calib;
    QLabel *label_25;
    QPushButton *pushButton_SetZero;
    QLabel *label_26;
    QFrame *line_3;
    QLabel *label_calibInfo;
    QFrame *line;
    QPushButton *pushButton_ChartZoom;
    QPushButton *pushButton_Exit;

    void setupUi(QWidget *Sensor_SEN0115)
    {
        if (Sensor_SEN0115->objectName().isEmpty())
            Sensor_SEN0115->setObjectName(QStringLiteral("Sensor_SEN0115"));
        Sensor_SEN0115->resize(600, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/CON0115_Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Sensor_SEN0115->setWindowIcon(icon);
        Sensor_SEN0115->setStyleSheet(QStringLiteral("background-color: rgb(62, 97, 109);"));
        tabWidget = new QTabWidget(Sensor_SEN0115);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-2, 0, 605, 238));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(62, 97, 109);"));
        tabWidget->setElideMode(Qt::ElideNone);
        tab_Infor_2 = new QWidget();
        tab_Infor_2->setObjectName(QStringLiteral("tab_Infor_2"));
        verticalLayoutWidget_6 = new QWidget(tab_Infor_2);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(340, 30, 128, 92));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);
        label_10->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_10);

        verticalLayoutWidget_7 = new QWidget(tab_Infor_2);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(480, 30, 101, 92));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_ValueMax = new QLabel(verticalLayoutWidget_7);
        label_ValueMax->setObjectName(QStringLiteral("label_ValueMax"));
        label_ValueMax->setFont(font);
        label_ValueMax->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));

        verticalLayout_7->addWidget(label_ValueMax);

        label_ValueAvg = new QLabel(verticalLayoutWidget_7);
        label_ValueAvg->setObjectName(QStringLiteral("label_ValueAvg"));
        label_ValueAvg->setFont(font);
        label_ValueAvg->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_7->addWidget(label_ValueAvg);

        label_ValueMin = new QLabel(verticalLayoutWidget_7);
        label_ValueMin->setObjectName(QStringLiteral("label_ValueMin"));
        label_ValueMin->setFont(font);
        label_ValueMin->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));

        verticalLayout_7->addWidget(label_ValueMin);

        lcdNumber_Value = new QLCDNumber(tab_Infor_2);
        lcdNumber_Value->setObjectName(QStringLiteral("lcdNumber_Value"));
        lcdNumber_Value->setGeometry(QRect(10, 10, 281, 71));
        lcdNumber_Value->setStyleSheet(QLatin1String("background-color: rgb(0, 70, 102);\n"
"color: rgb(0, 254, 186);"));
        lcdNumber_Value->setFrameShape(QFrame::WinPanel);
        lcdNumber_Value->setLineWidth(1);
        lcdNumber_Value->setSmallDecimalPoint(false);
        lcdNumber_Value->setDigitCount(7);
        lcdNumber_Value->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Value->setProperty("value", QVariant(0));
        lcdNumber_Value->setProperty("intValue", QVariant(0));
        spinBox_setSample = new QSpinBox(tab_Infor_2);
        spinBox_setSample->setObjectName(QStringLiteral("spinBox_setSample"));
        spinBox_setSample->setGeometry(QRect(340, 130, 128, 51));
        spinBox_setSample->setStyleSheet(QLatin1String("QSpinBox\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QSpinBox::up-button\n"
"{\n"
"    min-width:40px;\n"
"    min-height: 20px;\n"
"}\n"
"QSpinBox::down-button\n"
"{\n"
"    min-width: 40px;\n"
"    min-height: 20px;\n"
"}\n"
""));
        spinBox_setSample->setMinimum(1);
        spinBox_setSample->setMaximum(9999999);
        spinBox_setSample->setValue(100);
        pushButton_getSamples = new QPushButton(tab_Infor_2);
        pushButton_getSamples->setObjectName(QStringLiteral("pushButton_getSamples"));
        pushButton_getSamples->setGeometry(QRect(480, 130, 101, 51));
        pushButton_getSamples->setFont(font);
        pushButton_getSamples->setStyleSheet(QStringLiteral(""));
        label_sampleInfo = new QLabel(tab_Infor_2);
        label_sampleInfo->setObjectName(QStringLiteral("label_sampleInfo"));
        label_sampleInfo->setGeometry(QRect(320, 0, 261, 26));
        label_sampleInfo->setFont(font1);
        label_sampleInfo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        checkBox_setMathAvg = new QCheckBox(tab_Infor_2);
        checkBox_setMathAvg->setObjectName(QStringLiteral("checkBox_setMathAvg"));
        checkBox_setMathAvg->setGeometry(QRect(10, 120, 281, 27));
        checkBox_setMathAvg->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame = new QFrame(tab_Infor_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 150, 291, 51));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(62, 97, 109);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        comboBox_Unit = new QComboBox(frame);
        comboBox_Unit->addItem(QString());
        comboBox_Unit->addItem(QString());
        comboBox_Unit->setObjectName(QStringLiteral("comboBox_Unit"));
        comboBox_Unit->setGeometry(QRect(32, 10, 249, 32));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        comboBox_Unit->setFont(font2);
        comboBox_Unit->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 10, 32, 32));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));
        checkBox_setTemperature = new QCheckBox(tab_Infor_2);
        checkBox_setTemperature->setObjectName(QStringLiteral("checkBox_setTemperature"));
        checkBox_setTemperature->setGeometry(QRect(10, 90, 201, 27));
        checkBox_setTemperature->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(62, 97, 109);"));
        checkBox_setTemperature->setChecked(false);
        lcdNumber_Temp = new QLCDNumber(tab_Infor_2);
        lcdNumber_Temp->setObjectName(QStringLiteral("lcdNumber_Temp"));
        lcdNumber_Temp->setGeometry(QRect(210, 87, 81, 31));
        lcdNumber_Temp->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"background-color: rgb(0, 70, 102);"));
        lcdNumber_Temp->setFrameShape(QFrame::Panel);
        lcdNumber_Temp->setLineWidth(1);
        lcdNumber_Temp->setSmallDecimalPoint(false);
        lcdNumber_Temp->setDigitCount(5);
        lcdNumber_Temp->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Temp->setProperty("value", QVariant(0));
        lcdNumber_Temp->setProperty("intValue", QVariant(0));
        tabWidget->addTab(tab_Infor_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayoutWidget_8 = new QWidget(tab_4);
        verticalLayoutWidget_8->setObjectName(QStringLiteral("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(150, 10, 291, 101));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_Name = new QLabel(verticalLayoutWidget_8);
        label_Name->setObjectName(QStringLiteral("label_Name"));
        label_Name->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(label_Name);

        label_Address = new QLabel(verticalLayoutWidget_8);
        label_Address->setObjectName(QStringLiteral("label_Address"));
        label_Address->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(label_Address);

        label_SerialNumber = new QLabel(verticalLayoutWidget_8);
        label_SerialNumber->setObjectName(QStringLiteral("label_SerialNumber"));
        label_SerialNumber->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(label_SerialNumber);

        verticalLayoutWidget_9 = new QWidget(tab_4);
        verticalLayoutWidget_9->setObjectName(QStringLiteral("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(10, 10, 111, 131));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(verticalLayoutWidget_9);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_9->addWidget(label_13);

        label_14 = new QLabel(verticalLayoutWidget_9);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_9->addWidget(label_14);

        label_18 = new QLabel(verticalLayoutWidget_9);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_9->addWidget(label_18);

        label_19 = new QLabel(verticalLayoutWidget_9);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_9->addWidget(label_19);

        verticalLayoutWidget_10 = new QWidget(tab_4);
        verticalLayoutWidget_10->setObjectName(QStringLiteral("verticalLayoutWidget_10"));
        verticalLayoutWidget_10->setGeometry(QRect(150, 110, 291, 61));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_10);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_Description = new QLabel(verticalLayoutWidget_10);
        label_Description->setObjectName(QStringLiteral("label_Description"));
        label_Description->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_10->addWidget(label_Description);

        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_23 = new QLabel(tab_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(277, 40, 41, 22));
        label_23->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_24 = new QLabel(tab_6);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(20, 40, 141, 22));
        label_24->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_SetSampleTime = new QPushButton(tab_6);
        pushButton_SetSampleTime->setObjectName(QStringLiteral("pushButton_SetSampleTime"));
        pushButton_SetSampleTime->setGeometry(QRect(360, 20, 201, 61));
        pushButton_SetSampleTime->setFont(font);
        spinBox_SampleTime = new QSpinBox(tab_6);
        spinBox_SampleTime->setObjectName(QStringLiteral("spinBox_SampleTime"));
        spinBox_SampleTime->setGeometry(QRect(160, 10, 111, 81));
        spinBox_SampleTime->setStyleSheet(QLatin1String("QSpinBox\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QSpinBox::up-button\n"
"{\n"
"    min-width:40px;\n"
"    min-height: 20px;\n"
"}\n"
"QSpinBox::down-button\n"
"{\n"
"    min-width: 40px;\n"
"    min-height: 20px;\n"
"}\n"
""));
        spinBox_SampleTime->setMinimum(10);
        spinBox_SampleTime->setMaximum(9999999);
        spinBox_SampleTime->setValue(100);
        line_2 = new QFrame(tab_6);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(210, 110, 101, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_Calib = new QPushButton(tab_6);
        pushButton_Calib->setObjectName(QStringLiteral("pushButton_Calib"));
        pushButton_Calib->setGeometry(QRect(360, 140, 201, 51));
        pushButton_Calib->setFont(font1);
        label_25 = new QLabel(tab_6);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(320, 100, 151, 22));
        label_25->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_SetZero = new QPushButton(tab_6);
        pushButton_SetZero->setObjectName(QStringLiteral("pushButton_SetZero"));
        pushButton_SetZero->setGeometry(QRect(70, 140, 201, 51));
        pushButton_SetZero->setFont(font1);
        label_26 = new QLabel(tab_6);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(20, 100, 181, 22));
        label_26->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        line_3 = new QFrame(tab_6);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(460, 110, 101, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_calibInfo = new QLabel(tab_6);
        label_calibInfo->setObjectName(QStringLiteral("label_calibInfo"));
        label_calibInfo->setGeometry(QRect(330, 120, 241, 22));
        QFont font3;
        font3.setItalic(true);
        label_calibInfo->setFont(font3);
        label_calibInfo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 127);"));
        tabWidget->addTab(tab_6, QString());
        line = new QFrame(Sensor_SEN0115);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-2, 236, 605, 5));
        line->setStyleSheet(QStringLiteral("background-color: rgb(230, 57, 76);"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);
        pushButton_ChartZoom = new QPushButton(Sensor_SEN0115);
        pushButton_ChartZoom->setObjectName(QStringLiteral("pushButton_ChartZoom"));
        pushButton_ChartZoom->setGeometry(QRect(10, 250, 281, 41));
        pushButton_ChartZoom->setFont(font1);
        pushButton_Exit = new QPushButton(Sensor_SEN0115);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(320, 250, 271, 41));
        pushButton_Exit->setFont(font1);

        retranslateUi(Sensor_SEN0115);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Sensor_SEN0115);
    } // setupUi

    void retranslateUi(QWidget *Sensor_SEN0115)
    {
        Sensor_SEN0115->setWindowTitle(QApplication::translate("Sensor_SEN0115", "Form", nullptr));
        label_8->setText(QApplication::translate("Sensor_SEN0115", "Gi\303\241 tr\341\273\213 l\341\273\233n nh\341\272\245t", nullptr));
        label_9->setText(QApplication::translate("Sensor_SEN0115", "Gi\303\241 tr\341\273\213 trung b\303\254nh", nullptr));
        label_10->setText(QApplication::translate("Sensor_SEN0115", "Gi\303\241 tr\341\273\213 nh\341\273\217 nh\341\272\245t", nullptr));
        label_ValueMax->setText(QApplication::translate("Sensor_SEN0115", "0", nullptr));
        label_ValueAvg->setText(QApplication::translate("Sensor_SEN0115", "0", nullptr));
        label_ValueMin->setText(QApplication::translate("Sensor_SEN0115", "0", nullptr));
        pushButton_getSamples->setText(QApplication::translate("Sensor_SEN0115", "B\341\272\257t \304\221\341\272\247u", nullptr));
        label_sampleInfo->setText(QApplication::translate("Sensor_SEN0115", "C\303\241c tham s\341\273\221 c\306\241 b\341\272\243n", nullptr));
        checkBox_setMathAvg->setText(QApplication::translate("Sensor_SEN0115", "S\341\273\255 d\341\273\245ng gi\303\241 tr\341\273\213 trung b\303\254nh c\341\273\231ng", nullptr));
        comboBox_Unit->setItemText(0, QApplication::translate("Sensor_SEN0115", "\304\220\341\273\231 d\341\272\253n \304\221i\341\273\207n (uS/cm)", nullptr));
        comboBox_Unit->setItemText(1, QApplication::translate("Sensor_SEN0115", "\304\220\341\273\231 d\341\272\253n \304\221i\341\273\207n (mS/cm)", nullptr));

        pushButton->setText(QString());
        checkBox_setTemperature->setText(QApplication::translate("Sensor_SEN0115", "B\303\271 nhi\341\273\207t \304\221\341\273\231 cho ph\303\251p \304\221o", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Infor_2), QApplication::translate("Sensor_SEN0115", "            Hi\341\273\203n th\341\273\213            ", nullptr));
        label_Name->setText(QString());
        label_Address->setText(QString());
        label_SerialNumber->setText(QString());
        label_13->setText(QApplication::translate("Sensor_SEN0115", "T\303\252n thi\341\272\277t b\341\273\213:", nullptr));
        label_14->setText(QApplication::translate("Sensor_SEN0115", "\304\220\341\273\213a ch\341\273\211:", nullptr));
        label_18->setText(QApplication::translate("Sensor_SEN0115", "M\303\243 s\303\252-ri:", nullptr));
        label_19->setText(QApplication::translate("Sensor_SEN0115", "M\303\264 t\341\272\243:", nullptr));
        label_Description->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Sensor_SEN0115", "            Thi\341\272\277t b\341\273\213            ", nullptr));
        label_23->setText(QApplication::translate("Sensor_SEN0115", "(ms)", nullptr));
        label_24->setText(QApplication::translate("Sensor_SEN0115", "Th\341\273\235i gian l\341\272\245y m\341\272\253u :", nullptr));
        pushButton_SetSampleTime->setText(QApplication::translate("Sensor_SEN0115", "C\303\240i \304\221\341\272\267t", nullptr));
        pushButton_Calib->setText(QApplication::translate("Sensor_SEN0115", "Hi\341\273\207u chu\341\272\251n", nullptr));
        label_25->setText(QApplication::translate("Sensor_SEN0115", "Hi\341\273\207u chu\341\272\251n thi\341\272\277t b\341\273\213 ", nullptr));
        pushButton_SetZero->setText(QApplication::translate("Sensor_SEN0115", "Thi\341\272\277t l\341\272\255p \304\221i\341\273\203m 0 (Zero)", nullptr));
        label_26->setText(QApplication::translate("Sensor_SEN0115", "Thi\341\272\277t l\341\272\255p \304\221i\341\273\203m tham chi\341\272\277u", nullptr));
        label_calibInfo->setText(QApplication::translate("Sensor_SEN0115", "(ch\306\260a hi\341\273\207u chu\341\272\251n)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Sensor_SEN0115", "           C\303\240i \304\221\341\272\267t            ", nullptr));
        pushButton_ChartZoom->setText(QApplication::translate("Sensor_SEN0115", "\304\220\341\273\223 th\341\273\213", nullptr));
        pushButton_Exit->setText(QApplication::translate("Sensor_SEN0115", "Tho\303\241t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sensor_SEN0115: public Ui_Sensor_SEN0115 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSOR_SEN0115_H
