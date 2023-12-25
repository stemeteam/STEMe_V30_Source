/********************************************************************************
** Form generated from reading UI file 'vformlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VFORMLOGIN_H
#define UI_VFORMLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VFormLogin
{
public:
    QFrame *frame;
    QPushButton *pushButton_Login;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;
    QLabel *label_3;
    QLabel *label_accountType;
    QFrame *frame_2;
    QLabel *label;
    QComboBox *comboBox_Account;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *VFormLogin)
    {
        if (VFormLogin->objectName().isEmpty())
            VFormLogin->setObjectName(QStringLiteral("VFormLogin"));
        VFormLogin->setWindowModality(Qt::WindowModal);
        VFormLogin->resize(1280, 740);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/Steme_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        VFormLogin->setWindowIcon(icon);
        VFormLogin->setStyleSheet(QLatin1String("background-color: #132635;\n"
"background-color: #193848;\n"
""));
        frame = new QFrame(VFormLogin);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(410, 119, 460, 411));
        frame->setStyleSheet(QStringLiteral("background-color: #193848;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_Login = new QPushButton(frame);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(80, 330, 300, 40));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_Login->setFont(font);
        pushButton_Login->setAutoFillBackground(false);
        pushButton_Login->setStyleSheet(QLatin1String("border: none;\n"
"background-color: rgb(0, 222, 99);"));
        pushButton_Login->setIconSize(QSize(100, 20));
        pushButton_Login->setCheckable(false);
        pushButton_Login->setChecked(false);
        pushButton_Login->setAutoDefault(true);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(78, 246, 111, 22));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(13, 207, 200);"));
        lineEdit_Password = new QLineEdit(frame);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(80, 270, 300, 30));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        lineEdit_Password->setFont(font1);
        lineEdit_Password->setAcceptDrops(true);
        lineEdit_Password->setAutoFillBackground(false);
        lineEdit_Password->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_Password->setFrame(true);
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 304, 111, 22));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_accountType = new QLabel(frame);
        label_accountType->setObjectName(QStringLiteral("label_accountType"));
        label_accountType->setGeometry(QRect(200, 304, 171, 22));
        QFont font3;
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        label_accountType->setFont(font3);
        label_accountType->setStyleSheet(QStringLiteral("color: rgb(255,255, 255);"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(50, 170, 361, 80));
        frame_2->setStyleSheet(QStringLiteral("background-color: #193848;"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(29, 15, 161, 22));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(13, 207, 200);"));
        comboBox_Account = new QComboBox(frame_2);
        comboBox_Account->setObjectName(QStringLiteral("comboBox_Account"));
        comboBox_Account->setEnabled(true);
        comboBox_Account->setGeometry(QRect(30, 40, 300, 30));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        font4.setKerning(true);
        comboBox_Account->setFont(font4);
        comboBox_Account->setStyleSheet(QLatin1String("QComboBox {\n"
"    color: rgb(255, 255, 255);\n"
"   background-color: rgb(255, 255, 255);\n"
"}\n"
"QComboBox::editable {\n"
"   color: rgb(0, 0, 0);\n"
"    background: white;\n"
"}\n"
""));
        comboBox_Account->setEditable(true);
        comboBox_Account->setFrame(true);
        graphicsView = new QGraphicsView(VFormLogin);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(488, 140, 300, 150));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/image/LogginLogoBig.png);"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        QWidget::setTabOrder(comboBox_Account, lineEdit_Password);
        QWidget::setTabOrder(lineEdit_Password, pushButton_Login);
        QWidget::setTabOrder(pushButton_Login, graphicsView);

        retranslateUi(VFormLogin);

        pushButton_Login->setDefault(false);


        QMetaObject::connectSlotsByName(VFormLogin);
    } // setupUi

    void retranslateUi(QWidget *VFormLogin)
    {
        VFormLogin->setWindowTitle(QApplication::translate("VFormLogin", "STEMe-\304\220\304\203ng nh\341\272\255p", nullptr));
        pushButton_Login->setText(QApplication::translate("VFormLogin", "\304\220\304\203ng nh\341\272\255p", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_Login->setShortcut(QApplication::translate("VFormLogin", "Enter", nullptr));
#endif // QT_NO_SHORTCUT
        label_2->setText(QApplication::translate("VFormLogin", "M\341\272\255t kh\341\272\251u", nullptr));
        lineEdit_Password->setText(QString());
        label_3->setText(QApplication::translate("VFormLogin", "Lo\341\272\241i t\303\240i kho\341\272\243n:", nullptr));
        label_accountType->setText(QApplication::translate("VFormLogin", "Student (h\341\273\215c sinh)", nullptr));
        label->setText(QApplication::translate("VFormLogin", "T\303\252n \304\221\304\203ng nh\341\272\255p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VFormLogin: public Ui_VFormLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VFORMLOGIN_H
