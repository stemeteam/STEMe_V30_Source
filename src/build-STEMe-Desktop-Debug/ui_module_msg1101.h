/********************************************************************************
** Form generated from reading UI file 'module_msg1101.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULE_MSG1101_H
#define UI_MODULE_MSG1101_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Module_Msg1101
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QRadioButton *radioButton_WT;
    QRadioButton *radioButton_LX;
    QRadioButton *radioButton_LC;
    QPushButton *pushButton_OK;

    void setupUi(QMainWindow *Module_Msg1101)
    {
        if (Module_Msg1101->objectName().isEmpty())
            Module_Msg1101->setObjectName(QStringLiteral("Module_Msg1101"));
        Module_Msg1101->resize(309, 187);
        Module_Msg1101->setStyleSheet(QStringLiteral("background-color: #132630;"));
        centralwidget = new QWidget(Module_Msg1101);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 311, 121));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        radioButton_WT = new QRadioButton(groupBox);
        radioButton_WT->setObjectName(QStringLiteral("radioButton_WT"));
        radioButton_WT->setGeometry(QRect(20, 30, 241, 27));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        radioButton_WT->setFont(font1);
        radioButton_WT->setChecked(true);
        radioButton_LX = new QRadioButton(groupBox);
        radioButton_LX->setObjectName(QStringLiteral("radioButton_LX"));
        radioButton_LX->setGeometry(QRect(20, 60, 221, 27));
        radioButton_LX->setFont(font1);
        radioButton_LC = new QRadioButton(groupBox);
        radioButton_LC->setObjectName(QStringLiteral("radioButton_LC"));
        radioButton_LC->setGeometry(QRect(20, 90, 221, 27));
        radioButton_LC->setFont(font1);
        pushButton_OK = new QPushButton(centralwidget);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));
        pushButton_OK->setGeometry(QRect(20, 140, 271, 41));
        pushButton_OK->setFont(font1);
        Module_Msg1101->setCentralWidget(centralwidget);

        retranslateUi(Module_Msg1101);

        QMetaObject::connectSlotsByName(Module_Msg1101);
    } // setupUi

    void retranslateUi(QMainWindow *Module_Msg1101)
    {
        Module_Msg1101->setWindowTitle(QApplication::translate("Module_Msg1101", "\304\220o l\341\273\261c", nullptr));
        groupBox->setTitle(QApplication::translate("Module_Msg1101", "Ch\341\273\215n h\341\273\207 \304\221o?", nullptr));
        radioButton_WT->setText(QApplication::translate("Module_Msg1101", "H\341\273\207 \304\221o l\341\273\261c c\341\272\243n c\341\273\247a n\306\260\341\273\233c", nullptr));
        radioButton_LX->setText(QApplication::translate("Module_Msg1101", "H\341\273\207 con l\341\272\257c l\303\262 xo", nullptr));
        radioButton_LC->setText(QApplication::translate("Module_Msg1101", "C\341\272\243m bi\341\272\277n l\341\273\261c", nullptr));
        pushButton_OK->setText(QApplication::translate("Module_Msg1101", "Ch\341\273\215n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Module_Msg1101: public Ui_Module_Msg1101 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULE_MSG1101_H
