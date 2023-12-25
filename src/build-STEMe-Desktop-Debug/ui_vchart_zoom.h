/********************************************************************************
** Form generated from reading UI file 'vchart_zoom.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCHART_ZOOM_H
#define UI_VCHART_ZOOM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vchart_Zoom
{
public:
    QFrame *frame_Chart;
    QTabWidget *tabWidget;
    QWidget *tab_Infor;
    QLCDNumber *lcdNumber_Value;
    QGroupBox *groupBox_Analysis;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_ValueMax;
    QLabel *label_ValueAvg;
    QLabel *label_ValueMin;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Device_Name;
    QLabel *label_Device_Type;
    QLabel *label_Device_SN;
    QLabel *label_deviceUnit;
    QWidget *tab;
    QSpinBox *spinBox_AxitX_Range_Max;
    QLabel *label_17;
    QLabel *label_16;
    QSpinBox *spinBox_AxisY_Range_Min;
    QSpinBox *spinBox_AxisY_Range_Max;
    QPushButton *pushButton_SetConfigChart;
    QLabel *label_15;
    QWidget *tab_2;
    QSpinBox *spinBox_SampleTime;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pushButton_SetSampleTime;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_SaveData;
    QPushButton *pushButton_OpenData;
    QFrame *frame;
    QPushButton *pushButton_Stop;
    QFrame *frame_trackLine;
    QPushButton *pushButton_TrackLine_Yax;
    QPushButton *pushButton_TrackLine_Default;
    QPushButton *pushButton_TrackLine_Tooltip;
    QFrame *frame_setChart;
    QRadioButton *radioButton_Continuously;
    QRadioButton *radioButton_Accumulation;
    QPushButton *pushButton_ClearChart;

    void setupUi(QWidget *Vchart_Zoom)
    {
        if (Vchart_Zoom->objectName().isEmpty())
            Vchart_Zoom->setObjectName(QStringLiteral("Vchart_Zoom"));
        Vchart_Zoom->resize(1280, 710);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/ChartZoom_Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Vchart_Zoom->setWindowIcon(icon);
        Vchart_Zoom->setStyleSheet(QStringLiteral("background-color: #132630;"));
        frame_Chart = new QFrame(Vchart_Zoom);
        frame_Chart->setObjectName(QStringLiteral("frame_Chart"));
        frame_Chart->setGeometry(QRect(10, 10, 1260, 421));
        frame_Chart->setStyleSheet(QLatin1String("QFrame { \n"
"border: 1px solid #C0C0C0;\n"
"}"));
        frame_Chart->setFrameShape(QFrame::StyledPanel);
        frame_Chart->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(Vchart_Zoom);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 470, 701, 231));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tab_Infor = new QWidget();
        tab_Infor->setObjectName(QStringLiteral("tab_Infor"));
        lcdNumber_Value = new QLCDNumber(tab_Infor);
        lcdNumber_Value->setObjectName(QStringLiteral("lcdNumber_Value"));
        lcdNumber_Value->setGeometry(QRect(20, 10, 301, 51));
        lcdNumber_Value->setStyleSheet(QLatin1String("background-color: #132630;\n"
"color: rgb(255, 0, 0);"));
        lcdNumber_Value->setFrameShape(QFrame::WinPanel);
        lcdNumber_Value->setLineWidth(1);
        lcdNumber_Value->setSmallDecimalPoint(false);
        lcdNumber_Value->setDigitCount(7);
        lcdNumber_Value->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Value->setProperty("value", QVariant(0));
        lcdNumber_Value->setProperty("intValue", QVariant(0));
        groupBox_Analysis = new QGroupBox(tab_Infor);
        groupBox_Analysis->setObjectName(QStringLiteral("groupBox_Analysis"));
        groupBox_Analysis->setGeometry(QRect(350, 10, 341, 151));
        groupBox_Analysis->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        groupBox_Analysis->setFlat(false);
        verticalLayoutWidget_2 = new QWidget(groupBox_Analysis);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(220, 40, 101, 92));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_ValueMax = new QLabel(verticalLayoutWidget_2);
        label_ValueMax->setObjectName(QStringLiteral("label_ValueMax"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_ValueMax->setFont(font1);
        label_ValueMax->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));

        verticalLayout_2->addWidget(label_ValueMax);

        label_ValueAvg = new QLabel(verticalLayoutWidget_2);
        label_ValueAvg->setObjectName(QStringLiteral("label_ValueAvg"));
        label_ValueAvg->setFont(font1);
        label_ValueAvg->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_ValueAvg);

        label_ValueMin = new QLabel(verticalLayoutWidget_2);
        label_ValueMin->setObjectName(QStringLiteral("label_ValueMin"));
        label_ValueMin->setFont(font1);
        label_ValueMin->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));

        verticalLayout_2->addWidget(label_ValueMin);

        verticalLayoutWidget = new QWidget(groupBox_Analysis);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 40, 150, 92));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_2);

        verticalLayoutWidget_3 = new QWidget(tab_Infor);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 90, 70, 92));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_6);

        verticalLayoutWidget_4 = new QWidget(tab_Infor);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(99, 90, 221, 92));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_Device_Name = new QLabel(verticalLayoutWidget_4);
        label_Device_Name->setObjectName(QStringLiteral("label_Device_Name"));
        label_Device_Name->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_Device_Name);

        label_Device_Type = new QLabel(verticalLayoutWidget_4);
        label_Device_Type->setObjectName(QStringLiteral("label_Device_Type"));
        label_Device_Type->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_Device_Type);

        label_Device_SN = new QLabel(verticalLayoutWidget_4);
        label_Device_SN->setObjectName(QStringLiteral("label_Device_SN"));
        label_Device_SN->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_Device_SN);

        label_deviceUnit = new QLabel(tab_Infor);
        label_deviceUnit->setObjectName(QStringLiteral("label_deviceUnit"));
        label_deviceUnit->setGeometry(QRect(20, 60, 301, 26));
        label_deviceUnit->setFont(font);
        label_deviceUnit->setLayoutDirection(Qt::LeftToRight);
        label_deviceUnit->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);"));
        label_deviceUnit->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_Infor, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        spinBox_AxitX_Range_Max = new QSpinBox(tab);
        spinBox_AxitX_Range_Max->setObjectName(QStringLiteral("spinBox_AxitX_Range_Max"));
        spinBox_AxitX_Range_Max->setGeometry(QRect(410, 30, 111, 81));
        spinBox_AxitX_Range_Max->setStyleSheet(QLatin1String("QSpinBox\n"
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
"}"));
        spinBox_AxitX_Range_Max->setMinimum(10);
        spinBox_AxitX_Range_Max->setMaximum(1000);
        spinBox_AxitX_Range_Max->setValue(100);
        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(390, 5, 161, 22));
        label_17->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(230, 5, 91, 22));
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        spinBox_AxisY_Range_Min = new QSpinBox(tab);
        spinBox_AxisY_Range_Min->setObjectName(QStringLiteral("spinBox_AxisY_Range_Min"));
        spinBox_AxisY_Range_Min->setGeometry(QRect(30, 30, 111, 81));
        spinBox_AxisY_Range_Min->setStyleSheet(QLatin1String("QSpinBox\n"
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
"}"));
        spinBox_AxisY_Range_Min->setMinimum(-9999999);
        spinBox_AxisY_Range_Min->setMaximum(9999999);
        spinBox_AxisY_Range_Min->setValue(0);
        spinBox_AxisY_Range_Max = new QSpinBox(tab);
        spinBox_AxisY_Range_Max->setObjectName(QStringLiteral("spinBox_AxisY_Range_Max"));
        spinBox_AxisY_Range_Max->setGeometry(QRect(220, 30, 111, 81));
        spinBox_AxisY_Range_Max->setStyleSheet(QLatin1String("QSpinBox\n"
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
"}"));
        spinBox_AxisY_Range_Max->setMinimum(-9999999);
        spinBox_AxisY_Range_Max->setMaximum(9999999);
        spinBox_AxisY_Range_Max->setValue(1);
        pushButton_SetConfigChart = new QPushButton(tab);
        pushButton_SetConfigChart->setObjectName(QStringLiteral("pushButton_SetConfigChart"));
        pushButton_SetConfigChart->setGeometry(QRect(90, 125, 371, 51));
        pushButton_SetConfigChart->setFont(font);
        label_15 = new QLabel(tab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(40, 5, 101, 22));
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        spinBox_SampleTime = new QSpinBox(tab_2);
        spinBox_SampleTime->setObjectName(QStringLiteral("spinBox_SampleTime"));
        spinBox_SampleTime->setGeometry(QRect(170, 40, 111, 81));
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
"}"));
        spinBox_SampleTime->setMinimum(1);
        spinBox_SampleTime->setMaximum(9999999);
        spinBox_SampleTime->setValue(100);
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 70, 141, 22));
        label_13->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(290, 65, 41, 22));
        label_14->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_SetSampleTime = new QPushButton(tab_2);
        pushButton_SetSampleTime->setObjectName(QStringLiteral("pushButton_SetSampleTime"));
        pushButton_SetSampleTime->setGeometry(QRect(330, 50, 151, 61));
        pushButton_SetSampleTime->setFont(font);
        tabWidget->addTab(tab_2, QString());
        pushButton_Cancel = new QPushButton(Vchart_Zoom);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(1100, 660, 171, 41));
        pushButton_Cancel->setFont(font);
        pushButton_SaveData = new QPushButton(Vchart_Zoom);
        pushButton_SaveData->setObjectName(QStringLiteral("pushButton_SaveData"));
        pushButton_SaveData->setGeometry(QRect(1100, 550, 171, 41));
        pushButton_SaveData->setFont(font);
        pushButton_OpenData = new QPushButton(Vchart_Zoom);
        pushButton_OpenData->setObjectName(QStringLiteral("pushButton_OpenData"));
        pushButton_OpenData->setGeometry(QRect(1100, 500, 171, 41));
        pushButton_OpenData->setFont(font);
        frame = new QFrame(Vchart_Zoom);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(730, 500, 351, 121));
        frame->setStyleSheet(QStringLiteral("background-color: #132630;"));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_Stop = new QPushButton(frame);
        pushButton_Stop->setObjectName(QStringLiteral("pushButton_Stop"));
        pushButton_Stop->setGeometry(QRect(29, 30, 291, 61));
        pushButton_Stop->setFont(font1);
        pushButton_Stop->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));
        frame_trackLine = new QFrame(Vchart_Zoom);
        frame_trackLine->setObjectName(QStringLiteral("frame_trackLine"));
        frame_trackLine->setGeometry(QRect(11, 430, 411, 31));
        frame_trackLine->setFrameShape(QFrame::StyledPanel);
        frame_trackLine->setFrameShadow(QFrame::Raised);
        pushButton_TrackLine_Yax = new QPushButton(frame_trackLine);
        pushButton_TrackLine_Yax->setObjectName(QStringLiteral("pushButton_TrackLine_Yax"));
        pushButton_TrackLine_Yax->setGeometry(QRect(382, 2, 27, 27));
        pushButton_TrackLine_Yax->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/MFS0103_Track_yax.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_TrackLine_Yax->setIcon(icon1);
        pushButton_TrackLine_Yax->setIconSize(QSize(25, 25));
        pushButton_TrackLine_Default = new QPushButton(frame_trackLine);
        pushButton_TrackLine_Default->setObjectName(QStringLiteral("pushButton_TrackLine_Default"));
        pushButton_TrackLine_Default->setGeometry(QRect(2, 2, 27, 27));
        pushButton_TrackLine_Default->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/MFS0103_Track_D.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_TrackLine_Default->setIcon(icon2);
        pushButton_TrackLine_Default->setIconSize(QSize(25, 25));
        pushButton_TrackLine_Tooltip = new QPushButton(frame_trackLine);
        pushButton_TrackLine_Tooltip->setObjectName(QStringLiteral("pushButton_TrackLine_Tooltip"));
        pushButton_TrackLine_Tooltip->setGeometry(QRect(30, 2, 27, 27));
        pushButton_TrackLine_Tooltip->setFont(font1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/MFS0103_Track_T.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_TrackLine_Tooltip->setIcon(icon3);
        pushButton_TrackLine_Tooltip->setIconSize(QSize(25, 25));
        frame_setChart = new QFrame(Vchart_Zoom);
        frame_setChart->setObjectName(QStringLiteral("frame_setChart"));
        frame_setChart->setGeometry(QRect(859, 430, 411, 31));
        frame_setChart->setFrameShape(QFrame::StyledPanel);
        frame_setChart->setFrameShadow(QFrame::Raised);
        radioButton_Continuously = new QRadioButton(frame_setChart);
        radioButton_Continuously->setObjectName(QStringLiteral("radioButton_Continuously"));
        radioButton_Continuously->setGeometry(QRect(12, 2, 141, 27));
        radioButton_Continuously->setFont(font);
        radioButton_Continuously->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        radioButton_Continuously->setChecked(false);
        radioButton_Accumulation = new QRadioButton(frame_setChart);
        radioButton_Accumulation->setObjectName(QStringLiteral("radioButton_Accumulation"));
        radioButton_Accumulation->setGeometry(QRect(152, 2, 131, 27));
        radioButton_Accumulation->setFont(font);
        radioButton_Accumulation->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        radioButton_Accumulation->setChecked(true);
        pushButton_ClearChart = new QPushButton(frame_setChart);
        pushButton_ClearChart->setObjectName(QStringLiteral("pushButton_ClearChart"));
        pushButton_ClearChart->setGeometry(QRect(298, 2, 111, 27));
        pushButton_ClearChart->setFont(font1);

        retranslateUi(Vchart_Zoom);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Vchart_Zoom);
    } // setupUi

    void retranslateUi(QWidget *Vchart_Zoom)
    {
        Vchart_Zoom->setWindowTitle(QApplication::translate("Vchart_Zoom", "Ph\303\242n t\303\255ch", nullptr));
        groupBox_Analysis->setTitle(QApplication::translate("Vchart_Zoom", "\304\220\303\241nh gi\303\241 ph\303\251p \304\221o tr\303\252n 0 m\341\272\253u \304\221o:", nullptr));
        label_ValueMax->setText(QApplication::translate("Vchart_Zoom", "0", nullptr));
        label_ValueAvg->setText(QApplication::translate("Vchart_Zoom", "0", nullptr));
        label_ValueMin->setText(QApplication::translate("Vchart_Zoom", "0", nullptr));
        label->setText(QApplication::translate("Vchart_Zoom", "Gi\303\241 tr\341\273\213 \304\221o l\341\273\233n nh\341\272\245t:", nullptr));
        label_3->setText(QApplication::translate("Vchart_Zoom", "Gi\303\241 tr\341\273\213 \304\221o trung b\303\254nh:", nullptr));
        label_2->setText(QApplication::translate("Vchart_Zoom", "Gi\303\241 tr\341\273\213 \304\221o nh\341\273\217 nh\341\272\245t::", nullptr));
        label_4->setText(QApplication::translate("Vchart_Zoom", "T\303\252n:", nullptr));
        label_5->setText(QApplication::translate("Vchart_Zoom", "Ki\341\273\203u:", nullptr));
        label_6->setText(QApplication::translate("Vchart_Zoom", "M\303\243 S\303\252-ri:", nullptr));
        label_Device_Name->setText(QString());
        label_Device_Type->setText(QString());
        label_Device_SN->setText(QString());
        label_deviceUnit->setText(QApplication::translate("Vchart_Zoom", "\304\220\306\241n v\341\273\213 \304\221o", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Infor), QApplication::translate("Vchart_Zoom", "               Hi\341\273\203n th\341\273\213               ", nullptr));
        label_17->setText(QApplication::translate("Vchart_Zoom", "S\341\273\221 l\306\260\341\273\243ng m\341\272\253u (tr\341\273\245c X):", nullptr));
        label_16->setText(QApplication::translate("Vchart_Zoom", "Tr\341\273\245c Y - Cao", nullptr));
        pushButton_SetConfigChart->setText(QApplication::translate("Vchart_Zoom", "C\303\240i \304\221\341\272\267t \304\221\341\273\223 th\341\273\213", nullptr));
        label_15->setText(QApplication::translate("Vchart_Zoom", "Tr\341\273\245c Y - Th\341\272\245p", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Vchart_Zoom", "              \304\220\341\273\223 th\341\273\213               ", nullptr));
        label_13->setText(QApplication::translate("Vchart_Zoom", "Th\341\273\235i gian l\341\272\245y m\341\272\253u :", nullptr));
        label_14->setText(QApplication::translate("Vchart_Zoom", "(ms)", nullptr));
        pushButton_SetSampleTime->setText(QApplication::translate("Vchart_Zoom", "C\303\240i \304\221\341\272\267t", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Vchart_Zoom", "               C\303\240i \304\221\341\272\267t               ", nullptr));
        pushButton_Cancel->setText(QApplication::translate("Vchart_Zoom", "Tho\303\241t", nullptr));
        pushButton_SaveData->setText(QApplication::translate("Vchart_Zoom", "Ghi d\341\273\257 li\341\273\207u", nullptr));
        pushButton_OpenData->setText(QApplication::translate("Vchart_Zoom", "M\341\273\237 b\341\272\243n ghi", nullptr));
        pushButton_Stop->setText(QApplication::translate("Vchart_Zoom", "D\341\273\253ng", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_TrackLine_Yax->setToolTip(QApplication::translate("Vchart_Zoom", "t\303\255nh h\341\273\207 s\341\273\221 g\303\263c y=ax", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_TrackLine_Yax->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_TrackLine_Default->setToolTip(QApplication::translate("Vchart_Zoom", "tr\341\273\245c t\341\273\215a \304\221\341\273\231 \341\272\243o", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_TrackLine_Default->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_TrackLine_Tooltip->setToolTip(QApplication::translate("Vchart_Zoom", "b\341\272\257t \304\221i\341\273\203m", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_TrackLine_Tooltip->setText(QString());
        radioButton_Continuously->setText(QApplication::translate("Vchart_Zoom", "\304\220\341\273\223 th\341\273\213 li\303\252n t\341\273\245c", nullptr));
        radioButton_Accumulation->setText(QApplication::translate("Vchart_Zoom", "\304\220\341\273\223 th\341\273\213 t\303\255ch l\305\251y", nullptr));
        pushButton_ClearChart->setText(QApplication::translate("Vchart_Zoom", "X\303\263a \304\221\341\273\223 th\341\273\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vchart_Zoom: public Ui_Vchart_Zoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCHART_ZOOM_H
