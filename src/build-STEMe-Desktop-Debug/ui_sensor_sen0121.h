/********************************************************************************
** Form generated from reading UI file 'sensor_sen0121.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSOR_SEN0121_H
#define UI_SENSOR_SEN0121_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sensor_SEN0121
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_Infor_2;
    QLCDNumber *lcdNumber_Value;
    QPushButton *pushButton_2;
    QComboBox *comboBox_Sensor_Unit;
    QSpinBox *spinBox_setSample;
    QPushButton *pushButton_getSamples;
    QLabel *label_sampleInfo;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QCheckBox *checkBox_setMathAvg;
    QPushButton *pushButton_SetZero;
    QLabel *label_ValueAvg;
    QLabel *label_ValueMin;
    QLabel *label_ValueMax;
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
    QLabel *label_calibInfo;
    QPushButton *pushButton_Exit;
    QFrame *frame_setChart;
    QRadioButton *radioButton_Continuously;
    QRadioButton *radioButton_Accumulation;
    QPushButton *pushButton_ClearChart;
    QFrame *frame_trackLine;
    QPushButton *pushButton_TrackLine_Yax;
    QPushButton *pushButton_TrackLine_Default;
    QPushButton *pushButton_TrackLine_Tooltip;
    QFrame *frame_Chart;
    QFrame *frame;
    QPushButton *pushButton_SetMode;
    QComboBox *comboBox_Sensor_Mode;
    QFrame *frame_Calculate;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_Calculate_Freq;
    QLabel *label_Calculate_Time;
    QLabel *label_16;
    QLabel *label_Calculate_Pulse;
    QFrame *frame_graphTime;
    QSpinBox *spinBox_graphTime;
    QLabel *label_15;
    QLabel *label_26;

    void setupUi(QWidget *Sensor_SEN0121)
    {
        if (Sensor_SEN0121->objectName().isEmpty())
            Sensor_SEN0121->setObjectName(QStringLiteral("Sensor_SEN0121"));
        Sensor_SEN0121->resize(1280, 710);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/DIS0121_Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Sensor_SEN0121->setWindowIcon(icon);
        Sensor_SEN0121->setStyleSheet(QStringLiteral("background-color: #132630;"));
        tabWidget = new QTabWidget(Sensor_SEN0121);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 470, 551, 231));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { \n"
"border: 1px solid #C0C0C0;\n"
"}"));
        tabWidget->setElideMode(Qt::ElideNone);
        tab_Infor_2 = new QWidget();
        tab_Infor_2->setObjectName(QStringLiteral("tab_Infor_2"));
        lcdNumber_Value = new QLCDNumber(tab_Infor_2);
        lcdNumber_Value->setObjectName(QStringLiteral("lcdNumber_Value"));
        lcdNumber_Value->setGeometry(QRect(10, 10, 281, 71));
        lcdNumber_Value->setStyleSheet(QLatin1String("background-color: rgb(0, 70, 102);\n"
"color:rgb(5, 209, 255)"));
        lcdNumber_Value->setFrameShape(QFrame::WinPanel);
        lcdNumber_Value->setLineWidth(1);
        lcdNumber_Value->setSmallDecimalPoint(false);
        lcdNumber_Value->setDigitCount(7);
        lcdNumber_Value->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Value->setProperty("value", QVariant(0));
        lcdNumber_Value->setProperty("intValue", QVariant(0));
        pushButton_2 = new QPushButton(tab_Infor_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 114, 32, 32));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(32, 32));
        comboBox_Sensor_Unit = new QComboBox(tab_Infor_2);
        comboBox_Sensor_Unit->addItem(QString());
        comboBox_Sensor_Unit->addItem(QString());
        comboBox_Sensor_Unit->addItem(QString());
        comboBox_Sensor_Unit->addItem(QString());
        comboBox_Sensor_Unit->setObjectName(QStringLiteral("comboBox_Sensor_Unit"));
        comboBox_Sensor_Unit->setGeometry(QRect(43, 114, 248, 32));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        comboBox_Sensor_Unit->setFont(font1);
        comboBox_Sensor_Unit->setLayoutDirection(Qt::LeftToRight);
        comboBox_Sensor_Unit->setStyleSheet(QLatin1String("background-color: rgb(62, 97, 109);\n"
"color: rgb(255, 255, 255);"));
        comboBox_Sensor_Unit->setEditable(false);
        spinBox_setSample = new QSpinBox(tab_Infor_2);
        spinBox_setSample->setObjectName(QStringLiteral("spinBox_setSample"));
        spinBox_setSample->setGeometry(QRect(320, 120, 101, 51));
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
        spinBox_setSample->setMinimum(10);
        spinBox_setSample->setMaximum(9999999);
        spinBox_setSample->setValue(100);
        pushButton_getSamples = new QPushButton(tab_Infor_2);
        pushButton_getSamples->setObjectName(QStringLiteral("pushButton_getSamples"));
        pushButton_getSamples->setGeometry(QRect(430, 120, 111, 51));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_getSamples->setFont(font2);
        pushButton_getSamples->setStyleSheet(QStringLiteral(""));
        label_sampleInfo = new QLabel(tab_Infor_2);
        label_sampleInfo->setObjectName(QStringLiteral("label_sampleInfo"));
        label_sampleInfo->setGeometry(QRect(310, 0, 261, 26));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_sampleInfo->setFont(font3);
        label_sampleInfo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        verticalLayoutWidget_6 = new QWidget(tab_Infor_2);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(320, 30, 121, 80));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font4;
        font4.setBold(false);
        font4.setWeight(50);
        label_8->setFont(font4);
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font4);
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font4);
        label_10->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_10);

        checkBox_setMathAvg = new QCheckBox(tab_Infor_2);
        checkBox_setMathAvg->setObjectName(QStringLiteral("checkBox_setMathAvg"));
        checkBox_setMathAvg->setGeometry(QRect(10, 86, 281, 27));
        checkBox_setMathAvg->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_SetZero = new QPushButton(tab_Infor_2);
        pushButton_SetZero->setObjectName(QStringLiteral("pushButton_SetZero"));
        pushButton_SetZero->setGeometry(QRect(10, 152, 281, 35));
        pushButton_SetZero->setFont(font3);
        label_ValueAvg = new QLabel(tab_Infor_2);
        label_ValueAvg->setObjectName(QStringLiteral("label_ValueAvg"));
        label_ValueAvg->setGeometry(QRect(450, 61, 91, 21));
        label_ValueAvg->setFont(font2);
        label_ValueAvg->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_ValueAvg->setFrameShape(QFrame::NoFrame);
        label_ValueMin = new QLabel(tab_Infor_2);
        label_ValueMin->setObjectName(QStringLiteral("label_ValueMin"));
        label_ValueMin->setGeometry(QRect(450, 89, 91, 21));
        label_ValueMin->setFont(font2);
        label_ValueMin->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));
        label_ValueMax = new QLabel(tab_Infor_2);
        label_ValueMax->setObjectName(QStringLiteral("label_ValueMax"));
        label_ValueMax->setGeometry(QRect(450, 29, 91, 26));
        label_ValueMax->setFont(font2);
        label_ValueMax->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));
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
        pushButton_SetSampleTime->setGeometry(QRect(320, 20, 161, 61));
        pushButton_SetSampleTime->setFont(font2);
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
        line_2->setGeometry(QRect(20, 100, 541, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_Calib = new QPushButton(tab_6);
        pushButton_Calib->setObjectName(QStringLiteral("pushButton_Calib"));
        pushButton_Calib->setGeometry(QRect(320, 120, 161, 61));
        pushButton_Calib->setFont(font3);
        label_25 = new QLabel(tab_6);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 139, 231, 22));
        label_25->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_calibInfo = new QLabel(tab_6);
        label_calibInfo->setObjectName(QStringLiteral("label_calibInfo"));
        label_calibInfo->setGeometry(QRect(40, 160, 271, 22));
        QFont font5;
        font5.setItalic(true);
        label_calibInfo->setFont(font5);
        label_calibInfo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 127);"));
        tabWidget->addTab(tab_6, QString());
        pushButton_Exit = new QPushButton(Sensor_SEN0121);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(1120, 660, 151, 41));
        pushButton_Exit->setFont(font3);
        frame_setChart = new QFrame(Sensor_SEN0121);
        frame_setChart->setObjectName(QStringLiteral("frame_setChart"));
        frame_setChart->setGeometry(QRect(860, 430, 411, 31));
        frame_setChart->setFrameShape(QFrame::StyledPanel);
        frame_setChart->setFrameShadow(QFrame::Raised);
        radioButton_Continuously = new QRadioButton(frame_setChart);
        radioButton_Continuously->setObjectName(QStringLiteral("radioButton_Continuously"));
        radioButton_Continuously->setGeometry(QRect(12, 2, 141, 27));
        radioButton_Continuously->setFont(font3);
        radioButton_Continuously->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        radioButton_Continuously->setChecked(true);
        radioButton_Accumulation = new QRadioButton(frame_setChart);
        radioButton_Accumulation->setObjectName(QStringLiteral("radioButton_Accumulation"));
        radioButton_Accumulation->setGeometry(QRect(152, 2, 131, 27));
        radioButton_Accumulation->setFont(font3);
        radioButton_Accumulation->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        radioButton_Accumulation->setChecked(false);
        pushButton_ClearChart = new QPushButton(frame_setChart);
        pushButton_ClearChart->setObjectName(QStringLiteral("pushButton_ClearChart"));
        pushButton_ClearChart->setGeometry(QRect(298, 2, 111, 27));
        pushButton_ClearChart->setFont(font2);
        frame_trackLine = new QFrame(Sensor_SEN0121);
        frame_trackLine->setObjectName(QStringLiteral("frame_trackLine"));
        frame_trackLine->setGeometry(QRect(10, 430, 411, 31));
        frame_trackLine->setFrameShape(QFrame::StyledPanel);
        frame_trackLine->setFrameShadow(QFrame::Raised);
        pushButton_TrackLine_Yax = new QPushButton(frame_trackLine);
        pushButton_TrackLine_Yax->setObjectName(QStringLiteral("pushButton_TrackLine_Yax"));
        pushButton_TrackLine_Yax->setGeometry(QRect(382, 2, 27, 27));
        pushButton_TrackLine_Yax->setFont(font2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/MFS0103_Track_yax.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_TrackLine_Yax->setIcon(icon1);
        pushButton_TrackLine_Yax->setIconSize(QSize(25, 25));
        pushButton_TrackLine_Default = new QPushButton(frame_trackLine);
        pushButton_TrackLine_Default->setObjectName(QStringLiteral("pushButton_TrackLine_Default"));
        pushButton_TrackLine_Default->setGeometry(QRect(2, 2, 27, 27));
        pushButton_TrackLine_Default->setFont(font2);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/MFS0103_Track_D.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_TrackLine_Default->setIcon(icon2);
        pushButton_TrackLine_Default->setIconSize(QSize(25, 25));
        pushButton_TrackLine_Tooltip = new QPushButton(frame_trackLine);
        pushButton_TrackLine_Tooltip->setObjectName(QStringLiteral("pushButton_TrackLine_Tooltip"));
        pushButton_TrackLine_Tooltip->setGeometry(QRect(30, 2, 27, 27));
        pushButton_TrackLine_Tooltip->setFont(font2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/MFS0103_Track_T.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_TrackLine_Tooltip->setIcon(icon3);
        pushButton_TrackLine_Tooltip->setIconSize(QSize(25, 25));
        frame_Chart = new QFrame(Sensor_SEN0121);
        frame_Chart->setObjectName(QStringLiteral("frame_Chart"));
        frame_Chart->setGeometry(QRect(10, 10, 1260, 421));
        frame_Chart->setStyleSheet(QLatin1String("QFrame { \n"
"border: 1px solid #C0C0C0;\n"
"}"));
        frame_Chart->setFrameShape(QFrame::StyledPanel);
        frame_Chart->setFrameShadow(QFrame::Raised);
        frame = new QFrame(Sensor_SEN0121);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(570, 470, 541, 231));
        frame->setStyleSheet(QStringLiteral("background-color: #132630;"));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_SetMode = new QPushButton(frame);
        pushButton_SetMode->setObjectName(QStringLiteral("pushButton_SetMode"));
        pushButton_SetMode->setGeometry(QRect(40, 160, 461, 51));
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(true);
        font6.setWeight(75);
        pushButton_SetMode->setFont(font6);
        pushButton_SetMode->setStyleSheet(QStringLiteral("color: rgb(0, 85, 255);"));
        comboBox_Sensor_Mode = new QComboBox(frame);
        comboBox_Sensor_Mode->addItem(QString());
        comboBox_Sensor_Mode->addItem(QString());
        comboBox_Sensor_Mode->addItem(QString());
        comboBox_Sensor_Mode->setObjectName(QStringLiteral("comboBox_Sensor_Mode"));
        comboBox_Sensor_Mode->setGeometry(QRect(40, 20, 461, 41));
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(true);
        font7.setItalic(true);
        font7.setWeight(75);
        comboBox_Sensor_Mode->setFont(font7);
        comboBox_Sensor_Mode->setLayoutDirection(Qt::LeftToRight);
        comboBox_Sensor_Mode->setStyleSheet(QLatin1String("background-color: rgb(62, 97, 109);\n"
"color: rgb(255, 255, 255);"));
        comboBox_Sensor_Mode->setEditable(false);
        frame_Calculate = new QFrame(frame);
        frame_Calculate->setObjectName(QStringLiteral("frame_Calculate"));
        frame_Calculate->setGeometry(QRect(40, 70, 221, 80));
        frame_Calculate->setStyleSheet(QLatin1String("QFrame#frame_Calculate{\n"
"    border: 1px solid gray;\n"
"}"));
        frame_Calculate->setFrameShape(QFrame::NoFrame);
        frame_Calculate->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(frame_Calculate);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 29, 61, 22));
        QFont font8;
        font8.setPointSize(10);
        font8.setBold(true);
        font8.setWeight(75);
        label_11->setFont(font8);
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(frame_Calculate);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 49, 61, 23));
        label_12->setFont(font8);
        label_12->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Calculate_Freq = new QLabel(frame_Calculate);
        label_Calculate_Freq->setObjectName(QStringLiteral("label_Calculate_Freq"));
        label_Calculate_Freq->setGeometry(QRect(90, 27, 99, 26));
        label_Calculate_Freq->setFont(font2);
        label_Calculate_Freq->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));
        label_Calculate_Time = new QLabel(frame_Calculate);
        label_Calculate_Time->setObjectName(QStringLiteral("label_Calculate_Time"));
        label_Calculate_Time->setGeometry(QRect(90, 50, 99, 21));
        label_Calculate_Time->setFont(font2);
        label_Calculate_Time->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));
        label_16 = new QLabel(frame_Calculate);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 9, 61, 22));
        label_16->setFont(font8);
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Calculate_Pulse = new QLabel(frame_Calculate);
        label_Calculate_Pulse->setObjectName(QStringLiteral("label_Calculate_Pulse"));
        label_Calculate_Pulse->setGeometry(QRect(90, 10, 99, 21));
        label_Calculate_Pulse->setFont(font2);
        label_Calculate_Pulse->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Calculate_Pulse->setFrameShape(QFrame::NoFrame);
        frame_graphTime = new QFrame(frame);
        frame_graphTime->setObjectName(QStringLiteral("frame_graphTime"));
        frame_graphTime->setGeometry(QRect(260, 70, 241, 80));
        frame_graphTime->setStyleSheet(QLatin1String("QFrame#frame_graphTime{\n"
"    border: 1px solid gray;\n"
"}"));
        frame_graphTime->setFrameShape(QFrame::NoFrame);
        frame_graphTime->setFrameShadow(QFrame::Raised);
        spinBox_graphTime = new QSpinBox(frame_graphTime);
        spinBox_graphTime->setObjectName(QStringLiteral("spinBox_graphTime"));
        spinBox_graphTime->setGeometry(QRect(110, 10, 91, 61));
        spinBox_graphTime->setFont(font2);
        spinBox_graphTime->setStyleSheet(QLatin1String("QSpinBox\n"
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
        spinBox_graphTime->setMinimum(1);
        spinBox_graphTime->setMaximum(999);
        spinBox_graphTime->setSingleStep(1);
        spinBox_graphTime->setValue(10);
        label_15 = new QLabel(frame_graphTime);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(9, 29, 91, 23));
        label_15->setFont(font8);
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_26 = new QLabel(frame_graphTime);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(210, 30, 21, 22));
        label_26->setFont(font8);
        label_26->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(Sensor_SEN0121);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Sensor_SEN0121);
    } // setupUi

    void retranslateUi(QWidget *Sensor_SEN0121)
    {
        Sensor_SEN0121->setWindowTitle(QApplication::translate("Sensor_SEN0121", "Form", nullptr));
        pushButton_2->setText(QString());
        comboBox_Sensor_Unit->setItemText(0, QApplication::translate("Sensor_SEN0121", "\304\220o theo millimeter  (mm)", nullptr));
        comboBox_Sensor_Unit->setItemText(1, QApplication::translate("Sensor_SEN0121", "\304\220o theo centimeter (cm)", nullptr));
        comboBox_Sensor_Unit->setItemText(2, QApplication::translate("Sensor_SEN0121", "\304\220o theo decimeter  (dm)", nullptr));
        comboBox_Sensor_Unit->setItemText(3, QApplication::translate("Sensor_SEN0121", "\304\220o theo meter (m)", nullptr));

        pushButton_getSamples->setText(QApplication::translate("Sensor_SEN0121", "L\341\272\245y m\341\272\253u", nullptr));
        label_sampleInfo->setText(QApplication::translate("Sensor_SEN0121", "C\303\241c tham s\341\273\221 c\306\241 b\341\272\243n", nullptr));
        label_8->setText(QApplication::translate("Sensor_SEN0121", "Gi\303\241 tr\341\273\213 l\341\273\233n nh\341\272\245t", nullptr));
        label_9->setText(QApplication::translate("Sensor_SEN0121", "Gi\303\241 tr\341\273\213 trung b\303\254nh", nullptr));
        label_10->setText(QApplication::translate("Sensor_SEN0121", "Gi\303\241 tr\341\273\213 nh\341\273\217 nh\341\272\245t", nullptr));
        checkBox_setMathAvg->setText(QApplication::translate("Sensor_SEN0121", "S\341\273\255 d\341\273\245ng gi\303\241 tr\341\273\213 trung b\303\254nh c\341\273\231ng", nullptr));
        pushButton_SetZero->setText(QApplication::translate("Sensor_SEN0121", "Thi\341\272\277t l\341\272\255p \304\221i\341\273\203m 0 (Zero)", nullptr));
        label_ValueAvg->setText(QApplication::translate("Sensor_SEN0121", "0", nullptr));
        label_ValueMin->setText(QApplication::translate("Sensor_SEN0121", "0", nullptr));
        label_ValueMax->setText(QApplication::translate("Sensor_SEN0121", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Infor_2), QApplication::translate("Sensor_SEN0121", "            Hi\341\273\203n th\341\273\213            ", nullptr));
        label_Name->setText(QString());
        label_Address->setText(QString());
        label_SerialNumber->setText(QString());
        label_13->setText(QApplication::translate("Sensor_SEN0121", "T\303\252n thi\341\272\277t b\341\273\213:", nullptr));
        label_14->setText(QApplication::translate("Sensor_SEN0121", "\304\220\341\273\213a ch\341\273\211:", nullptr));
        label_18->setText(QApplication::translate("Sensor_SEN0121", "M\303\243 s\303\252-ri:", nullptr));
        label_19->setText(QApplication::translate("Sensor_SEN0121", "M\303\264 t\341\272\243:", nullptr));
        label_Description->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Sensor_SEN0121", "            Thi\341\272\277t b\341\273\213            ", nullptr));
        label_23->setText(QApplication::translate("Sensor_SEN0121", "(ms)", nullptr));
        label_24->setText(QApplication::translate("Sensor_SEN0121", "Th\341\273\235i gian l\341\272\245y m\341\272\253u :", nullptr));
        pushButton_SetSampleTime->setText(QApplication::translate("Sensor_SEN0121", "C\303\240i \304\221\341\272\267t", nullptr));
        pushButton_Calib->setText(QApplication::translate("Sensor_SEN0121", "Hi\341\273\207u chu\341\272\251n", nullptr));
        label_25->setText(QApplication::translate("Sensor_SEN0121", "Hi\341\273\207u chu\341\272\251n thi\341\272\277t b\341\273\213 :", nullptr));
        label_calibInfo->setText(QApplication::translate("Sensor_SEN0121", "(ch\306\260a hi\341\273\207u chu\341\272\251n)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Sensor_SEN0121", "           C\303\240i \304\221\341\272\267t            ", nullptr));
        pushButton_Exit->setText(QApplication::translate("Sensor_SEN0121", "Tho\303\241t", nullptr));
        radioButton_Continuously->setText(QApplication::translate("Sensor_SEN0121", "Th\341\273\235i gian \304\221o", nullptr));
        radioButton_Accumulation->setText(QApplication::translate("Sensor_SEN0121", "\304\220\341\273\223 th\341\273\213 t\303\255ch l\305\251y", nullptr));
        pushButton_ClearChart->setText(QApplication::translate("Sensor_SEN0121", "X\303\263a \304\221\341\273\223 th\341\273\213", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_TrackLine_Yax->setToolTip(QApplication::translate("Sensor_SEN0121", "t\303\255nh h\341\273\207 s\341\273\221 g\303\263c y=ax", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_TrackLine_Yax->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_TrackLine_Default->setToolTip(QApplication::translate("Sensor_SEN0121", "tr\341\273\245c t\341\273\215a \304\221\341\273\231 \341\272\243o", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_TrackLine_Default->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_TrackLine_Tooltip->setToolTip(QApplication::translate("Sensor_SEN0121", "b\341\272\257t \304\221i\341\273\203m", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_TrackLine_Tooltip->setText(QString());
        pushButton_SetMode->setText(QApplication::translate("Sensor_SEN0121", "B\341\272\257t \304\221\341\272\247u", nullptr));
        comboBox_Sensor_Mode->setItemText(0, QApplication::translate("Sensor_SEN0121", "Ch\341\272\277 \304\221\341\273\231 m\341\272\267c \304\221\341\273\213nh", nullptr));
        comboBox_Sensor_Mode->setItemText(1, QApplication::translate("Sensor_SEN0121", "Ch\341\272\277 \304\221\341\273\231 \304\221o ch\303\255nh x\303\241c", nullptr));
        comboBox_Sensor_Mode->setItemText(2, QApplication::translate("Sensor_SEN0121", "\304\220o dao \304\221\341\273\231ng", nullptr));

        label_11->setText(QApplication::translate("Sensor_SEN0121", "T\341\272\247n s\341\273\221:", nullptr));
        label_12->setText(QApplication::translate("Sensor_SEN0121", "Chu k\341\273\263:", nullptr));
        label_Calculate_Freq->setText(QApplication::translate("Sensor_SEN0121", "0", nullptr));
        label_Calculate_Time->setText(QApplication::translate("Sensor_SEN0121", "0", nullptr));
        label_16->setText(QApplication::translate("Sensor_SEN0121", "S\341\273\221 xung:", nullptr));
        label_Calculate_Pulse->setText(QApplication::translate("Sensor_SEN0121", "0", nullptr));
        label_15->setText(QApplication::translate("Sensor_SEN0121", "Th\341\273\235i gian \304\221o:", nullptr));
        label_26->setText(QApplication::translate("Sensor_SEN0121", "(S)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sensor_SEN0121: public Ui_Sensor_SEN0121 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSOR_SEN0121_H
