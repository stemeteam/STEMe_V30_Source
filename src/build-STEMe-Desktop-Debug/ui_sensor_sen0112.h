/********************************************************************************
** Form generated from reading UI file 'sensor_sen0112.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSOR_SEN0112_H
#define UI_SENSOR_SEN0112_H

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

class Ui_Sensor_SEN0112
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_Infor_3;
    QLCDNumber *lcdNumber_Value_2;
    QPushButton *pushButton_2;
    QComboBox *comboBox_Temp_Unit_2;
    QSpinBox *spinBox_setSample_2;
    QPushButton *pushButton_getSamples_2;
    QLabel *label_sampleInfo_2;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *verticalLayoutWidget_12;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_ValueMax_2;
    QLabel *label_ValueAvg_2;
    QLabel *label_ValueMin_2;
    QCheckBox *checkBox_setMathAvg_2;
    QWidget *tab_5;
    QWidget *verticalLayoutWidget_13;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_Name_2;
    QLabel *label_Address_2;
    QLabel *label_SerialNumber_2;
    QWidget *verticalLayoutWidget_14;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_26;
    QWidget *verticalLayoutWidget_15;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_Description_2;
    QWidget *tab_7;
    QLabel *label_27;
    QLabel *label_28;
    QPushButton *pushButton_SetSampleTime_2;
    QSpinBox *spinBox_SampleTime_2;
    QFrame *line_3;
    QPushButton *pushButton_Calib_2;
    QLabel *label_29;
    QLabel *label_calibInfo_2;
    QPushButton *pushButton_ChartZoom;
    QPushButton *pushButton_Exit;
    QFrame *line;

    void setupUi(QWidget *Sensor_SEN0112)
    {
        if (Sensor_SEN0112->objectName().isEmpty())
            Sensor_SEN0112->setObjectName(QStringLiteral("Sensor_SEN0112"));
        Sensor_SEN0112->resize(600, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/ALS0112_Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Sensor_SEN0112->setWindowIcon(icon);
        Sensor_SEN0112->setStyleSheet(QStringLiteral("background-color: rgb(62, 97, 109);"));
        tabWidget = new QTabWidget(Sensor_SEN0112);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-2, 0, 605, 238));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(62, 97, 109);"));
        tabWidget->setElideMode(Qt::ElideNone);
        tab_Infor_3 = new QWidget();
        tab_Infor_3->setObjectName(QStringLiteral("tab_Infor_3"));
        lcdNumber_Value_2 = new QLCDNumber(tab_Infor_3);
        lcdNumber_Value_2->setObjectName(QStringLiteral("lcdNumber_Value_2"));
        lcdNumber_Value_2->setGeometry(QRect(10, 10, 281, 71));
        lcdNumber_Value_2->setStyleSheet(QLatin1String("background-color: rgb(0, 70, 102);\n"
"color: rgb(0, 255, 255);"));
        lcdNumber_Value_2->setFrameShape(QFrame::WinPanel);
        lcdNumber_Value_2->setLineWidth(1);
        lcdNumber_Value_2->setSmallDecimalPoint(false);
        lcdNumber_Value_2->setDigitCount(7);
        lcdNumber_Value_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Value_2->setProperty("value", QVariant(0));
        lcdNumber_Value_2->setProperty("intValue", QVariant(0));
        pushButton_2 = new QPushButton(tab_Infor_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 120, 32, 32));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/MSS0132_Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));
        comboBox_Temp_Unit_2 = new QComboBox(tab_Infor_3);
        comboBox_Temp_Unit_2->addItem(QString());
        comboBox_Temp_Unit_2->setObjectName(QStringLiteral("comboBox_Temp_Unit_2"));
        comboBox_Temp_Unit_2->setGeometry(QRect(43, 120, 248, 32));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        comboBox_Temp_Unit_2->setFont(font1);
        comboBox_Temp_Unit_2->setLayoutDirection(Qt::LeftToRight);
        comboBox_Temp_Unit_2->setStyleSheet(QStringLiteral(""));
        comboBox_Temp_Unit_2->setEditable(false);
        spinBox_setSample_2 = new QSpinBox(tab_Infor_3);
        spinBox_setSample_2->setObjectName(QStringLiteral("spinBox_setSample_2"));
        spinBox_setSample_2->setGeometry(QRect(340, 130, 128, 51));
        spinBox_setSample_2->setStyleSheet(QLatin1String("QSpinBox\n"
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
        spinBox_setSample_2->setMinimum(10);
        spinBox_setSample_2->setMaximum(9999999);
        spinBox_setSample_2->setValue(100);
        pushButton_getSamples_2 = new QPushButton(tab_Infor_3);
        pushButton_getSamples_2->setObjectName(QStringLiteral("pushButton_getSamples_2"));
        pushButton_getSamples_2->setGeometry(QRect(480, 130, 101, 51));
        pushButton_getSamples_2->setFont(font);
        pushButton_getSamples_2->setStyleSheet(QStringLiteral(""));
        label_sampleInfo_2 = new QLabel(tab_Infor_3);
        label_sampleInfo_2->setObjectName(QStringLiteral("label_sampleInfo_2"));
        label_sampleInfo_2->setGeometry(QRect(320, 0, 261, 26));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_sampleInfo_2->setFont(font2);
        label_sampleInfo_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        verticalLayoutWidget_11 = new QWidget(tab_Infor_3);
        verticalLayoutWidget_11->setObjectName(QStringLiteral("verticalLayoutWidget_11"));
        verticalLayoutWidget_11->setGeometry(QRect(340, 30, 128, 92));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget_11);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        label_12->setFont(font3);
        label_12->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_11->addWidget(label_12);

        label_15 = new QLabel(verticalLayoutWidget_11);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font3);
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_11->addWidget(label_15);

        label_16 = new QLabel(verticalLayoutWidget_11);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font3);
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_11->addWidget(label_16);

        verticalLayoutWidget_12 = new QWidget(tab_Infor_3);
        verticalLayoutWidget_12->setObjectName(QStringLiteral("verticalLayoutWidget_12"));
        verticalLayoutWidget_12->setGeometry(QRect(480, 30, 101, 92));
        verticalLayout_12 = new QVBoxLayout(verticalLayoutWidget_12);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_ValueMax_2 = new QLabel(verticalLayoutWidget_12);
        label_ValueMax_2->setObjectName(QStringLiteral("label_ValueMax_2"));
        label_ValueMax_2->setFont(font);
        label_ValueMax_2->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));

        verticalLayout_12->addWidget(label_ValueMax_2);

        label_ValueAvg_2 = new QLabel(verticalLayoutWidget_12);
        label_ValueAvg_2->setObjectName(QStringLiteral("label_ValueAvg_2"));
        label_ValueAvg_2->setFont(font);
        label_ValueAvg_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_12->addWidget(label_ValueAvg_2);

        label_ValueMin_2 = new QLabel(verticalLayoutWidget_12);
        label_ValueMin_2->setObjectName(QStringLiteral("label_ValueMin_2"));
        label_ValueMin_2->setFont(font);
        label_ValueMin_2->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));

        verticalLayout_12->addWidget(label_ValueMin_2);

        checkBox_setMathAvg_2 = new QCheckBox(tab_Infor_3);
        checkBox_setMathAvg_2->setObjectName(QStringLiteral("checkBox_setMathAvg_2"));
        checkBox_setMathAvg_2->setGeometry(QRect(10, 90, 281, 27));
        checkBox_setMathAvg_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_Infor_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayoutWidget_13 = new QWidget(tab_5);
        verticalLayoutWidget_13->setObjectName(QStringLiteral("verticalLayoutWidget_13"));
        verticalLayoutWidget_13->setGeometry(QRect(150, 10, 291, 101));
        verticalLayout_13 = new QVBoxLayout(verticalLayoutWidget_13);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_Name_2 = new QLabel(verticalLayoutWidget_13);
        label_Name_2->setObjectName(QStringLiteral("label_Name_2"));
        label_Name_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_13->addWidget(label_Name_2);

        label_Address_2 = new QLabel(verticalLayoutWidget_13);
        label_Address_2->setObjectName(QStringLiteral("label_Address_2"));
        label_Address_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_13->addWidget(label_Address_2);

        label_SerialNumber_2 = new QLabel(verticalLayoutWidget_13);
        label_SerialNumber_2->setObjectName(QStringLiteral("label_SerialNumber_2"));
        label_SerialNumber_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_13->addWidget(label_SerialNumber_2);

        verticalLayoutWidget_14 = new QWidget(tab_5);
        verticalLayoutWidget_14->setObjectName(QStringLiteral("verticalLayoutWidget_14"));
        verticalLayoutWidget_14->setGeometry(QRect(10, 10, 111, 131));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget_14);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(verticalLayoutWidget_14);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_14->addWidget(label_20);

        label_21 = new QLabel(verticalLayoutWidget_14);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_14->addWidget(label_21);

        label_22 = new QLabel(verticalLayoutWidget_14);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_14->addWidget(label_22);

        label_26 = new QLabel(verticalLayoutWidget_14);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_14->addWidget(label_26);

        verticalLayoutWidget_15 = new QWidget(tab_5);
        verticalLayoutWidget_15->setObjectName(QStringLiteral("verticalLayoutWidget_15"));
        verticalLayoutWidget_15->setGeometry(QRect(150, 110, 291, 61));
        verticalLayout_15 = new QVBoxLayout(verticalLayoutWidget_15);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_Description_2 = new QLabel(verticalLayoutWidget_15);
        label_Description_2->setObjectName(QStringLiteral("label_Description_2"));
        label_Description_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Description_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_15->addWidget(label_Description_2);

        tabWidget->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_27 = new QLabel(tab_7);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(277, 40, 41, 22));
        label_27->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_28 = new QLabel(tab_7);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 40, 141, 22));
        label_28->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_SetSampleTime_2 = new QPushButton(tab_7);
        pushButton_SetSampleTime_2->setObjectName(QStringLiteral("pushButton_SetSampleTime_2"));
        pushButton_SetSampleTime_2->setGeometry(QRect(320, 20, 161, 61));
        pushButton_SetSampleTime_2->setFont(font);
        spinBox_SampleTime_2 = new QSpinBox(tab_7);
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
        line_3 = new QFrame(tab_7);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 100, 541, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pushButton_Calib_2 = new QPushButton(tab_7);
        pushButton_Calib_2->setObjectName(QStringLiteral("pushButton_Calib_2"));
        pushButton_Calib_2->setGeometry(QRect(320, 120, 161, 61));
        pushButton_Calib_2->setFont(font2);
        label_29 = new QLabel(tab_7);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 139, 231, 22));
        label_29->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_calibInfo_2 = new QLabel(tab_7);
        label_calibInfo_2->setObjectName(QStringLiteral("label_calibInfo_2"));
        label_calibInfo_2->setGeometry(QRect(40, 160, 271, 22));
        QFont font4;
        font4.setItalic(true);
        label_calibInfo_2->setFont(font4);
        label_calibInfo_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 127);"));
        tabWidget->addTab(tab_7, QString());
        pushButton_ChartZoom = new QPushButton(Sensor_SEN0112);
        pushButton_ChartZoom->setObjectName(QStringLiteral("pushButton_ChartZoom"));
        pushButton_ChartZoom->setGeometry(QRect(11, 250, 281, 41));
        pushButton_ChartZoom->setFont(font2);
        pushButton_Exit = new QPushButton(Sensor_SEN0112);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(320, 249, 271, 41));
        pushButton_Exit->setFont(font2);
        line = new QFrame(Sensor_SEN0112);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-2, 236, 605, 5));
        line->setStyleSheet(QStringLiteral("background-color: rgb(26, 117, 187);"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::HLine);

        retranslateUi(Sensor_SEN0112);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Sensor_SEN0112);
    } // setupUi

    void retranslateUi(QWidget *Sensor_SEN0112)
    {
        Sensor_SEN0112->setWindowTitle(QApplication::translate("Sensor_SEN0112", "Form", nullptr));
        pushButton_2->setText(QString());
        comboBox_Temp_Unit_2->setItemText(0, QApplication::translate("Sensor_SEN0112", "Lux (lx)", nullptr));

        pushButton_getSamples_2->setText(QApplication::translate("Sensor_SEN0112", "L\341\272\245y m\341\272\253u", nullptr));
        label_sampleInfo_2->setText(QApplication::translate("Sensor_SEN0112", "C\303\241c tham s\341\273\221 c\306\241 b\341\272\243n", nullptr));
        label_12->setText(QApplication::translate("Sensor_SEN0112", "Gi\303\241 tr\341\273\213 l\341\273\233n nh\341\272\245t", nullptr));
        label_15->setText(QApplication::translate("Sensor_SEN0112", "Gi\303\241 tr\341\273\213 trung b\303\254nh", nullptr));
        label_16->setText(QApplication::translate("Sensor_SEN0112", "Gi\303\241 tr\341\273\213 nh\341\273\217 nh\341\272\245t", nullptr));
        label_ValueMax_2->setText(QApplication::translate("Sensor_SEN0112", "0", nullptr));
        label_ValueAvg_2->setText(QApplication::translate("Sensor_SEN0112", "0", nullptr));
        label_ValueMin_2->setText(QApplication::translate("Sensor_SEN0112", "0", nullptr));
        checkBox_setMathAvg_2->setText(QApplication::translate("Sensor_SEN0112", "S\341\273\255 d\341\273\245ng gi\303\241 tr\341\273\213 trung b\303\254nh c\341\273\231ng", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Infor_3), QApplication::translate("Sensor_SEN0112", "            Hi\341\273\203n th\341\273\213            ", nullptr));
        label_Name_2->setText(QString());
        label_Address_2->setText(QString());
        label_SerialNumber_2->setText(QString());
        label_20->setText(QApplication::translate("Sensor_SEN0112", "T\303\252n thi\341\272\277t b\341\273\213:", nullptr));
        label_21->setText(QApplication::translate("Sensor_SEN0112", "\304\220\341\273\213a ch\341\273\211:", nullptr));
        label_22->setText(QApplication::translate("Sensor_SEN0112", "M\303\243 s\303\252-ri:", nullptr));
        label_26->setText(QApplication::translate("Sensor_SEN0112", "M\303\264 t\341\272\243:", nullptr));
        label_Description_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Sensor_SEN0112", "            Thi\341\272\277t b\341\273\213            ", nullptr));
        label_27->setText(QApplication::translate("Sensor_SEN0112", "(ms)", nullptr));
        label_28->setText(QApplication::translate("Sensor_SEN0112", "Th\341\273\235i gian l\341\272\245y m\341\272\253u :", nullptr));
        pushButton_SetSampleTime_2->setText(QApplication::translate("Sensor_SEN0112", "C\303\240i \304\221\341\272\267t", nullptr));
        pushButton_Calib_2->setText(QApplication::translate("Sensor_SEN0112", "Hi\341\273\207u chu\341\272\251n", nullptr));
        label_29->setText(QApplication::translate("Sensor_SEN0112", "Hi\341\273\207u chu\341\272\251n thi\341\272\277t b\341\273\213 :", nullptr));
        label_calibInfo_2->setText(QApplication::translate("Sensor_SEN0112", "(ch\306\260a hi\341\273\207u chu\341\272\251n)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("Sensor_SEN0112", "           C\303\240i \304\221\341\272\267t            ", nullptr));
        pushButton_ChartZoom->setText(QApplication::translate("Sensor_SEN0112", "\304\220\341\273\223 th\341\273\213", nullptr));
        pushButton_Exit->setText(QApplication::translate("Sensor_SEN0112", "Tho\303\241t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sensor_SEN0112: public Ui_Sensor_SEN0112 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSOR_SEN0112_H
