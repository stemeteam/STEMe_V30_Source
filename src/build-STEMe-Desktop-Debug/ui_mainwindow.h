/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QFrame *frameWidget_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_User_Account;
    QLabel *label_User_Type;
    QPushButton *pushButton_Loggout;
    QPushButton *pushButton_Loggout_2;
    QTabWidget *tabWidget;
    QWidget *tab_Sensors;
    QWidget *tab_Modules;
    QWidget *tab_Systems;
    QWidget *tab_Settings;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1280, 740);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/Steme_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/image/Background_icon_3.jpg);"));
        MainWindow->setIconSize(QSize(24, 24));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frameWidget_2 = new QFrame(centralWidget);
        frameWidget_2->setObjectName(QStringLiteral("frameWidget_2"));
        frameWidget_2->setGeometry(QRect(0, 0, 1281, 31));
        frameWidget_2->setStyleSheet(QStringLiteral("background-image: url(:/image/Background_icon_3.jpg);"));
        frameWidget_2->setFrameShape(QFrame::Box);
        frameWidget_2->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frameWidget_2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 3, 501, 24));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_User_Account = new QLabel(horizontalLayoutWidget);
        label_User_Account->setObjectName(QStringLiteral("label_User_Account"));
        label_User_Account->setEnabled(false);
        label_User_Account->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_User_Account);

        label_User_Type = new QLabel(horizontalLayoutWidget);
        label_User_Type->setObjectName(QStringLiteral("label_User_Type"));
        label_User_Type->setEnabled(false);
        label_User_Type->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_User_Type);

        pushButton_Loggout = new QPushButton(frameWidget_2);
        pushButton_Loggout->setObjectName(QStringLiteral("pushButton_Loggout"));
        pushButton_Loggout->setGeometry(QRect(1167, 5, 111, 20));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        pushButton_Loggout->setFont(font);
        pushButton_Loggout->setAutoFillBackground(false);
        pushButton_Loggout->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(255, 255, 255);"));
        pushButton_Loggout->setIconSize(QSize(150, 25));
        pushButton_Loggout->setAutoDefault(true);
        pushButton_Loggout_2 = new QPushButton(frameWidget_2);
        pushButton_Loggout_2->setObjectName(QStringLiteral("pushButton_Loggout_2"));
        pushButton_Loggout_2->setGeometry(QRect(570, 5, 141, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_Loggout_2->setFont(font1);
        pushButton_Loggout_2->setAutoFillBackground(false);
        pushButton_Loggout_2->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/STEMe_Logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Loggout_2->setIcon(icon1);
        pushButton_Loggout_2->setIconSize(QSize(150, 25));
        pushButton_Loggout_2->setAutoDefault(true);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 31, 1281, 710));
        tabWidget->setMinimumSize(QSize(1281, 710));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        tabWidget->setFont(font2);
        tab_Sensors = new QWidget();
        tab_Sensors->setObjectName(QStringLiteral("tab_Sensors"));
        tabWidget->addTab(tab_Sensors, QString());
        tab_Modules = new QWidget();
        tab_Modules->setObjectName(QStringLiteral("tab_Modules"));
        tabWidget->addTab(tab_Modules, QString());
        tab_Systems = new QWidget();
        tab_Systems->setObjectName(QStringLiteral("tab_Systems"));
        tabWidget->addTab(tab_Systems, QString());
        tab_Settings = new QWidget();
        tab_Settings->setObjectName(QStringLiteral("tab_Settings"));
        tabWidget->addTab(tab_Settings, QString());
        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(tabWidget, pushButton_Loggout_2);
        QWidget::setTabOrder(pushButton_Loggout_2, pushButton_Loggout);

        retranslateUi(MainWindow);

        pushButton_Loggout->setDefault(false);
        pushButton_Loggout_2->setDefault(false);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "STEMe - Khoa h\341\273\215c v\303\240 gi\303\241o d\341\273\245c", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        label_User_Account->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_User_Type->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_Loggout->setText(QApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", nullptr));
        pushButton_Loggout_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_Sensors), QApplication::translate("MainWindow", "                              C\341\272\243m bi\341\272\277n                              ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Modules), QApplication::translate("MainWindow", "                     M\303\264-\304\221un th\341\273\261c h\303\240nh                      ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Systems), QApplication::translate("MainWindow", "                     M\303\264 h\303\254nh th\303\255 nghi\341\273\207m                     ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Settings), QApplication::translate("MainWindow", "                     C\303\240i \304\221\341\272\267t v\303\240 Ti\341\273\207n \303\255ch                     ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
