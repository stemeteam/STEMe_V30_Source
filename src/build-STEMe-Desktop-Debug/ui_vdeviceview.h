/********************************************************************************
** Form generated from reading UI file 'vdeviceview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VDEVICEVIEW_H
#define UI_VDEVICEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VDeviceView
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Cancel;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_SelectDevice;
    QGroupBox *groupBox;
    QTableView *tableView_Device;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_RemoveDevice;
    QGroupBox *groupBox_2;
    QTableView *tableView_Select;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Apply;

    void setupUi(QWidget *VDeviceView)
    {
        if (VDeviceView->objectName().isEmpty())
            VDeviceView->setObjectName(QStringLiteral("VDeviceView"));
        VDeviceView->resize(1209, 559);
        horizontalLayoutWidget = new QWidget(VDeviceView);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(530, 510, 151, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Cancel = new QPushButton(horizontalLayoutWidget);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_Cancel->setFont(font);

        horizontalLayout->addWidget(pushButton_Cancel);

        horizontalLayoutWidget_4 = new QWidget(VDeviceView);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(530, 40, 151, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_SelectDevice = new QPushButton(horizontalLayoutWidget_4);
        pushButton_SelectDevice->setObjectName(QStringLiteral("pushButton_SelectDevice"));
        pushButton_SelectDevice->setFont(font);

        horizontalLayout_4->addWidget(pushButton_SelectDevice);

        groupBox = new QGroupBox(VDeviceView);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 521, 541));
        groupBox->setStyleSheet(QStringLiteral(""));
        groupBox->setFlat(false);
        tableView_Device = new QTableView(groupBox);
        tableView_Device->setObjectName(QStringLiteral("tableView_Device"));
        tableView_Device->setGeometry(QRect(0, 30, 511, 511));
        tableView_Device->setStyleSheet(QStringLiteral("background-color: rgb(214, 214, 214);"));
        horizontalLayoutWidget_5 = new QWidget(VDeviceView);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(530, 90, 151, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_RemoveDevice = new QPushButton(horizontalLayoutWidget_5);
        pushButton_RemoveDevice->setObjectName(QStringLiteral("pushButton_RemoveDevice"));
        pushButton_RemoveDevice->setFont(font);

        horizontalLayout_5->addWidget(pushButton_RemoveDevice);

        groupBox_2 = new QGroupBox(VDeviceView);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(690, 10, 521, 541));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        groupBox_2->setFlat(false);
        tableView_Select = new QTableView(groupBox_2);
        tableView_Select->setObjectName(QStringLiteral("tableView_Select"));
        tableView_Select->setGeometry(QRect(0, 30, 511, 511));
        tableView_Select->setStyleSheet(QStringLiteral("background-color: rgb(214, 214, 214);"));
        horizontalLayoutWidget_2 = new QWidget(VDeviceView);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(530, 460, 151, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Apply = new QPushButton(horizontalLayoutWidget_2);
        pushButton_Apply->setObjectName(QStringLiteral("pushButton_Apply"));
        pushButton_Apply->setFont(font);

        horizontalLayout_2->addWidget(pushButton_Apply);


        retranslateUi(VDeviceView);

        QMetaObject::connectSlotsByName(VDeviceView);
    } // setupUi

    void retranslateUi(QWidget *VDeviceView)
    {
        VDeviceView->setWindowTitle(QApplication::translate("VDeviceView", "Ch\341\273\215n thi\341\272\277t b\341\273\213", nullptr));
        pushButton_Cancel->setText(QApplication::translate("VDeviceView", "Tho\303\241t", nullptr));
        pushButton_SelectDevice->setText(QApplication::translate("VDeviceView", "Ch\341\273\215n thi\341\272\277t b\341\273\213 >>", nullptr));
        groupBox->setTitle(QApplication::translate("VDeviceView", "Danh s\303\241ch thi\341\272\277t b\341\273\213", nullptr));
        pushButton_RemoveDevice->setText(QApplication::translate("VDeviceView", "<< X\303\263a thi\341\272\277t b\341\273\213", nullptr));
        groupBox_2->setTitle(QApplication::translate("VDeviceView", "Thi\341\272\277t b\341\273\213 \304\221\303\243 ch\341\273\215n", nullptr));
        pushButton_Apply->setText(QApplication::translate("VDeviceView", "\303\201p d\341\273\245ng", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VDeviceView: public Ui_VDeviceView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VDEVICEVIEW_H
