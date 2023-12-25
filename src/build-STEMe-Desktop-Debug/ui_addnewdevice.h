/********************************************************************************
** Form generated from reading UI file 'addnewdevice.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWDEVICE_H
#define UI_ADDNEWDEVICE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewDevice
{
public:
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_Infor_Description;
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_Info_Name;
    QComboBox *comboBox_typeDevice;
    QLineEdit *lineEdit_Info_SerialNumber;
    QPushButton *pushButton_Infor_Icon;
    QLabel *label_5;
    QLabel *label_search;
    QComboBox *comboBox_Search;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Cancel;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Search;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_AddDevice;
    QPushButton *pushButton_Update;
    QPushButton *pushButton_Remove;
    QLabel *label_6;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_getSerialFromSearch;
    QGroupBox *groupBox;
    QTableView *tableView_Device;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_ListDevice_Update;
    QPushButton *pushButton_ListDevice_Replace;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_ListDevice_Save;

    void setupUi(QWidget *AddNewDevice)
    {
        if (AddNewDevice->objectName().isEmpty())
            AddNewDevice->setObjectName(QStringLiteral("AddNewDevice"));
        AddNewDevice->setWindowModality(Qt::ApplicationModal);
        AddNewDevice->resize(1040, 610);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/AddDevice_icon_2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AddNewDevice->setWindowIcon(icon);
        groupBox_2 = new QGroupBox(AddNewDevice);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(560, 10, 501, 600));
        groupBox_2->setFlat(false);
        textEdit_Infor_Description = new QTextEdit(groupBox_2);
        textEdit_Infor_Description->setObjectName(QStringLiteral("textEdit_Infor_Description"));
        textEdit_Infor_Description->setGeometry(QRect(30, 420, 281, 101));
        textEdit_Infor_Description->setReadOnly(false);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 396, 209, 23));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 120, 121, 110));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(160, 120, 301, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_Info_Name = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_Info_Name->setObjectName(QStringLiteral("lineEdit_Info_Name"));
        lineEdit_Info_Name->setMaxLength(20);
        lineEdit_Info_Name->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        verticalLayout_2->addWidget(lineEdit_Info_Name);

        comboBox_typeDevice = new QComboBox(verticalLayoutWidget_2);
        comboBox_typeDevice->addItem(QString());
        comboBox_typeDevice->addItem(QString());
        comboBox_typeDevice->addItem(QString());
        comboBox_typeDevice->addItem(QString());
        comboBox_typeDevice->addItem(QString());
        comboBox_typeDevice->setObjectName(QStringLiteral("comboBox_typeDevice"));

        verticalLayout_2->addWidget(comboBox_typeDevice);

        lineEdit_Info_SerialNumber = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_Info_SerialNumber->setObjectName(QStringLiteral("lineEdit_Info_SerialNumber"));
        lineEdit_Info_SerialNumber->setMaxLength(20);
        lineEdit_Info_SerialNumber->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        verticalLayout_2->addWidget(lineEdit_Info_SerialNumber);

        pushButton_Infor_Icon = new QPushButton(groupBox_2);
        pushButton_Infor_Icon->setObjectName(QStringLiteral("pushButton_Infor_Icon"));
        pushButton_Infor_Icon->setGeometry(QRect(310, 290, 100, 100));
        pushButton_Infor_Icon->setIconSize(QSize(100, 100));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 290, 131, 32));
        label_search = new QLabel(groupBox_2);
        label_search->setObjectName(QStringLiteral("label_search"));
        label_search->setGeometry(QRect(30, 40, 431, 21));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label_search->setFont(font);
        comboBox_Search = new QComboBox(groupBox_2);
        comboBox_Search->setObjectName(QStringLiteral("comboBox_Search"));
        comboBox_Search->setGeometry(QRect(30, 70, 291, 32));
        comboBox_Search->setEditable(true);
        comboBox_Search->setMaxCount(12);
        horizontalLayoutWidget = new QWidget(groupBox_2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 550, 431, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Cancel = new QPushButton(horizontalLayoutWidget);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_Cancel->setFont(font1);

        horizontalLayout->addWidget(pushButton_Cancel);

        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(330, 70, 131, 32));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Search = new QPushButton(horizontalLayoutWidget_2);
        pushButton_Search->setObjectName(QStringLiteral("pushButton_Search"));
        pushButton_Search->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_Search);

        verticalLayoutWidget_3 = new QWidget(groupBox_2);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(320, 420, 151, 104));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_AddDevice = new QPushButton(verticalLayoutWidget_3);
        pushButton_AddDevice->setObjectName(QStringLiteral("pushButton_AddDevice"));
        pushButton_AddDevice->setFont(font1);

        verticalLayout_3->addWidget(pushButton_AddDevice);

        pushButton_Update = new QPushButton(verticalLayoutWidget_3);
        pushButton_Update->setObjectName(QStringLiteral("pushButton_Update"));
        pushButton_Update->setFont(font1);

        verticalLayout_3->addWidget(pushButton_Update);

        pushButton_Remove = new QPushButton(verticalLayoutWidget_3);
        pushButton_Remove->setObjectName(QStringLiteral("pushButton_Remove"));
        pushButton_Remove->setFont(font1);

        verticalLayout_3->addWidget(pushButton_Remove);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 330, 161, 32));
        QFont font2;
        font2.setItalic(true);
        label_6->setFont(font2);
        horizontalLayoutWidget_5 = new QWidget(groupBox_2);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(160, 230, 301, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_getSerialFromSearch = new QPushButton(horizontalLayoutWidget_5);
        pushButton_getSerialFromSearch->setObjectName(QStringLiteral("pushButton_getSerialFromSearch"));

        horizontalLayout_5->addWidget(pushButton_getSerialFromSearch);

        groupBox = new QGroupBox(AddNewDevice);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 521, 541));
        groupBox->setStyleSheet(QStringLiteral(""));
        groupBox->setFlat(false);
        tableView_Device = new QTableView(groupBox);
        tableView_Device->setObjectName(QStringLiteral("tableView_Device"));
        tableView_Device->setGeometry(QRect(0, 30, 511, 511));
        tableView_Device->setStyleSheet(QStringLiteral("background-color: rgb(214, 214, 214);"));
        horizontalLayoutWidget_3 = new QWidget(AddNewDevice);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 560, 313, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_ListDevice_Update = new QPushButton(horizontalLayoutWidget_3);
        pushButton_ListDevice_Update->setObjectName(QStringLiteral("pushButton_ListDevice_Update"));
        pushButton_ListDevice_Update->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_ListDevice_Update);

        pushButton_ListDevice_Replace = new QPushButton(horizontalLayoutWidget_3);
        pushButton_ListDevice_Replace->setObjectName(QStringLiteral("pushButton_ListDevice_Replace"));
        pushButton_ListDevice_Replace->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_ListDevice_Replace);

        horizontalLayoutWidget_4 = new QWidget(AddNewDevice);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(380, 560, 151, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_ListDevice_Save = new QPushButton(horizontalLayoutWidget_4);
        pushButton_ListDevice_Save->setObjectName(QStringLiteral("pushButton_ListDevice_Save"));
        pushButton_ListDevice_Save->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_ListDevice_Save);


        retranslateUi(AddNewDevice);

        QMetaObject::connectSlotsByName(AddNewDevice);
    } // setupUi

    void retranslateUi(QWidget *AddNewDevice)
    {
        AddNewDevice->setWindowTitle(QApplication::translate("AddNewDevice", "STEMe - Th\303\252m thi\341\272\277t b\341\273\213 m\341\273\233i", nullptr));
        groupBox_2->setTitle(QApplication::translate("AddNewDevice", "Th\303\264ng tin chi ti\341\272\277t v\341\273\201 thi\341\272\277t b\341\273\213", nullptr));
        label_4->setText(QApplication::translate("AddNewDevice", "M\303\264 t\341\272\243 v\341\273\201 thi\341\272\277t b\341\273\213:", nullptr));
        label_2->setText(QApplication::translate("AddNewDevice", "T\303\252n thi\341\272\277t b\341\273\213:", nullptr));
        label->setText(QApplication::translate("AddNewDevice", "Lo\341\272\241i thi\341\272\277t b\341\273\213:", nullptr));
        label_3->setText(QApplication::translate("AddNewDevice", "M\303\243 s\303\252-ri:", nullptr));
        lineEdit_Info_Name->setPlaceholderText(QApplication::translate("AddNewDevice", "t\303\252n g\341\273\243i nh\341\273\233...", nullptr));
        comboBox_typeDevice->setItemText(0, QApplication::translate("AddNewDevice", "C\341\272\243m bi\341\272\277n", nullptr));
        comboBox_typeDevice->setItemText(1, QApplication::translate("AddNewDevice", "M\303\264-\304\221un th\341\273\261c h\303\240nh", nullptr));
        comboBox_typeDevice->setItemText(2, QApplication::translate("AddNewDevice", "M\303\264 h\303\254nh th\303\255 nghi\341\273\207m", nullptr));
        comboBox_typeDevice->setItemText(3, QApplication::translate("AddNewDevice", "C\303\240i \304\221\341\272\267t v\303\240 ti\341\273\207n \303\255ch", nullptr));
        comboBox_typeDevice->setItemText(4, QApplication::translate("AddNewDevice", "Qu\341\272\243n l\303\275", nullptr));

        lineEdit_Info_SerialNumber->setPlaceholderText(QApplication::translate("AddNewDevice", "SN c\303\263 12 k\303\255 t\341\273\261...", nullptr));
        pushButton_Infor_Icon->setText(QString());
        label_5->setText(QApplication::translate("AddNewDevice", "Bi\341\273\203u t\306\260\341\273\243ng (Icon):", nullptr));
        label_search->setText(QApplication::translate("AddNewDevice", "Nh\341\272\255p s\341\273\221 s\303\252-ri c\341\273\247a thi\341\272\277t b\341\273\213", nullptr));
        pushButton_Cancel->setText(QApplication::translate("AddNewDevice", "Tho\303\241t", nullptr));
        pushButton_Search->setText(QApplication::translate("AddNewDevice", "T\303\254m ki\341\272\277m", nullptr));
        pushButton_AddDevice->setText(QApplication::translate("AddNewDevice", "Th\303\252m m\341\273\233i", nullptr));
        pushButton_Update->setText(QApplication::translate("AddNewDevice", "S\341\273\255a", nullptr));
        pushButton_Remove->setText(QApplication::translate("AddNewDevice", "X\303\263a", nullptr));
        label_6->setText(QApplication::translate("AddNewDevice", "    Nh\341\272\245n \304\221\341\273\203 ch\341\273\215n h\303\254nh =>", nullptr));
        pushButton_getSerialFromSearch->setText(QApplication::translate("AddNewDevice", "L\341\272\245y m\303\243 s\303\252-ri t\341\273\253 thanh \"T\303\254m ki\341\272\277m\"", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_getSerialFromSearch->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QApplication::translate("AddNewDevice", "Danh s\303\241ch thi\341\272\277t b\341\273\213", nullptr));
        pushButton_ListDevice_Update->setText(QApplication::translate("AddNewDevice", "C\341\272\255p nh\341\272\255t danh s\303\241ch", nullptr));
        pushButton_ListDevice_Replace->setText(QApplication::translate("AddNewDevice", "T\341\272\243i danh s\303\241ch m\341\273\233i", nullptr));
        pushButton_ListDevice_Save->setText(QApplication::translate("AddNewDevice", "L\306\260u danh s\303\241ch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewDevice: public Ui_AddNewDevice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWDEVICE_H
