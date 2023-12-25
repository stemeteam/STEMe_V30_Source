/********************************************************************************
** Form generated from reading UI file 'sensor_sen0104.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSOR_SEN0104_H
#define UI_SENSOR_SEN0104_H

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

class Ui_Sensor_SEN0104
{
public:
    QPushButton *pushButton_Exit;
    QPushButton *pushButton_ChartZoom;
    QTabWidget *tabWidget;
    QWidget *tab_Infor_3;
    QLCDNumber *lcdNumber_Value;
    QPushButton *pushButton_2;
    QSpinBox *spinBox_setSample;
    QPushButton *pushButton_getSamples;
    QLabel *label_sampleInfo;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_15;
    QWidget *verticalLayoutWidget_12;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_ValueMax;
    QLabel *label_ValueAvg;
    QLabel *label_ValueMin;
    QComboBox *comboBox_Value_Unit;
    QCheckBox *checkBox_setMathAvg;
    QPushButton *pushButton_SetZero;
    QWidget *tab_5;
    QWidget *verticalLayoutWidget_13;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_Name;
    QLabel *label_Address;
    QLabel *label_SerialNumber;
    QWidget *verticalLayoutWidget_14;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *verticalLayoutWidget_15;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_Description;
    QWidget *tab_7;
    QLabel *label_26;
    QLabel *label_27;
    QPushButton *pushButton_SetSampleTime;
    QSpinBox *spinBox_SampleTime;
    QFrame *line_3;
    QPushButton *pushButton_Calib;
    QLabel *label_28;
    QLabel *label_calibInfo;
    QFrame *line;

    void setupUi(QWidget *Sensor_SEN0104)
    {
        if (Sensor_SEN0104->objectName().isEmpty())
            Sensor_SEN0104->setObjectName(QStringLiteral("Sensor_SEN0104"));
        Sensor_SEN0104->resize(600, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/PSR0104_Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Sensor_SEN0104->setWindowIcon(icon);
        Sensor_SEN0104->setStyleSheet(QStringLiteral("background-color: rgb(62, 97, 109);"));
        pushButton_Exit = new QPushButton(Sensor_SEN0104);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(320, 249, 271, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_Exit->setFont(font);
        pushButton_ChartZoom = new QPushButton(Sensor_SEN0104);
        pushButton_ChartZoom->setObjectName(QStringLiteral("pushButton_ChartZoom"));
        pushButton_ChartZoom->setGeometry(QRect(11, 250, 281, 41));
        pushButton_ChartZoom->setFont(font);
        tabWidget = new QTabWidget(Sensor_SEN0104);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-2, 0, 605, 238));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(62, 97, 109);"));
        tabWidget->setElideMode(Qt::ElideNone);
        tab_Infor_3 = new QWidget();
        tab_Infor_3->setObjectName(QStringLiteral("tab_Infor_3"));
        lcdNumber_Value = new QLCDNumber(tab_Infor_3);
        lcdNumber_Value->setObjectName(QStringLiteral("lcdNumber_Value"));
        lcdNumber_Value->setGeometry(QRect(10, 10, 281, 71));
        lcdNumber_Value->setStyleSheet(QLatin1String("background-color: rgb(0, 70, 102);\n"
"color: rgb(0, 243, 178);\n"
""));
        lcdNumber_Value->setFrameShape(QFrame::WinPanel);
        lcdNumber_Value->setLineWidth(1);
        lcdNumber_Value->setSmallDecimalPoint(false);
        lcdNumber_Value->setDigitCount(10);
        lcdNumber_Value->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Value->setProperty("value", QVariant(0));
        lcdNumber_Value->setProperty("intValue", QVariant(0));
        pushButton_2 = new QPushButton(tab_Infor_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 120, 32, 32));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(32, 32));
        spinBox_setSample = new QSpinBox(tab_Infor_3);
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
        spinBox_setSample->setMinimum(10);
        spinBox_setSample->setMaximum(9999999);
        spinBox_setSample->setValue(100);
        pushButton_getSamples = new QPushButton(tab_Infor_3);
        pushButton_getSamples->setObjectName(QStringLiteral("pushButton_getSamples"));
        pushButton_getSamples->setGeometry(QRect(480, 130, 101, 51));
        pushButton_getSamples->setFont(font1);
        pushButton_getSamples->setStyleSheet(QStringLiteral(""));
        label_sampleInfo = new QLabel(tab_Infor_3);
        label_sampleInfo->setObjectName(QStringLiteral("label_sampleInfo"));
        label_sampleInfo->setGeometry(QRect(320, 0, 261, 26));
        label_sampleInfo->setFont(font);
        label_sampleInfo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        verticalLayoutWidget_11 = new QWidget(tab_Infor_3);
        verticalLayoutWidget_11->setObjectName(QStringLiteral("verticalLayoutWidget_11"));
        verticalLayoutWidget_11->setGeometry(QRect(340, 30, 128, 92));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(verticalLayoutWidget_11);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_11->addWidget(label_11);

        label_12 = new QLabel(verticalLayoutWidget_11);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);
        label_12->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_11->addWidget(label_12);

        label_15 = new QLabel(verticalLayoutWidget_11);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_11->addWidget(label_15);

        verticalLayoutWidget_12 = new QWidget(tab_Infor_3);
        verticalLayoutWidget_12->setObjectName(QStringLiteral("verticalLayoutWidget_12"));
        verticalLayoutWidget_12->setGeometry(QRect(480, 30, 101, 92));
        verticalLayout_12 = new QVBoxLayout(verticalLayoutWidget_12);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_ValueMax = new QLabel(verticalLayoutWidget_12);
        label_ValueMax->setObjectName(QStringLiteral("label_ValueMax"));
        label_ValueMax->setFont(font1);
        label_ValueMax->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));

        verticalLayout_12->addWidget(label_ValueMax);

        label_ValueAvg = new QLabel(verticalLayoutWidget_12);
        label_ValueAvg->setObjectName(QStringLiteral("label_ValueAvg"));
        label_ValueAvg->setFont(font1);
        label_ValueAvg->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_12->addWidget(label_ValueAvg);

        label_ValueMin = new QLabel(verticalLayoutWidget_12);
        label_ValueMin->setObjectName(QStringLiteral("label_ValueMin"));
        label_ValueMin->setFont(font1);
        label_ValueMin->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));

        verticalLayout_12->addWidget(label_ValueMin);

        comboBox_Value_Unit = new QComboBox(tab_Infor_3);
        comboBox_Value_Unit->addItem(QString());
        comboBox_Value_Unit->addItem(QString());
        comboBox_Value_Unit->addItem(QString());
        comboBox_Value_Unit->addItem(QString());
        comboBox_Value_Unit->addItem(QString());
        comboBox_Value_Unit->addItem(QString());
        comboBox_Value_Unit->addItem(QString());
        comboBox_Value_Unit->setObjectName(QStringLiteral("comboBox_Value_Unit"));
        comboBox_Value_Unit->setGeometry(QRect(43, 120, 248, 32));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        comboBox_Value_Unit->setFont(font2);
        comboBox_Value_Unit->setLayoutDirection(Qt::LeftToRight);
        comboBox_Value_Unit->setAutoFillBackground(false);
        comboBox_Value_Unit->setStyleSheet(QStringLiteral(""));
        comboBox_Value_Unit->setEditable(false);
        checkBox_setMathAvg = new QCheckBox(tab_Infor_3);
        checkBox_setMathAvg->setObjectName(QStringLiteral("checkBox_setMathAvg"));
        checkBox_setMathAvg->setGeometry(QRect(10, 86, 281, 27));
        checkBox_setMathAvg->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_SetZero = new QPushButton(tab_Infor_3);
        pushButton_SetZero->setObjectName(QStringLiteral("pushButton_SetZero"));
        pushButton_SetZero->setGeometry(QRect(10, 160, 281, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        pushButton_SetZero->setFont(font3);
        pushButton_SetZero->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        tabWidget->addTab(tab_Infor_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayoutWidget_13 = new QWidget(tab_5);
        verticalLayoutWidget_13->setObjectName(QStringLiteral("verticalLayoutWidget_13"));
        verticalLayoutWidget_13->setGeometry(QRect(150, 10, 291, 101));
        verticalLayout_13 = new QVBoxLayout(verticalLayoutWidget_13);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_Name = new QLabel(verticalLayoutWidget_13);
        label_Name->setObjectName(QStringLiteral("label_Name"));
        label_Name->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_13->addWidget(label_Name);

        label_Address = new QLabel(verticalLayoutWidget_13);
        label_Address->setObjectName(QStringLiteral("label_Address"));
        label_Address->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_13->addWidget(label_Address);

        label_SerialNumber = new QLabel(verticalLayoutWidget_13);
        label_SerialNumber->setObjectName(QStringLiteral("label_SerialNumber"));
        label_SerialNumber->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_13->addWidget(label_SerialNumber);

        verticalLayoutWidget_14 = new QWidget(tab_5);
        verticalLayoutWidget_14->setObjectName(QStringLiteral("verticalLayoutWidget_14"));
        verticalLayoutWidget_14->setGeometry(QRect(10, 10, 111, 131));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget_14);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(verticalLayoutWidget_14);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_14->addWidget(label_16);

        label_17 = new QLabel(verticalLayoutWidget_14);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_14->addWidget(label_17);

        label_20 = new QLabel(verticalLayoutWidget_14);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_14->addWidget(label_20);

        label_21 = new QLabel(verticalLayoutWidget_14);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_14->addWidget(label_21);

        verticalLayoutWidget_15 = new QWidget(tab_5);
        verticalLayoutWidget_15->setObjectName(QStringLiteral("verticalLayoutWidget_15"));
        verticalLayoutWidget_15->setGeometry(QRect(150, 110, 291, 61));
        verticalLayout_15 = new QVBoxLayout(verticalLayoutWidget_15);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_Description = new QLabel(verticalLayoutWidget_15);
        label_Description->setObjectName(QStringLiteral("label_Description"));
        label_Description->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_15->addWidget(label_Description);

        tabWidget->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_26 = new QLabel(tab_7);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(277, 40, 41, 22));
        label_26->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_27 = new QLabel(tab_7);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(20, 40, 141, 22));
        label_27->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_SetSampleTime = new QPushButton(tab_7);
        pushButton_SetSampleTime->setObjectName(QStringLiteral("pushButton_SetSampleTime"));
        pushButton_SetSampleTime->setGeometry(QRect(320, 20, 161, 61));
        pushButton_SetSampleTime->setFont(font1);
        spinBox_SampleTime = new QSpinBox(tab_7);
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
        line_3 = new QFrame(tab_7);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 100, 541, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pushButton_Calib = new QPushButton(tab_7);
        pushButton_Calib->setObjectName(QStringLiteral("pushButton_Calib"));
        pushButton_Calib->setGeometry(QRect(320, 120, 161, 61));
        pushButton_Calib->setFont(font);
        label_28 = new QLabel(tab_7);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 139, 231, 22));
        label_28->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_calibInfo = new QLabel(tab_7);
        label_calibInfo->setObjectName(QStringLiteral("label_calibInfo"));
        label_calibInfo->setGeometry(QRect(30, 160, 271, 22));
        QFont font4;
        font4.setItalic(true);
        label_calibInfo->setFont(font4);
        label_calibInfo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 127);"));
        tabWidget->addTab(tab_7, QString());
        line = new QFrame(Sensor_SEN0104);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-2, 236, 605, 5));
        line->setStyleSheet(QStringLiteral("background-color: rgb(42, 187, 154);"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        retranslateUi(Sensor_SEN0104);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Sensor_SEN0104);
    } // setupUi

    void retranslateUi(QWidget *Sensor_SEN0104)
    {
        Sensor_SEN0104->setWindowTitle(QApplication::translate("Sensor_SEN0104", "Form", nullptr));
        pushButton_Exit->setText(QApplication::translate("Sensor_SEN0104", "Tho\303\241t", nullptr));
        pushButton_ChartZoom->setText(QApplication::translate("Sensor_SEN0104", "\304\220\341\273\223 th\341\273\213", nullptr));
        pushButton_2->setText(QString());
        pushButton_getSamples->setText(QApplication::translate("Sensor_SEN0104", "B\341\272\257t \304\221\341\272\247u", nullptr));
        label_sampleInfo->setText(QApplication::translate("Sensor_SEN0104", "C\303\241c tham s\341\273\221 c\306\241 b\341\272\243n", nullptr));
        label_11->setText(QApplication::translate("Sensor_SEN0104", "Gi\303\241 tr\341\273\213 l\341\273\233n nh\341\272\245t", nullptr));
        label_12->setText(QApplication::translate("Sensor_SEN0104", "Gi\303\241 tr\341\273\213 trung b\303\254nh", nullptr));
        label_15->setText(QApplication::translate("Sensor_SEN0104", "Gi\303\241 tr\341\273\213 nh\341\273\217 nh\341\272\245t", nullptr));
        label_ValueMax->setText(QApplication::translate("Sensor_SEN0104", "0", nullptr));
        label_ValueAvg->setText(QApplication::translate("Sensor_SEN0104", "0", nullptr));
        label_ValueMin->setText(QApplication::translate("Sensor_SEN0104", "0", nullptr));
        comboBox_Value_Unit->setItemText(0, QApplication::translate("Sensor_SEN0104", "\304\220o theo Pa (1 Pa = N/m2)", nullptr));
        comboBox_Value_Unit->setItemText(1, QApplication::translate("Sensor_SEN0104", "\304\220o theo hPa (1 hPa = 100 Pa)", nullptr));
        comboBox_Value_Unit->setItemText(2, QApplication::translate("Sensor_SEN0104", "\304\220o theo KPa (1 KPa = 1000 Pa)", nullptr));
        comboBox_Value_Unit->setItemText(3, QApplication::translate("Sensor_SEN0104", "\304\220o theo Atm (1 Atm = 101325 Pa)", nullptr));
        comboBox_Value_Unit->setItemText(4, QApplication::translate("Sensor_SEN0104", "\304\220o theo Bar (1 Bar = 100000 Pa)", nullptr));
        comboBox_Value_Unit->setItemText(5, QApplication::translate("Sensor_SEN0104", "\304\220o theo Baria (1 Baria = 0.1 Pa)", nullptr));
        comboBox_Value_Unit->setItemText(6, QApplication::translate("Sensor_SEN0104", "\304\220o theo Torr (1 Torr = 133.322Pa)", nullptr));

        comboBox_Value_Unit->setCurrentText(QApplication::translate("Sensor_SEN0104", "\304\220o theo Pa (1 Pa = N/m2)", nullptr));
        checkBox_setMathAvg->setText(QApplication::translate("Sensor_SEN0104", "S\341\273\255 d\341\273\245ng gi\303\241 tr\341\273\213 trung b\303\254nh c\341\273\231ng", nullptr));
        pushButton_SetZero->setText(QApplication::translate("Sensor_SEN0104", "Thi\341\272\277t l\341\272\255p \304\221i\341\273\203m 0 (Zero)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Infor_3), QApplication::translate("Sensor_SEN0104", "            Hi\341\273\203n th\341\273\213            ", nullptr));
        label_Name->setText(QString());
        label_Address->setText(QString());
        label_SerialNumber->setText(QString());
        label_16->setText(QApplication::translate("Sensor_SEN0104", "T\303\252n thi\341\272\277t b\341\273\213:", nullptr));
        label_17->setText(QApplication::translate("Sensor_SEN0104", "\304\220\341\273\213a ch\341\273\211:", nullptr));
        label_20->setText(QApplication::translate("Sensor_SEN0104", "M\303\243 s\303\252-ri:", nullptr));
        label_21->setText(QApplication::translate("Sensor_SEN0104", "M\303\264 t\341\272\243:", nullptr));
        label_Description->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Sensor_SEN0104", "            Thi\341\272\277t b\341\273\213            ", nullptr));
        label_26->setText(QApplication::translate("Sensor_SEN0104", "(ms)", nullptr));
        label_27->setText(QApplication::translate("Sensor_SEN0104", "Th\341\273\235i gian l\341\272\245y m\341\272\253u :", nullptr));
        pushButton_SetSampleTime->setText(QApplication::translate("Sensor_SEN0104", "C\303\240i \304\221\341\272\267t", nullptr));
        pushButton_Calib->setText(QApplication::translate("Sensor_SEN0104", "Hi\341\273\207u chu\341\272\251n", nullptr));
        label_28->setText(QApplication::translate("Sensor_SEN0104", "Hi\341\273\207u chu\341\272\251n thi\341\272\277t b\341\273\213 :", nullptr));
        label_calibInfo->setText(QApplication::translate("Sensor_SEN0104", "(ch\306\260a hi\341\273\207u chu\341\272\251n)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("Sensor_SEN0104", "           C\303\240i \304\221\341\272\267t            ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sensor_SEN0104: public Ui_Sensor_SEN0104 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSOR_SEN0104_H
