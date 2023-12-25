/********************************************************************************
** Form generated from reading UI file 'sensor_sen0116.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSOR_SEN0116_H
#define UI_SENSOR_SEN0116_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sensor_SEN0116
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Apply;
    QPushButton *pushButton_Cancel;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_Name;
    QLabel *label_Address;
    QLabel *label_SerialNumber;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Description;
    QWidget *tab_2;
    QRadioButton *radioButton_Temperature;
    QRadioButton *radioButton_Pressure;
    QFrame *frame_Chart;
    QRadioButton *radioButton_Altitude;
    QWidget *tab_3;
    QLineEdit *lineEdit_Calib1;
    QLabel *label_3;
    QPushButton *pushButton_Calib_Temp;
    QLabel *label_8;
    QLineEdit *lineEdit_Calib1_Humi;
    QLabel *label_9;
    QPushButton *pushButton_Calib_Humi;
    QLabel *label_12;
    QLabel *label_13;
    QFrame *line_3;
    QGroupBox *groupBox_2;
    QLabel *label_16;
    QSpinBox *spinBox_TimerSample_2;
    QLabel *label_17;
    QLCDNumber *lcdNumber_Temp;
    QLCDNumber *lcdNumber_Pressure;
    QLabel *label_2;
    QLabel *label;
    QLCDNumber *lcdNumber_Altitude;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_ChartZoom;

    void setupUi(QWidget *Sensor_SEN0116)
    {
        if (Sensor_SEN0116->objectName().isEmpty())
            Sensor_SEN0116->setObjectName(QStringLiteral("Sensor_SEN0116"));
        Sensor_SEN0116->resize(700, 500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/PTS0116_Icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Sensor_SEN0116->setWindowIcon(icon);
        Sensor_SEN0116->setStyleSheet(QStringLiteral("background-color: #132630;"));
        horizontalLayoutWidget = new QWidget(Sensor_SEN0116);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(347, 456, 321, 32));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Apply = new QPushButton(horizontalLayoutWidget);
        pushButton_Apply->setObjectName(QStringLiteral("pushButton_Apply"));

        horizontalLayout->addWidget(pushButton_Apply);

        pushButton_Cancel = new QPushButton(horizontalLayoutWidget);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));

        horizontalLayout->addWidget(pushButton_Cancel);

        tabWidget = new QTabWidget(Sensor_SEN0116);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(32, 176, 636, 270));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(false);
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        verticalLayoutWidget = new QWidget(tab_1);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 111, 131));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_4);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_7);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_5);

        verticalLayoutWidget_2 = new QWidget(tab_1);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(160, 10, 451, 101));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_Name = new QLabel(verticalLayoutWidget_2);
        label_Name->setObjectName(QStringLiteral("label_Name"));
        label_Name->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_Name);

        label_Address = new QLabel(verticalLayoutWidget_2);
        label_Address->setObjectName(QStringLiteral("label_Address"));
        label_Address->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_Address);

        label_SerialNumber = new QLabel(verticalLayoutWidget_2);
        label_SerialNumber->setObjectName(QStringLiteral("label_SerialNumber"));
        label_SerialNumber->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_SerialNumber);

        verticalLayoutWidget_3 = new QWidget(tab_1);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(160, 110, 451, 151));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_Description = new QLabel(verticalLayoutWidget_3);
        label_Description->setObjectName(QStringLiteral("label_Description"));
        label_Description->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_4->addWidget(label_Description);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        radioButton_Temperature = new QRadioButton(tab_2);
        radioButton_Temperature->setObjectName(QStringLiteral("radioButton_Temperature"));
        radioButton_Temperature->setGeometry(QRect(50, 211, 92, 18));
        radioButton_Temperature->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        radioButton_Temperature->setCheckable(true);
        radioButton_Temperature->setChecked(false);
        radioButton_Pressure = new QRadioButton(tab_2);
        radioButton_Pressure->setObjectName(QStringLiteral("radioButton_Pressure"));
        radioButton_Pressure->setGeometry(QRect(160, 211, 91, 18));
        radioButton_Pressure->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"color: rgb(0, 255, 255);"));
        radioButton_Pressure->setChecked(true);
        frame_Chart = new QFrame(tab_2);
        frame_Chart->setObjectName(QStringLiteral("frame_Chart"));
        frame_Chart->setGeometry(QRect(0, 0, 633, 211));
        frame_Chart->setFrameShape(QFrame::StyledPanel);
        frame_Chart->setFrameShadow(QFrame::Raised);
        radioButton_Altitude = new QRadioButton(tab_2);
        radioButton_Altitude->setObjectName(QStringLiteral("radioButton_Altitude"));
        radioButton_Altitude->setGeometry(QRect(272, 211, 91, 18));
        radioButton_Altitude->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        lineEdit_Calib1 = new QLineEdit(tab_3);
        lineEdit_Calib1->setObjectName(QStringLiteral("lineEdit_Calib1"));
        lineEdit_Calib1->setGeometry(QRect(200, 46, 200, 30));
        lineEdit_Calib1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 16, 251, 22));
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_Calib_Temp = new QPushButton(tab_3);
        pushButton_Calib_Temp->setObjectName(QStringLiteral("pushButton_Calib_Temp"));
        pushButton_Calib_Temp->setGeometry(QRect(461, 46, 151, 30));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 50, 161, 22));
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_Calib1_Humi = new QLineEdit(tab_3);
        lineEdit_Calib1_Humi->setObjectName(QStringLiteral("lineEdit_Calib1_Humi"));
        lineEdit_Calib1_Humi->setGeometry(QRect(199, 90, 200, 30));
        lineEdit_Calib1_Humi->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 90, 151, 22));
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_Calib_Humi = new QPushButton(tab_3);
        pushButton_Calib_Humi->setObjectName(QStringLiteral("pushButton_Calib_Humi"));
        pushButton_Calib_Humi->setGeometry(QRect(460, 90, 151, 30));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(415, 50, 31, 22));
        label_12->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(410, 94, 41, 22));
        label_13->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        line_3 = new QFrame(tab_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 130, 591, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 140, 591, 71));
        groupBox_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(11, 35, 131, 22));
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        spinBox_TimerSample_2 = new QSpinBox(groupBox_2);
        spinBox_TimerSample_2->setObjectName(QStringLiteral("spinBox_TimerSample_2"));
        spinBox_TimerSample_2->setGeometry(QRect(180, 30, 201, 32));
        spinBox_TimerSample_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        spinBox_TimerSample_2->setMinimum(100);
        spinBox_TimerSample_2->setMaximum(99999);
        spinBox_TimerSample_2->setValue(1000);
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(392, 34, 31, 22));
        label_17->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_3, QString());
        lcdNumber_Temp = new QLCDNumber(Sensor_SEN0116);
        lcdNumber_Temp->setObjectName(QStringLiteral("lcdNumber_Temp"));
        lcdNumber_Temp->setGeometry(QRect(32, 31, 150, 90));
        lcdNumber_Temp->setStyleSheet(QLatin1String("background-color: #132630;\n"
"color: rgb(255, 0, 0);"));
        lcdNumber_Temp->setFrameShadow(QFrame::Sunken);
        lcdNumber_Temp->setSmallDecimalPoint(false);
        lcdNumber_Temp->setDigitCount(4);
        lcdNumber_Temp->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Temp->setProperty("value", QVariant(0));
        lcdNumber_Temp->setProperty("intValue", QVariant(0));
        lcdNumber_Pressure = new QLCDNumber(Sensor_SEN0116);
        lcdNumber_Pressure->setObjectName(QStringLiteral("lcdNumber_Pressure"));
        lcdNumber_Pressure->setEnabled(true);
        lcdNumber_Pressure->setGeometry(QRect(210, 31, 220, 90));
        lcdNumber_Pressure->setStyleSheet(QLatin1String("background-color: #132630;\n"
"color: rgb(0, 255, 255);"));
        lcdNumber_Pressure->setFrameShadow(QFrame::Sunken);
        lcdNumber_Pressure->setLineWidth(1);
        lcdNumber_Pressure->setSmallDecimalPoint(false);
        lcdNumber_Pressure->setDigitCount(6);
        lcdNumber_Pressure->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Pressure->setProperty("value", QVariant(0));
        lcdNumber_Pressure->setProperty("intValue", QVariant(0));
        label_2 = new QLabel(Sensor_SEN0116);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 126, 211, 22));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(0, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(Sensor_SEN0116);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(27, 126, 151, 22));
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        lcdNumber_Altitude = new QLCDNumber(Sensor_SEN0116);
        lcdNumber_Altitude->setObjectName(QStringLiteral("lcdNumber_Altitude"));
        lcdNumber_Altitude->setEnabled(true);
        lcdNumber_Altitude->setGeometry(QRect(458, 30, 211, 90));
        lcdNumber_Altitude->setStyleSheet(QLatin1String("background-color: #132630;\n"
"color: rgb(255, 255, 255);"));
        lcdNumber_Altitude->setFrameShadow(QFrame::Sunken);
        lcdNumber_Altitude->setLineWidth(1);
        lcdNumber_Altitude->setSmallDecimalPoint(false);
        lcdNumber_Altitude->setDigitCount(6);
        lcdNumber_Altitude->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_Altitude->setProperty("value", QVariant(0));
        lcdNumber_Altitude->setProperty("intValue", QVariant(0));
        label_10 = new QLabel(Sensor_SEN0116);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(460, 126, 211, 22));
        label_10->setFont(font1);
        label_10->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(Sensor_SEN0116);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(460, 146, 211, 22));
        label_11->setFont(font1);
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_11->setAlignment(Qt::AlignCenter);
        pushButton_ChartZoom = new QPushButton(Sensor_SEN0116);
        pushButton_ChartZoom->setObjectName(QStringLiteral("pushButton_ChartZoom"));
        pushButton_ChartZoom->setGeometry(QRect(33, 457, 121, 30));

        retranslateUi(Sensor_SEN0116);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Sensor_SEN0116);
    } // setupUi

    void retranslateUi(QWidget *Sensor_SEN0116)
    {
        Sensor_SEN0116->setWindowTitle(QApplication::translate("Sensor_SEN0116", "Form", nullptr));
        pushButton_Apply->setText(QApplication::translate("Sensor_SEN0116", "\303\201p d\341\273\245ng", nullptr));
        pushButton_Cancel->setText(QApplication::translate("Sensor_SEN0116", "Tho\303\241t", nullptr));
        label_4->setText(QApplication::translate("Sensor_SEN0116", "T\303\252n thi\341\272\277t b\341\273\213:", nullptr));
        label_6->setText(QApplication::translate("Sensor_SEN0116", "\304\220\341\273\213a ch\341\273\211:", nullptr));
        label_7->setText(QApplication::translate("Sensor_SEN0116", "M\303\243 s\303\252-ri:", nullptr));
        label_5->setText(QApplication::translate("Sensor_SEN0116", "M\303\264 t\341\272\243:", nullptr));
        label_Name->setText(QString());
        label_Address->setText(QString());
        label_SerialNumber->setText(QString());
        label_Description->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("Sensor_SEN0116", "          Thi\341\272\277t b\341\273\213          ", nullptr));
        radioButton_Temperature->setText(QApplication::translate("Sensor_SEN0116", "Nhi\341\273\207t \304\221\341\273\231", nullptr));
        radioButton_Pressure->setText(QApplication::translate("Sensor_SEN0116", "\303\201p su\341\272\245t", nullptr));
        radioButton_Altitude->setText(QApplication::translate("Sensor_SEN0116", "\304\220\341\273\231 cao", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Sensor_SEN0116", "          \304\220\341\273\223 th\341\273\213          ", nullptr));
        label_3->setText(QApplication::translate("Sensor_SEN0116", "Hi\341\273\207u chu\341\272\251n thi\341\272\277t b\341\273\213.", nullptr));
        pushButton_Calib_Temp->setText(QApplication::translate("Sensor_SEN0116", "Hi\341\273\207u chu\341\272\251n", nullptr));
        label_8->setText(QApplication::translate("Sensor_SEN0116", "Gi\303\241 tr\341\273\213 nhi\341\273\207t \304\221\341\273\231 chu\341\272\251n:", nullptr));
        label_9->setText(QApplication::translate("Sensor_SEN0116", "Gi\303\241 tr\341\273\213 \303\241p su\341\272\245t chu\341\272\251n:", nullptr));
        pushButton_Calib_Humi->setText(QApplication::translate("Sensor_SEN0116", "Hi\341\273\207u chu\341\272\251n", nullptr));
        label_12->setText(QApplication::translate("Sensor_SEN0116", "(*C)", nullptr));
        label_13->setText(QApplication::translate("Sensor_SEN0116", "(hPa)", nullptr));
        groupBox_2->setTitle(QApplication::translate("Sensor_SEN0116", "C\303\240i \304\221\341\272\267t chung", nullptr));
        label_16->setText(QApplication::translate("Sensor_SEN0116", "Th\341\273\235i gian l\341\272\245y m\341\272\253u :", nullptr));
        label_17->setText(QApplication::translate("Sensor_SEN0116", "(ms)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Sensor_SEN0116", "          C\303\240i \304\221\341\272\267t          ", nullptr));
        label_2->setText(QApplication::translate("Sensor_SEN0116", "\303\201p su\341\272\245t kh\303\255 quy\341\273\203n (hPa)", nullptr));
        label->setText(QApplication::translate("Sensor_SEN0116", "Nhi\341\273\207t \304\221\341\273\231 (\304\221\341\273\231 C)", nullptr));
        label_10->setText(QApplication::translate("Sensor_SEN0116", "\304\220\341\273\231 cao (m)", nullptr));
        label_11->setText(QApplication::translate("Sensor_SEN0116", "so v\341\273\233i m\341\273\261c n\306\260\341\273\233c bi\341\273\203n", nullptr));
        pushButton_ChartZoom->setText(QApplication::translate("Sensor_SEN0116", "Ph\303\242n t\303\255ch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sensor_SEN0116: public Ui_Sensor_SEN0116 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSOR_SEN0116_H
