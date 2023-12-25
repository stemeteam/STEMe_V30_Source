/********************************************************************************
** Form generated from reading UI file 'testwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWINDOW_H
#define UI_TESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestWindow)
    {
        if (TestWindow->objectName().isEmpty())
            TestWindow->setObjectName(QStringLiteral("TestWindow"));
        TestWindow->resize(800, 600);
        centralwidget = new QWidget(TestWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 99, 30));
        TestWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TestWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        TestWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TestWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TestWindow->setStatusBar(statusbar);

        retranslateUi(TestWindow);

        QMetaObject::connectSlotsByName(TestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TestWindow)
    {
        TestWindow->setWindowTitle(QApplication::translate("TestWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("TestWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestWindow: public Ui_TestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWINDOW_H
