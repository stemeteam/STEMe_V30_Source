/********************************************************************************
** Form generated from reading UI file 'formuseraccount.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMUSERACCOUNT_H
#define UI_FORMUSERACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormUserAccount
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Cancel;
    QFrame *frame;
    QGroupBox *groupBox_AccountInfo;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Info_Account;
    QLabel *label_Info_Type;
    QLabel *label_Info_Date;
    QFrame *frame_2;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_ChangePassword;
    QLineEdit *lineEdit_ChangeNewPassword;
    QLineEdit *lineEdit_ChangeRePassword;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_ChangePassword;
    QFrame *frame_3;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QComboBox *comboBox_RemoveAccount;
    QLineEdit *lineEdit_RemovePassword;
    QLineEdit *lineEdit_RemoveRePassword;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_Remove;
    QFrame *frame_4;
    QGroupBox *groupBox_3;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_NewAccount;
    QComboBox *comboBox_NewType;
    QLineEdit *lineEdit_NewPassword;
    QLineEdit *lineEdit_NewRePassword;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_ChangePassword_NewCreat;

    void setupUi(QWidget *FormUserAccount)
    {
        if (FormUserAccount->objectName().isEmpty())
            FormUserAccount->setObjectName(QStringLiteral("FormUserAccount"));
        FormUserAccount->resize(900, 533);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/Setup_icon_1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        FormUserAccount->setWindowIcon(icon);
        horizontalLayoutWidget = new QWidget(FormUserAccount);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(290, 480, 321, 41));
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

        frame = new QFrame(FormUserAccount);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 431, 241));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox_AccountInfo = new QGroupBox(frame);
        groupBox_AccountInfo->setObjectName(QStringLiteral("groupBox_AccountInfo"));
        groupBox_AccountInfo->setGeometry(QRect(10, 10, 411, 151));
        groupBox_AccountInfo->setFont(font);
        groupBox_AccountInfo->setStyleSheet(QStringLiteral("border:5px"));
        groupBox_AccountInfo->setFlat(false);
        verticalLayoutWidget = new QWidget(groupBox_AccountInfo);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 40, 121, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        verticalLayoutWidget_2 = new QWidget(groupBox_AccountInfo);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(160, 40, 231, 91));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_Info_Account = new QLabel(verticalLayoutWidget_2);
        label_Info_Account->setObjectName(QStringLiteral("label_Info_Account"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_Info_Account->setFont(font1);

        verticalLayout_2->addWidget(label_Info_Account);

        label_Info_Type = new QLabel(verticalLayoutWidget_2);
        label_Info_Type->setObjectName(QStringLiteral("label_Info_Type"));
        label_Info_Type->setFont(font1);

        verticalLayout_2->addWidget(label_Info_Type);

        label_Info_Date = new QLabel(verticalLayoutWidget_2);
        label_Info_Date->setObjectName(QStringLiteral("label_Info_Date"));
        label_Info_Date->setFont(font1);

        verticalLayout_2->addWidget(label_Info_Date);

        frame_2 = new QFrame(FormUserAccount);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 260, 431, 201));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 411, 191));
        verticalLayoutWidget_3 = new QWidget(groupBox);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 30, 134, 91));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        verticalLayoutWidget_4 = new QWidget(groupBox);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(180, 30, 211, 110));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_ChangePassword = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_ChangePassword->setObjectName(QStringLiteral("lineEdit_ChangePassword"));
        lineEdit_ChangePassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        verticalLayout_4->addWidget(lineEdit_ChangePassword);

        lineEdit_ChangeNewPassword = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_ChangeNewPassword->setObjectName(QStringLiteral("lineEdit_ChangeNewPassword"));
        lineEdit_ChangeNewPassword->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(lineEdit_ChangeNewPassword);

        lineEdit_ChangeRePassword = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_ChangeRePassword->setObjectName(QStringLiteral("lineEdit_ChangeRePassword"));
        lineEdit_ChangeRePassword->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(lineEdit_ChangeRePassword);

        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(180, 150, 211, 32));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_ChangePassword = new QPushButton(horizontalLayoutWidget_2);
        pushButton_ChangePassword->setObjectName(QStringLiteral("pushButton_ChangePassword"));
        pushButton_ChangePassword->setFont(font);

        horizontalLayout_4->addWidget(pushButton_ChangePassword);

        frame_3 = new QFrame(FormUserAccount);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(450, 260, 441, 201));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        groupBox_2 = new QGroupBox(frame_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 421, 191));
        verticalLayoutWidget_7 = new QWidget(groupBox_2);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(20, 30, 134, 101));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(verticalLayoutWidget_7);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_7->addWidget(label_11);

        label_12 = new QLabel(verticalLayoutWidget_7);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_7->addWidget(label_12);

        label_13 = new QLabel(verticalLayoutWidget_7);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_7->addWidget(label_13);

        verticalLayoutWidget_8 = new QWidget(groupBox_2);
        verticalLayoutWidget_8->setObjectName(QStringLiteral("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(170, 30, 231, 110));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        comboBox_RemoveAccount = new QComboBox(verticalLayoutWidget_8);
        comboBox_RemoveAccount->setObjectName(QStringLiteral("comboBox_RemoveAccount"));
        comboBox_RemoveAccount->setEditable(false);

        verticalLayout_8->addWidget(comboBox_RemoveAccount);

        lineEdit_RemovePassword = new QLineEdit(verticalLayoutWidget_8);
        lineEdit_RemovePassword->setObjectName(QStringLiteral("lineEdit_RemovePassword"));
        lineEdit_RemovePassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        verticalLayout_8->addWidget(lineEdit_RemovePassword);

        lineEdit_RemoveRePassword = new QLineEdit(verticalLayoutWidget_8);
        lineEdit_RemoveRePassword->setObjectName(QStringLiteral("lineEdit_RemoveRePassword"));
        lineEdit_RemoveRePassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        verticalLayout_8->addWidget(lineEdit_RemoveRePassword);

        horizontalLayoutWidget_4 = new QWidget(groupBox_2);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(170, 150, 231, 32));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_Remove = new QPushButton(horizontalLayoutWidget_4);
        pushButton_Remove->setObjectName(QStringLiteral("pushButton_Remove"));
        pushButton_Remove->setFont(font);

        horizontalLayout_6->addWidget(pushButton_Remove);

        frame_4 = new QFrame(FormUserAccount);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(450, 10, 441, 241));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        groupBox_3 = new QGroupBox(frame_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 421, 231));
        verticalLayoutWidget_5 = new QWidget(groupBox_3);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(20, 30, 134, 141));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_5->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_5->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_5->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_5->addWidget(label_10);

        verticalLayoutWidget_6 = new QWidget(groupBox_3);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(160, 30, 241, 148));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_NewAccount = new QLineEdit(verticalLayoutWidget_6);
        lineEdit_NewAccount->setObjectName(QStringLiteral("lineEdit_NewAccount"));

        verticalLayout_6->addWidget(lineEdit_NewAccount);

        comboBox_NewType = new QComboBox(verticalLayoutWidget_6);
        comboBox_NewType->addItem(QString());
        comboBox_NewType->addItem(QString());
        comboBox_NewType->addItem(QString());
        comboBox_NewType->setObjectName(QStringLiteral("comboBox_NewType"));
        comboBox_NewType->setEditable(false);

        verticalLayout_6->addWidget(comboBox_NewType);

        lineEdit_NewPassword = new QLineEdit(verticalLayoutWidget_6);
        lineEdit_NewPassword->setObjectName(QStringLiteral("lineEdit_NewPassword"));
        lineEdit_NewPassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        verticalLayout_6->addWidget(lineEdit_NewPassword);

        lineEdit_NewRePassword = new QLineEdit(verticalLayoutWidget_6);
        lineEdit_NewRePassword->setObjectName(QStringLiteral("lineEdit_NewRePassword"));
        lineEdit_NewRePassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        verticalLayout_6->addWidget(lineEdit_NewRePassword);

        horizontalLayoutWidget_3 = new QWidget(groupBox_3);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(160, 190, 241, 32));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_ChangePassword_NewCreat = new QPushButton(horizontalLayoutWidget_3);
        pushButton_ChangePassword_NewCreat->setObjectName(QStringLiteral("pushButton_ChangePassword_NewCreat"));
        pushButton_ChangePassword_NewCreat->setFont(font);

        horizontalLayout_5->addWidget(pushButton_ChangePassword_NewCreat);


        retranslateUi(FormUserAccount);

        QMetaObject::connectSlotsByName(FormUserAccount);
    } // setupUi

    void retranslateUi(QWidget *FormUserAccount)
    {
        FormUserAccount->setWindowTitle(QApplication::translate("FormUserAccount", "STEMe - T\341\272\241o t\303\240i kho\341\272\243n", nullptr));
        pushButton_Cancel->setText(QApplication::translate("FormUserAccount", "Tho\303\241t", nullptr));
        groupBox_AccountInfo->setTitle(QApplication::translate("FormUserAccount", "Th\303\264ng tin t\303\240i kho\341\272\243n", nullptr));
        label_2->setText(QApplication::translate("FormUserAccount", "T\303\252n t\303\240i kho\341\272\243n:", nullptr));
        label->setText(QApplication::translate("FormUserAccount", "Ki\341\273\203u t\303\240i kho\341\272\243n:", nullptr));
        label_4->setText(QApplication::translate("FormUserAccount", "Ng\303\240y l\341\272\255p:", nullptr));
        label_Info_Account->setText(QString());
        label_Info_Type->setText(QString());
        label_Info_Date->setText(QString());
        groupBox->setTitle(QApplication::translate("FormUserAccount", "Thay \304\221\341\273\225i m\341\272\255t kh\341\272\251u", nullptr));
        label_3->setText(QApplication::translate("FormUserAccount", "M\341\272\255t kh\341\272\251u c\305\251:", nullptr));
        label_5->setText(QApplication::translate("FormUserAccount", "M\341\272\255t kh\341\272\251u m\341\273\233i:", nullptr));
        label_6->setText(QApplication::translate("FormUserAccount", "Nh\341\272\255p l\341\272\241i m\341\272\255t kh\341\272\251u:", nullptr));
        lineEdit_ChangePassword->setPlaceholderText(QApplication::translate("FormUserAccount", "> 7 k\303\255 t\341\273\261, kh\303\264ng d\341\272\245u", nullptr));
        lineEdit_ChangeNewPassword->setPlaceholderText(QApplication::translate("FormUserAccount", "> 7 k\303\255 t\341\273\261, kh\303\264ng d\341\272\245u", nullptr));
        lineEdit_ChangeRePassword->setPlaceholderText(QApplication::translate("FormUserAccount", "> 7 k\303\255 t\341\273\261, kh\303\264ng d\341\272\245u", nullptr));
        pushButton_ChangePassword->setText(QApplication::translate("FormUserAccount", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", nullptr));
        groupBox_2->setTitle(QApplication::translate("FormUserAccount", "X\303\263a t\303\240i kho\341\272\243n", nullptr));
        label_11->setText(QApplication::translate("FormUserAccount", "Ch\341\273\215n t\303\240i kho\341\272\243n:", nullptr));
        label_12->setText(QApplication::translate("FormUserAccount", "M\341\272\255t kh\341\272\251u:", nullptr));
        label_13->setText(QApplication::translate("FormUserAccount", "Nh\341\272\255p l\341\272\241i m\341\272\255t kh\341\272\251u:", nullptr));
        comboBox_RemoveAccount->setCurrentText(QString());
        lineEdit_RemovePassword->setPlaceholderText(QApplication::translate("FormUserAccount", "Vi\341\272\277t li\341\273\201n, kh\303\264ng d\341\272\245u", nullptr));
        lineEdit_RemoveRePassword->setPlaceholderText(QApplication::translate("FormUserAccount", "Vi\341\272\277t li\341\273\201n, kh\303\264ng d\341\272\245u", nullptr));
        pushButton_Remove->setText(QApplication::translate("FormUserAccount", "X\303\263a t\303\240i kho\341\272\243n", nullptr));
        groupBox_3->setTitle(QApplication::translate("FormUserAccount", "T\341\272\241o t\303\240i kho\341\272\243n m\341\273\233i", nullptr));
        label_7->setText(QApplication::translate("FormUserAccount", "T\303\252n t\303\240i kho\341\272\243n:", nullptr));
        label_8->setText(QApplication::translate("FormUserAccount", "Lo\341\272\241i t\303\240i kho\341\272\243n:", nullptr));
        label_9->setText(QApplication::translate("FormUserAccount", "M\341\272\255t kh\341\272\251u:", nullptr));
        label_10->setText(QApplication::translate("FormUserAccount", "Nh\341\272\255p l\341\272\241i m\341\272\255t kh\341\272\251u:", nullptr));
        lineEdit_NewAccount->setPlaceholderText(QApplication::translate("FormUserAccount", "Vi\341\272\277t li\341\273\201n, kh\303\264ng d\341\272\245u", nullptr));
        comboBox_NewType->setItemText(0, QApplication::translate("FormUserAccount", "Root (Qu\341\272\243n l\303\275)", nullptr));
        comboBox_NewType->setItemText(1, QApplication::translate("FormUserAccount", "Teacher (Gi\303\241o vi\303\252n)", nullptr));
        comboBox_NewType->setItemText(2, QApplication::translate("FormUserAccount", "Student (H\341\273\215c sinh)", nullptr));

        comboBox_NewType->setCurrentText(QApplication::translate("FormUserAccount", "Root (Qu\341\272\243n l\303\275)", nullptr));
        lineEdit_NewPassword->setPlaceholderText(QApplication::translate("FormUserAccount", "Vi\341\272\277t li\341\273\201n, kh\303\264ng d\341\272\245u", nullptr));
        lineEdit_NewRePassword->setPlaceholderText(QApplication::translate("FormUserAccount", "Vi\341\272\277t li\341\273\201n, kh\303\264ng d\341\272\245u", nullptr));
        pushButton_ChangePassword_NewCreat->setText(QApplication::translate("FormUserAccount", "T\341\272\241o t\303\240i kho\341\272\243n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormUserAccount: public Ui_FormUserAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMUSERACCOUNT_H
