/********************************************************************************
** Form generated from reading UI file 'emessagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMESSAGEBOX_H
#define UI_EMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EMessageBox
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EMessageBox)
    {
        if (EMessageBox->objectName().isEmpty())
            EMessageBox->setObjectName(QStringLiteral("EMessageBox"));
        EMessageBox->resize(344, 250);
        centralwidget = new QWidget(EMessageBox);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        EMessageBox->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EMessageBox);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 344, 28));
        EMessageBox->setMenuBar(menubar);
        statusbar = new QStatusBar(EMessageBox);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        EMessageBox->setStatusBar(statusbar);

        retranslateUi(EMessageBox);

        QMetaObject::connectSlotsByName(EMessageBox);
    } // setupUi

    void retranslateUi(QMainWindow *EMessageBox)
    {
        EMessageBox->setWindowTitle(QApplication::translate("EMessageBox", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EMessageBox: public Ui_EMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMESSAGEBOX_H
