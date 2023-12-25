/********************************************************************************
** Form generated from reading UI file 'sensor_sen0103.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSOR_SEN0103_H
#define UI_SENSOR_SEN0103_H

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

class Ui_Sensor_SEN0103
{
public:
    QPushButton *pushButton_ChartZoom;
    QPushButton *pushButton_Exit;
    QTabWidget *tabWidget;
    QWidget *tab_Infor_2;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_ValueMax_2;
    QLabel *label_ValueAvg_2;
    QLabel *label_ValueMin_2;
    QSpinBox *spinBox_setSample;
    QPushButton *pushButton_getSamples;
    QLabel *label_sampleInfo;
    QFrame *frame;
    QPushButton *pushButton_SetZero_2;
    QComboBox *comboBox_Unit;
    QLCDNumber *lcdNumber_Value_2;
    QCheckBox *checkBox_setMathAvg;
    QPushButton *pushButton;
    QWidget *tab_4;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_Name_2;
    QLabel *label_Address_2;
    QLabel *label_SerialNumber_2;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_Description_2;
    QWidget *tab_6;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *pushButton_SetSampleTime_2;
    QSpinBox *spinBox_SampleTime_2;
    QFrame *line_2;
    QPushButton *pushButton_Calib_2;
    QLabel *label_25;
    QLabel *label_calibInfo;
    QFrame *line;

    void setupUi(QWidget *Sensor_SEN0103)
    {
        if (Sensor_SEN0103->objectName().isEmpty())
            Sensor_SEN0103->setObjectName(QStringLiteral("Sensor_SEN0103"));
        Sensor_SEN0103->resize(600, 330);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/WHL0103_Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Sensor_SEN0103->setWindowIcon(icon);
        Sensor_SEN0103->setStyleSheet(QStringLiteral("background-color: rgb(62, 97, 109);"));
        pushButton_ChartZoom = new QPushButton(Sensor_SEN0103);
        pushButton_ChartZoom->setObjectName(QStringLiteral("pushButton_ChartZoom"));
        pushButton_ChartZoom->setGeometry(QRect(10, 280, 281, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_ChartZoom->setFont(font);
        pushButton_Exit = new QPushButton(Sensor_SEN0103);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(319, 280, 271, 41));
        pushButton_Exit->setFont(font);
        tabWidget = new QTabWidget(Sensor_SEN0103);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-2, 0, 605, 268));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        tabWidget->setFont(font1);
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
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_10);

        verticalLayoutWidget_7 = new QWidget(tab_Infor_2);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(480, 30, 101, 92));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_ValueMax_2 = new QLabel(verticalLayoutWidget_7);
        label_ValueMax_2->setObjectName(QStringLiteral("label_ValueMax_2"));
        label_ValueMax_2->setFont(font1);
        label_ValueMax_2->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));

        verticalLayout_7->addWidget(label_ValueMax_2);

        label_ValueAvg_2 = new QLabel(verticalLayoutWidget_7);
        label_ValueAvg_2->setObjectName(QStringLiteral("label_ValueAvg_2"));
        label_ValueAvg_2->setFont(font1);
        label_ValueAvg_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_7->addWidget(label_ValueAvg_2);

        label_ValueMin_2 = new QLabel(verticalLayoutWidget_7);
        label_ValueMin_2->setObjectName(QStringLiteral("label_ValueMin_2"));
        label_ValueMin_2->setFont(font1);
        label_ValueMin_2->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));

        verticalLayout_7->addWidget(label_ValueMin_2);

        spinBox_setSample = new QSpinBox(tab_Infor_2);
        spinBox_setSample->setObjectName(QStringLiteral("spinBox_setSample"));
        spinBox_setSample->setGeometry(QRect(340, 160, 128, 51));
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
        pushButton_getSamples->setGeometry(QRect(480, 160, 101, 51));
        pushButton_getSamples->setFont(font1);
        pushButton_getSamples->setStyleSheet(QStringLiteral(""));
        label_sampleInfo = new QLabel(tab_Infor_2);
        label_sampleInfo->setObjectName(QStringLiteral("label_sampleInfo"));
        label_sampleInfo->setGeometry(QRect(320, 0, 261, 26));
        label_sampleInfo->setFont(font);
        label_sampleInfo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame = new QFrame(tab_Infor_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 311, 221));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(62, 97, 109);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_SetZero_2 = new QPushButton(frame);
        pushButton_SetZero_2->setObjectName(QStringLiteral("pushButton_SetZero_2"));
        pushButton_SetZero_2->setGeometry(QRect(10, 150, 281, 51));
        pushButton_SetZero_2->setFont(font);
        comboBox_Unit = new QComboBox(frame);
        comboBox_Unit->addItem(QString());
        comboBox_Unit->addItem(QString());
        comboBox_Unit->addItem(QString());
        comboBox_Unit->addItem(QString());
        comboBox_Unit->setObjectName(QStringLiteral("comboBox_Unit"));
        comboBox_Unit->setGeometry(QRect(40, 110, 249, 32));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        comboBox_Unit->setFont(font2);
        comboBox_Unit->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lcdNumber_Value_2 = new QLCDNumber(frame);
        lcdNumber_Value_2->setObjectName(QStringLiteral("lcdNumber_Value_2"));
        lcdNumber_Value_2->setGeometry(QRect(10, 10, 281, 71));
        lcdNumber_Value_2->setStyleSheet(QLatin1String("background-color: #132630;\n"
"color: rgb(255, 170, 0);\n"
""));
        lcdNumber_Value_2->setFrameShape(QFrame::WinPanel);
        lcdNumber_Value_2->setLineWidth(1);
        lcdNumber_Value_2->setSmallDecimalPoint(false);
        lcdNumber_Value_2->setDigitCount(7);
        lcdNumber_Value_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Value_2->setProperty("value", QVariant(0));
        lcdNumber_Value_2->setProperty("intValue", QVariant(0));
        checkBox_setMathAvg = new QCheckBox(frame);
        checkBox_setMathAvg->setObjectName(QStringLiteral("checkBox_setMathAvg"));
        checkBox_setMathAvg->setGeometry(QRect(10, 80, 281, 27));
        checkBox_setMathAvg->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 110, 32, 32));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));
        tabWidget->addTab(tab_Infor_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayoutWidget_8 = new QWidget(tab_4);
        verticalLayoutWidget_8->setObjectName(QStringLiteral("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(150, 10, 291, 101));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_Name_2 = new QLabel(verticalLayoutWidget_8);
        label_Name_2->setObjectName(QStringLiteral("label_Name_2"));
        label_Name_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(label_Name_2);

        label_Address_2 = new QLabel(verticalLayoutWidget_8);
        label_Address_2->setObjectName(QStringLiteral("label_Address_2"));
        label_Address_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(label_Address_2);

        label_SerialNumber_2 = new QLabel(verticalLayoutWidget_8);
        label_SerialNumber_2->setObjectName(QStringLiteral("label_SerialNumber_2"));
        label_SerialNumber_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(label_SerialNumber_2);

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
        label_Description_2 = new QLabel(verticalLayoutWidget_10);
        label_Description_2->setObjectName(QStringLiteral("label_Description_2"));
        label_Description_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Description_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_10->addWidget(label_Description_2);

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
        pushButton_SetSampleTime_2 = new QPushButton(tab_6);
        pushButton_SetSampleTime_2->setObjectName(QStringLiteral("pushButton_SetSampleTime_2"));
        pushButton_SetSampleTime_2->setGeometry(QRect(320, 20, 161, 61));
        pushButton_SetSampleTime_2->setFont(font1);
        spinBox_SampleTime_2 = new QSpinBox(tab_6);
        spinBox_SampleTime_2->setObjectName(QStringLiteral("spinBox_SampleTime_2"));
        spinBox_SampleTime_2->setGeometry(QRect(160, 10, 111, 81));
        spinBox_SampleTime_2->setStyleSheet(QLatin1String("QSpinBox\n"
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
        spinBox_SampleTime_2->setMinimum(10);
        spinBox_SampleTime_2->setMaximum(9999999);
        spinBox_SampleTime_2->setValue(100);
        line_2 = new QFrame(tab_6);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 100, 541, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_Calib_2 = new QPushButton(tab_6);
        pushButton_Calib_2->setObjectName(QStringLiteral("pushButton_Calib_2"));
        pushButton_Calib_2->setGeometry(QRect(320, 120, 161, 61));
        pushButton_Calib_2->setFont(font);
        label_25 = new QLabel(tab_6);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 139, 231, 22));
        label_25->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_calibInfo = new QLabel(tab_6);
        label_calibInfo->setObjectName(QStringLiteral("label_calibInfo"));
        label_calibInfo->setGeometry(QRect(40, 160, 271, 22));
        QFont font3;
        font3.setItalic(true);
        label_calibInfo->setFont(font3);
        label_calibInfo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 127);"));
        tabWidget->addTab(tab_6, QString());
        line = new QFrame(Sensor_SEN0103);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-2, 266, 605, 5));
        line->setStyleSheet(QStringLiteral("background-color: rgb(255, 111, 0);"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        retranslateUi(Sensor_SEN0103);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Sensor_SEN0103);
    } // setupUi

    void retranslateUi(QWidget *Sensor_SEN0103)
    {
        Sensor_SEN0103->setWindowTitle(QApplication::translate("Sensor_SEN0103", "Form", nullptr));
        pushButton_ChartZoom->setText(QApplication::translate("Sensor_SEN0103", "\304\220\341\273\223 th\341\273\213", nullptr));
        pushButton_Exit->setText(QApplication::translate("Sensor_SEN0103", "Tho\303\241t", nullptr));
        label_8->setText(QApplication::translate("Sensor_SEN0103", "Gi\303\241 tr\341\273\213 l\341\273\233n nh\341\272\245t", nullptr));
        label_9->setText(QApplication::translate("Sensor_SEN0103", "Gi\303\241 tr\341\273\213 trung b\303\254nh", nullptr));
        label_10->setText(QApplication::translate("Sensor_SEN0103", "Gi\303\241 tr\341\273\213 nh\341\273\217 nh\341\272\245t", nullptr));
        label_ValueMax_2->setText(QApplication::translate("Sensor_SEN0103", "0", nullptr));
        label_ValueAvg_2->setText(QApplication::translate("Sensor_SEN0103", "0", nullptr));
        label_ValueMin_2->setText(QApplication::translate("Sensor_SEN0103", "0", nullptr));
        pushButton_getSamples->setText(QApplication::translate("Sensor_SEN0103", "B\341\272\257t \304\221\341\272\247u", nullptr));
        label_sampleInfo->setText(QApplication::translate("Sensor_SEN0103", "C\303\241c tham s\341\273\221 c\306\241 b\341\272\243n", nullptr));
        pushButton_SetZero_2->setText(QApplication::translate("Sensor_SEN0103", "Thi\341\272\277t l\341\272\255p \304\221i\341\273\203m 0 (Zero)", nullptr));
        comboBox_Unit->setItemText(0, QApplication::translate("Sensor_SEN0103", "\304\220o tr\341\273\215ng l\306\260\341\273\243ng (N - Newton, g=9.8)", nullptr));
        comboBox_Unit->setItemText(1, QApplication::translate("Sensor_SEN0103", "\304\220o kh\341\273\221i l\306\260\341\273\243ng (G - Gram)", nullptr));
        comboBox_Unit->setItemText(2, QApplication::translate("Sensor_SEN0103", "\304\220o kh\341\273\221i l\306\260\341\273\243ng (Kg - KiloGram)", nullptr));
        comboBox_Unit->setItemText(3, QApplication::translate("Sensor_SEN0103", "\304\220o l\341\273\261c (N - Newton)", nullptr));

        checkBox_setMathAvg->setText(QApplication::translate("Sensor_SEN0103", "S\341\273\255 d\341\273\245ng gi\303\241 tr\341\273\213 trung b\303\254nh c\341\273\231ng", nullptr));
        pushButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_Infor_2), QApplication::translate("Sensor_SEN0103", "            Hi\341\273\203n th\341\273\213            ", nullptr));
        label_Name_2->setText(QString());
        label_Address_2->setText(QString());
        label_SerialNumber_2->setText(QString());
        label_13->setText(QApplication::translate("Sensor_SEN0103", "T\303\252n thi\341\272\277t b\341\273\213:", nullptr));
        label_14->setText(QApplication::translate("Sensor_SEN0103", "\304\220\341\273\213a ch\341\273\211:", nullptr));
        label_18->setText(QApplication::translate("Sensor_SEN0103", "M\303\243 s\303\252-ri:", nullptr));
        label_19->setText(QApplication::translate("Sensor_SEN0103", "M\303\264 t\341\272\243:", nullptr));
        label_Description_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Sensor_SEN0103", "            Thi\341\272\277t b\341\273\213            ", nullptr));
        label_23->setText(QApplication::translate("Sensor_SEN0103", "(ms)", nullptr));
        label_24->setText(QApplication::translate("Sensor_SEN0103", "Th\341\273\235i gian l\341\272\245y m\341\272\253u :", nullptr));
        pushButton_SetSampleTime_2->setText(QApplication::translate("Sensor_SEN0103", "C\303\240i \304\221\341\272\267t", nullptr));
        pushButton_Calib_2->setText(QApplication::translate("Sensor_SEN0103", "Hi\341\273\207u chu\341\272\251n", nullptr));
        label_25->setText(QApplication::translate("Sensor_SEN0103", "Hi\341\273\207u chu\341\272\251n thi\341\272\277t b\341\273\213 :", nullptr));
        label_calibInfo->setText(QApplication::translate("Sensor_SEN0103", "(ch\306\260a hi\341\273\207u chu\341\272\251n)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Sensor_SEN0103", "           C\303\240i \304\221\341\272\267t            ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sensor_SEN0103: public Ui_Sensor_SEN0103 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSOR_SEN0103_H
