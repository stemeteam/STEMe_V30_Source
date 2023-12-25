/********************************************************************************
** Form generated from reading UI file 'vdevicecalibration.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VDEVICECALIBRATION_H
#define UI_VDEVICECALIBRATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VDeviceCalibration
{
public:
    QFrame *frame_Chart;
    QGroupBox *groupBox;
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
    QLCDNumber *lcdNumber_Value;
    QFrame *line_2;
    QGroupBox *groupBox_Parameters;
    QFrame *line_3;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *spinBox_TimeCalib;
    QSpinBox *spinBox_SampleNumber;
    QLabel *label_14;
    QLineEdit *lineEdit_ToleranceCalib;
    QLabel *label_Value_Unit_2;
    QLabel *label_15;
    QFrame *line_4;
    QLineEdit *lineEdit_Value_Y1;
    QLabel *label_ToleranceInfo1;
    QLabel *label_16;
    QLabel *label_Value_Unit;
    QLabel *label_calib_info1;
    QComboBox *comboBox_SelectPointCalib;
    QFrame *line;
    QPushButton *pushButton_Exit;
    QFrame *frame_Chart_2;
    QLabel *label_4;
    QLabel *label_sampleCounter;
    QLabel *label_5;
    QLabel *label_delta;
    QLabel *label_6;
    QLabel *label_calibStatus;
    QPushButton *pushButton_Calibration;
    QPushButton *pushButton_Stop;
    QFrame *line_5;
    QPushButton *pushButton_CalibrationRemove;

    void setupUi(QWidget *VDeviceCalibration)
    {
        if (VDeviceCalibration->objectName().isEmpty())
            VDeviceCalibration->setObjectName(QStringLiteral("VDeviceCalibration"));
        VDeviceCalibration->setWindowModality(Qt::ApplicationModal);
        VDeviceCalibration->resize(1100, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/Calibration_Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        VDeviceCalibration->setWindowIcon(icon);
        frame_Chart = new QFrame(VDeviceCalibration);
        frame_Chart->setObjectName(QStringLiteral("frame_Chart"));
        frame_Chart->setGeometry(QRect(10, 10, 1081, 281));
        frame_Chart->setFrameShape(QFrame::StyledPanel);
        frame_Chart->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(VDeviceCalibration);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 330, 271, 261));
        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(150, 80, 91, 81));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_ValueMax = new QLabel(verticalLayoutWidget_2);
        label_ValueMax->setObjectName(QStringLiteral("label_ValueMax"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label_ValueMax->setFont(font);
        label_ValueMax->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));

        verticalLayout_2->addWidget(label_ValueMax);

        label_ValueAvg = new QLabel(verticalLayoutWidget_2);
        label_ValueAvg->setObjectName(QStringLiteral("label_ValueAvg"));
        label_ValueAvg->setFont(font);
        label_ValueAvg->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(label_ValueAvg);

        label_ValueMin = new QLabel(verticalLayoutWidget_2);
        label_ValueMin->setObjectName(QStringLiteral("label_ValueMin"));
        label_ValueMin->setFont(font);
        label_ValueMin->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));

        verticalLayout_2->addWidget(label_ValueMin);

        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 80, 128, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_2);

        lcdNumber_Value = new QLCDNumber(groupBox);
        lcdNumber_Value->setObjectName(QStringLiteral("lcdNumber_Value"));
        lcdNumber_Value->setGeometry(QRect(10, 30, 231, 40));
        lcdNumber_Value->setStyleSheet(QLatin1String("background-color: rgb(200, 200, 200);\n"
"color: rgb(56, 170, 170);"));
        lcdNumber_Value->setFrameShape(QFrame::WinPanel);
        lcdNumber_Value->setLineWidth(1);
        lcdNumber_Value->setSmallDecimalPoint(false);
        lcdNumber_Value->setDigitCount(7);
        lcdNumber_Value->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Value->setProperty("value", QVariant(0));
        lcdNumber_Value->setProperty("intValue", QVariant(0));
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(120, 10, 121, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        groupBox_Parameters = new QGroupBox(VDeviceCalibration);
        groupBox_Parameters->setObjectName(QStringLiteral("groupBox_Parameters"));
        groupBox_Parameters->setGeometry(QRect(290, 330, 641, 261));
        line_3 = new QFrame(groupBox_Parameters);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(180, 10, 91, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(groupBox_Parameters);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(36, 100, 81, 22));
        label_11->setStyleSheet(QStringLiteral(""));
        label_12 = new QLabel(groupBox_Parameters);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(236, 100, 21, 22));
        label_12->setStyleSheet(QStringLiteral(""));
        spinBox_TimeCalib = new QSpinBox(groupBox_Parameters);
        spinBox_TimeCalib->setObjectName(QStringLiteral("spinBox_TimeCalib"));
        spinBox_TimeCalib->setGeometry(QRect(116, 85, 111, 51));
        spinBox_TimeCalib->setStyleSheet(QLatin1String("QSpinBox::up-button\n"
"{\n"
"    min-width:40px;\n"
"    min-height: 20px;\n"
"}\n"
"\n"
"QSpinBox::down-button\n"
"{\n"
"    min-width: 40px;\n"
"    min-height: 20px;\n"
"}"));
        spinBox_TimeCalib->setAlignment(Qt::AlignCenter);
        spinBox_TimeCalib->setMinimum(1);
        spinBox_TimeCalib->setMaximum(9999999);
        spinBox_TimeCalib->setValue(10);
        spinBox_TimeCalib->setDisplayIntegerBase(10);
        spinBox_SampleNumber = new QSpinBox(groupBox_Parameters);
        spinBox_SampleNumber->setObjectName(QStringLiteral("spinBox_SampleNumber"));
        spinBox_SampleNumber->setGeometry(QRect(116, 150, 111, 51));
        spinBox_SampleNumber->setStyleSheet(QLatin1String("QSpinBox::up-button\n"
"{\n"
"    min-width:40px;\n"
"    min-height: 20px;\n"
"}\n"
"\n"
"QSpinBox::down-button\n"
"{\n"
"    min-width: 40px;\n"
"    min-height: 20px;\n"
"}"));
        spinBox_SampleNumber->setAlignment(Qt::AlignCenter);
        spinBox_SampleNumber->setMinimum(1);
        spinBox_SampleNumber->setMaximum(9999999);
        spinBox_SampleNumber->setValue(10);
        label_14 = new QLabel(groupBox_Parameters);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(4, 165, 111, 22));
        label_14->setStyleSheet(QStringLiteral(""));
        lineEdit_ToleranceCalib = new QLineEdit(groupBox_Parameters);
        lineEdit_ToleranceCalib->setObjectName(QStringLiteral("lineEdit_ToleranceCalib"));
        lineEdit_ToleranceCalib->setGeometry(QRect(136, 40, 91, 32));
        lineEdit_ToleranceCalib->setAlignment(Qt::AlignCenter);
        label_Value_Unit_2 = new QLabel(groupBox_Parameters);
        label_Value_Unit_2->setObjectName(QStringLiteral("label_Value_Unit_2"));
        label_Value_Unit_2->setGeometry(QRect(236, 44, 21, 22));
        label_Value_Unit_2->setStyleSheet(QStringLiteral(""));
        label_15 = new QLabel(groupBox_Parameters);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 40, 131, 30));
        label_15->setStyleSheet(QStringLiteral(""));
        line_4 = new QFrame(groupBox_Parameters);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(430, 10, 151, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        lineEdit_Value_Y1 = new QLineEdit(groupBox_Parameters);
        lineEdit_Value_Y1->setObjectName(QStringLiteral("lineEdit_Value_Y1"));
        lineEdit_Value_Y1->setGeometry(QRect(450, 80, 113, 32));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        lineEdit_Value_Y1->setFont(font2);
        lineEdit_Value_Y1->setStyleSheet(QStringLiteral("color: rgb(56, 170, 170);"));
        lineEdit_Value_Y1->setAlignment(Qt::AlignCenter);
        label_ToleranceInfo1 = new QLabel(groupBox_Parameters);
        label_ToleranceInfo1->setObjectName(QStringLiteral("label_ToleranceInfo1"));
        label_ToleranceInfo1->setGeometry(QRect(450, 115, 111, 22));
        QFont font3;
        font3.setPointSize(10);
        label_ToleranceInfo1->setFont(font3);
        label_ToleranceInfo1->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        label_ToleranceInfo1->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(groupBox_Parameters);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(310, -2, 131, 30));
        label_16->setFont(font2);
        label_16->setStyleSheet(QStringLiteral(""));
        label_Value_Unit = new QLabel(groupBox_Parameters);
        label_Value_Unit->setObjectName(QStringLiteral("label_Value_Unit"));
        label_Value_Unit->setGeometry(QRect(570, 85, 81, 22));
        label_Value_Unit->setFont(font2);
        label_Value_Unit->setStyleSheet(QStringLiteral("color: rgb(56, 170, 170);"));
        label_calib_info1 = new QLabel(groupBox_Parameters);
        label_calib_info1->setObjectName(QStringLiteral("label_calib_info1"));
        label_calib_info1->setGeometry(QRect(319, 85, 131, 22));
        label_calib_info1->setFont(font2);
        label_calib_info1->setStyleSheet(QStringLiteral("color: rgb(56, 170, 170);"));
        comboBox_SelectPointCalib = new QComboBox(groupBox_Parameters);
        comboBox_SelectPointCalib->addItem(QString());
        comboBox_SelectPointCalib->addItem(QString());
        comboBox_SelectPointCalib->addItem(QString());
        comboBox_SelectPointCalib->setObjectName(QStringLiteral("comboBox_SelectPointCalib"));
        comboBox_SelectPointCalib->setGeometry(QRect(320, 35, 261, 32));
        QFont font4;
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        comboBox_SelectPointCalib->setFont(font4);
        line = new QFrame(VDeviceCalibration);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(260, 360, 20, 231));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_Exit = new QPushButton(VDeviceCalibration);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(930, 550, 161, 41));
        pushButton_Exit->setFont(font2);
        frame_Chart_2 = new QFrame(VDeviceCalibration);
        frame_Chart_2->setObjectName(QStringLiteral("frame_Chart_2"));
        frame_Chart_2->setGeometry(QRect(10, 290, 1081, 21));
        frame_Chart_2->setFrameShape(QFrame::StyledPanel);
        frame_Chart_2->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_Chart_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 0, 61, 22));
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral(""));
        label_sampleCounter = new QLabel(frame_Chart_2);
        label_sampleCounter->setObjectName(QStringLiteral("label_sampleCounter"));
        label_sampleCounter->setGeometry(QRect(70, 0, 71, 22));
        label_sampleCounter->setFont(font);
        label_sampleCounter->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));
        label_sampleCounter->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(frame_Chart_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, -8, 111, 36));
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral(""));
        label_delta = new QLabel(frame_Chart_2);
        label_delta->setObjectName(QStringLiteral("label_delta"));
        label_delta->setGeometry(QRect(290, 0, 81, 22));
        label_delta->setFont(font);
        label_delta->setStyleSheet(QStringLiteral(""));
        label_delta->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(frame_Chart_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(390, -8, 81, 36));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral(""));
        label_calibStatus = new QLabel(frame_Chart_2);
        label_calibStatus->setObjectName(QStringLiteral("label_calibStatus"));
        label_calibStatus->setGeometry(QRect(480, -8, 591, 36));
        label_calibStatus->setFont(font1);
        label_calibStatus->setStyleSheet(QStringLiteral("color: rgb(0, 85, 127);"));
        pushButton_Calibration = new QPushButton(VDeviceCalibration);
        pushButton_Calibration->setObjectName(QStringLiteral("pushButton_Calibration"));
        pushButton_Calibration->setGeometry(QRect(930, 360, 161, 41));
        pushButton_Calibration->setFont(font2);
        pushButton_Stop = new QPushButton(VDeviceCalibration);
        pushButton_Stop->setObjectName(QStringLiteral("pushButton_Stop"));
        pushButton_Stop->setGeometry(QRect(930, 410, 161, 41));
        pushButton_Stop->setFont(font2);
        line_5 = new QFrame(VDeviceCalibration);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(570, 360, 20, 231));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        pushButton_CalibrationRemove = new QPushButton(VDeviceCalibration);
        pushButton_CalibrationRemove->setObjectName(QStringLiteral("pushButton_CalibrationRemove"));
        pushButton_CalibrationRemove->setGeometry(QRect(930, 500, 161, 41));
        pushButton_CalibrationRemove->setFont(font2);

        retranslateUi(VDeviceCalibration);

        QMetaObject::connectSlotsByName(VDeviceCalibration);
    } // setupUi

    void retranslateUi(QWidget *VDeviceCalibration)
    {
        VDeviceCalibration->setWindowTitle(QApplication::translate("VDeviceCalibration", "Hi\341\273\207u chu\341\272\251n", nullptr));
        groupBox->setTitle(QApplication::translate("VDeviceCalibration", "Gi\303\241 tr\341\273\213 \304\221o c\306\241 b\341\272\243n", nullptr));
        label_ValueMax->setText(QApplication::translate("VDeviceCalibration", "0", nullptr));
        label_ValueAvg->setText(QApplication::translate("VDeviceCalibration", "0", nullptr));
        label_ValueMin->setText(QApplication::translate("VDeviceCalibration", "0", nullptr));
        label->setText(QApplication::translate("VDeviceCalibration", "Gi\303\241 tr\341\273\213 l\341\273\233n nh\341\272\245t:", nullptr));
        label_3->setText(QApplication::translate("VDeviceCalibration", "Gi\303\241 tr\341\273\213 trung b\303\254nh:", nullptr));
        label_2->setText(QApplication::translate("VDeviceCalibration", "Gi\303\241 tr\341\273\213 nh\341\273\217 nh\341\272\245t::", nullptr));
        groupBox_Parameters->setTitle(QApplication::translate("VDeviceCalibration", "\304\220i\341\273\201u ki\341\273\207n hi\341\273\207u chu\341\272\251n", nullptr));
        label_11->setText(QApplication::translate("VDeviceCalibration", "Th\341\273\235i gian :", nullptr));
        label_12->setText(QApplication::translate("VDeviceCalibration", "(S)", nullptr));
        label_14->setText(QApplication::translate("VDeviceCalibration", "S\341\273\221 l\306\260\341\273\243ng m\341\272\253u :", nullptr));
        lineEdit_ToleranceCalib->setText(QApplication::translate("VDeviceCalibration", "1", nullptr));
        label_Value_Unit_2->setText(QApplication::translate("VDeviceCalibration", "(%)", nullptr));
        label_15->setText(QApplication::translate("VDeviceCalibration", "\304\220\341\273\231 ch\303\255nh x\303\241c :    \302\261", nullptr));
        lineEdit_Value_Y1->setText(QApplication::translate("VDeviceCalibration", "0", nullptr));
        label_ToleranceInfo1->setText(QApplication::translate("VDeviceCalibration", "...", nullptr));
        label_16->setText(QApplication::translate("VDeviceCalibration", "\304\220i\341\273\203m hi\341\273\207u chu\341\272\251n", nullptr));
        label_Value_Unit->setText(QApplication::translate("VDeviceCalibration", "(...)", nullptr));
        label_calib_info1->setText(QApplication::translate("VDeviceCalibration", "Gi\303\241 tr\341\273\213 chu\341\272\251n Y:", nullptr));
        comboBox_SelectPointCalib->setItemText(0, QApplication::translate("VDeviceCalibration", "Hi\341\273\207u chu\341\272\251n \304\221i\341\273\203m 1", nullptr));
        comboBox_SelectPointCalib->setItemText(1, QApplication::translate("VDeviceCalibration", "Hi\341\273\207u chu\341\272\251n \304\221i\341\273\203m 2", nullptr));
        comboBox_SelectPointCalib->setItemText(2, QApplication::translate("VDeviceCalibration", "Hi\341\273\207u chu\341\272\251n \304\221i\341\273\203m 3", nullptr));

        pushButton_Exit->setText(QApplication::translate("VDeviceCalibration", "Tho\303\241t", nullptr));
        label_4->setText(QApplication::translate("VDeviceCalibration", "S\341\273\221 m\341\272\253u:", nullptr));
        label_sampleCounter->setText(QApplication::translate("VDeviceCalibration", "0", nullptr));
        label_5->setText(QApplication::translate("VDeviceCalibration", "\304\220\341\273\231 l\341\273\207ch chu\341\272\251n:", nullptr));
        label_delta->setText(QApplication::translate("VDeviceCalibration", "0", nullptr));
        label_6->setText(QApplication::translate("VDeviceCalibration", "Tr\341\272\241ng th\303\241i: ", nullptr));
        label_calibStatus->setText(QApplication::translate("VDeviceCalibration", "...", nullptr));
        pushButton_Calibration->setText(QApplication::translate("VDeviceCalibration", "Hi\341\273\207u chu\341\272\251n", nullptr));
        pushButton_Stop->setText(QApplication::translate("VDeviceCalibration", "H\341\273\247y b\341\273\217", nullptr));
        pushButton_CalibrationRemove->setText(QApplication::translate("VDeviceCalibration", "X\303\263a hi\341\273\207u chu\341\272\251n c\305\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VDeviceCalibration: public Ui_VDeviceCalibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VDEVICECALIBRATION_H
