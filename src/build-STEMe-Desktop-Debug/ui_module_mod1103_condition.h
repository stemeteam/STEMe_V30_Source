/********************************************************************************
** Form generated from reading UI file 'module_mod1103_condition.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULE_MOD1103_CONDITION_H
#define UI_MODULE_MOD1103_CONDITION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Module_MOD1103_Condition
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_Cancel;
    QLabel *label_Blink_Start;
    QLabel *label_Blink_Process;
    QLabel *label_Blink_Stop;
    QFrame *frame_Condition;
    QFrame *frame_3;
    QLineEdit *lineEdit_Condition_Stop;
    QComboBox *comboBox_Condition_Stop_Car;
    QLabel *label_5;
    QComboBox *comboBox_Condition_Stop;
    QLabel *label_Condition_Stop_Unit;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_New;
    QFrame *frame_2;
    QComboBox *comboBox_Condition_Start_Car;
    QLabel *label_4;
    QComboBox *comboBox_Condition_Start;
    QLineEdit *lineEdit_Condition_Start;
    QLabel *label_Condition_Start_Unit;
    QGroupBox *groupBox;
    QComboBox *comboBox_Unit;
    QFrame *line;
    QPushButton *pushButton_Delete;
    QFrame *line_2;
    QGraphicsView *graphicsView;
    QLabel *label_arrowBlink;
    QLabel *label_runBlink;
    QLabel *label_Run_Comment;
    QPushButton *pushButton_Run;

    void setupUi(QMainWindow *Module_MOD1103_Condition)
    {
        if (Module_MOD1103_Condition->objectName().isEmpty())
            Module_MOD1103_Condition->setObjectName(QStringLiteral("Module_MOD1103_Condition"));
        Module_MOD1103_Condition->resize(1019, 519);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/MFS0103_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Module_MOD1103_Condition->setWindowIcon(icon);
        Module_MOD1103_Condition->setStyleSheet(QLatin1String("background-color: #132630;\n"
"background-color: rgb(44, 58, 70);"));
        centralwidget = new QWidget(Module_MOD1103_Condition);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_Cancel = new QPushButton(centralwidget);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(880, 470, 131, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pushButton_Cancel->setFont(font);
        label_Blink_Start = new QLabel(centralwidget);
        label_Blink_Start->setObjectName(QStringLiteral("label_Blink_Start"));
        label_Blink_Start->setGeometry(QRect(160, 40, 151, 21));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_Blink_Start->setFont(font1);
        label_Blink_Start->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        label_Blink_Process = new QLabel(centralwidget);
        label_Blink_Process->setObjectName(QStringLiteral("label_Blink_Process"));
        label_Blink_Process->setGeometry(QRect(320, 40, 371, 21));
        label_Blink_Process->setFont(font1);
        label_Blink_Process->setAutoFillBackground(false);
        label_Blink_Process->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Blink_Process->setAlignment(Qt::AlignCenter);
        label_Blink_Stop = new QLabel(centralwidget);
        label_Blink_Stop->setObjectName(QStringLiteral("label_Blink_Stop"));
        label_Blink_Stop->setGeometry(QRect(700, 40, 301, 22));
        label_Blink_Stop->setFont(font1);
        label_Blink_Stop->setStyleSheet(QStringLiteral("color: rgb(85, 170, 255);"));
        frame_Condition = new QFrame(centralwidget);
        frame_Condition->setObjectName(QStringLiteral("frame_Condition"));
        frame_Condition->setGeometry(QRect(0, 190, 1011, 231));
        frame_Condition->setFrameShape(QFrame::NoFrame);
        frame_Condition->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_Condition);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(580, 10, 381, 91));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lineEdit_Condition_Stop = new QLineEdit(frame_3);
        lineEdit_Condition_Stop->setObjectName(QStringLiteral("lineEdit_Condition_Stop"));
        lineEdit_Condition_Stop->setGeometry(QRect(210, 50, 91, 32));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        lineEdit_Condition_Stop->setFont(font2);
        lineEdit_Condition_Stop->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_Condition_Stop->setMaxLength(4);
        lineEdit_Condition_Stop->setAlignment(Qt::AlignCenter);
        comboBox_Condition_Stop_Car = new QComboBox(frame_3);
        comboBox_Condition_Stop_Car->addItem(QString());
        comboBox_Condition_Stop_Car->addItem(QString());
        comboBox_Condition_Stop_Car->addItem(QString());
        comboBox_Condition_Stop_Car->setObjectName(QStringLiteral("comboBox_Condition_Stop_Car"));
        comboBox_Condition_Stop_Car->setGeometry(QRect(210, 10, 91, 32));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        comboBox_Condition_Stop_Car->setFont(font3);
        comboBox_Condition_Stop_Car->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 14, 191, 22));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setWeight(50);
        label_5->setFont(font4);
        label_5->setStyleSheet(QStringLiteral("color: rgb(85, 170, 255);"));
        comboBox_Condition_Stop = new QComboBox(frame_3);
        comboBox_Condition_Stop->addItem(QString());
        comboBox_Condition_Stop->addItem(QString());
        comboBox_Condition_Stop->addItem(QString());
        comboBox_Condition_Stop->addItem(QString());
        comboBox_Condition_Stop->addItem(QString());
        comboBox_Condition_Stop->addItem(QString());
        comboBox_Condition_Stop->addItem(QString());
        comboBox_Condition_Stop->addItem(QString());
        comboBox_Condition_Stop->addItem(QString());
        comboBox_Condition_Stop->addItem(QString());
        comboBox_Condition_Stop->setObjectName(QStringLiteral("comboBox_Condition_Stop"));
        comboBox_Condition_Stop->setGeometry(QRect(10, 50, 191, 32));
        comboBox_Condition_Stop->setFont(font3);
        comboBox_Condition_Stop->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Condition_Stop_Unit = new QLabel(frame_3);
        label_Condition_Stop_Unit->setObjectName(QStringLiteral("label_Condition_Stop_Unit"));
        label_Condition_Stop_Unit->setGeometry(QRect(304, 56, 71, 20));
        QFont font5;
        font5.setBold(false);
        font5.setWeight(50);
        label_Condition_Stop_Unit->setFont(font5);
        label_Condition_Stop_Unit->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Condition_Stop_Unit->setAlignment(Qt::AlignCenter);
        pushButton_Save = new QPushButton(frame_Condition);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));
        pushButton_Save->setGeometry(QRect(80, 200, 181, 31));
        pushButton_Save->setFont(font);
        pushButton_New = new QPushButton(frame_Condition);
        pushButton_New->setObjectName(QStringLiteral("pushButton_New"));
        pushButton_New->setGeometry(QRect(790, 200, 151, 31));
        pushButton_New->setFont(font);
        frame_2 = new QFrame(frame_Condition);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(60, 10, 381, 91));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        comboBox_Condition_Start_Car = new QComboBox(frame_2);
        comboBox_Condition_Start_Car->addItem(QString());
        comboBox_Condition_Start_Car->addItem(QString());
        comboBox_Condition_Start_Car->addItem(QString());
        comboBox_Condition_Start_Car->setObjectName(QStringLiteral("comboBox_Condition_Start_Car"));
        comboBox_Condition_Start_Car->setGeometry(QRect(210, 10, 91, 32));
        comboBox_Condition_Start_Car->setFont(font3);
        comboBox_Condition_Start_Car->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 14, 191, 22));
        label_4->setFont(font4);
        label_4->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        comboBox_Condition_Start = new QComboBox(frame_2);
        comboBox_Condition_Start->addItem(QString());
        comboBox_Condition_Start->addItem(QString());
        comboBox_Condition_Start->addItem(QString());
        comboBox_Condition_Start->addItem(QString());
        comboBox_Condition_Start->addItem(QString());
        comboBox_Condition_Start->addItem(QString());
        comboBox_Condition_Start->addItem(QString());
        comboBox_Condition_Start->addItem(QString());
        comboBox_Condition_Start->addItem(QString());
        comboBox_Condition_Start->addItem(QString());
        comboBox_Condition_Start->setObjectName(QStringLiteral("comboBox_Condition_Start"));
        comboBox_Condition_Start->setGeometry(QRect(10, 50, 191, 32));
        comboBox_Condition_Start->setFont(font3);
        comboBox_Condition_Start->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_Condition_Start = new QLineEdit(frame_2);
        lineEdit_Condition_Start->setObjectName(QStringLiteral("lineEdit_Condition_Start"));
        lineEdit_Condition_Start->setGeometry(QRect(210, 50, 91, 32));
        lineEdit_Condition_Start->setFont(font2);
        lineEdit_Condition_Start->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_Condition_Start->setMaxLength(4);
        lineEdit_Condition_Start->setAlignment(Qt::AlignCenter);
        label_Condition_Start_Unit = new QLabel(frame_2);
        label_Condition_Start_Unit->setObjectName(QStringLiteral("label_Condition_Start_Unit"));
        label_Condition_Start_Unit->setGeometry(QRect(304, 56, 71, 20));
        label_Condition_Start_Unit->setFont(font5);
        label_Condition_Start_Unit->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_Condition_Start_Unit->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(frame_Condition);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 110, 901, 91));
        QFont font6;
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        groupBox->setFont(font6);
        groupBox->setStyleSheet(QStringLiteral("color: rgb(0, 255, 255);"));
        groupBox->setFlat(false);
        comboBox_Unit = new QComboBox(groupBox);
        comboBox_Unit->setObjectName(QStringLiteral("comboBox_Unit"));
        comboBox_Unit->setGeometry(QRect(20, 40, 861, 32));
        comboBox_Unit->setFont(font3);
        comboBox_Unit->setStyleSheet(QLatin1String("QComboBox {\n"
"    color: rgb(255, 255, 255);\n"
"   background-color: rgb(255, 255, 255);\n"
"}\n"
"QComboBox:editable {\n"
"   color: rgb(0, 0, 0);\n"
"    background: white;\n"
"}"));
        comboBox_Unit->setEditable(true);
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(230, 10, 671, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_Delete = new QPushButton(frame_Condition);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));
        pushButton_Delete->setGeometry(QRect(630, 200, 151, 31));
        pushButton_Delete->setFont(font);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(60, 440, 900, 1));
        line_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 70, 1001, 91));
        graphicsView->setStyleSheet(QLatin1String("background-repeat: no-repeat;\n"
"background-position: center;\n"
"background-image: url(:/image/MFS0103_Unit01.jpg);"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        label_arrowBlink = new QLabel(centralwidget);
        label_arrowBlink->setObjectName(QStringLiteral("label_arrowBlink"));
        label_arrowBlink->setGeometry(QRect(110, 80, 41, 22));
        label_runBlink = new QLabel(centralwidget);
        label_runBlink->setObjectName(QStringLiteral("label_runBlink"));
        label_runBlink->setGeometry(QRect(470, 88, 71, 22));
        label_Run_Comment = new QLabel(centralwidget);
        label_Run_Comment->setObjectName(QStringLiteral("label_Run_Comment"));
        label_Run_Comment->setGeometry(QRect(0, 160, 1021, 31));
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(false);
        font7.setItalic(true);
        font7.setWeight(50);
        label_Run_Comment->setFont(font7);
        label_Run_Comment->setAutoFillBackground(false);
        label_Run_Comment->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_Run_Comment->setAlignment(Qt::AlignCenter);
        pushButton_Run = new QPushButton(centralwidget);
        pushButton_Run->setObjectName(QStringLiteral("pushButton_Run"));
        pushButton_Run->setGeometry(QRect(349, 450, 321, 61));
        QFont font8;
        font8.setPointSize(20);
        font8.setBold(true);
        font8.setWeight(75);
        pushButton_Run->setFont(font8);
        pushButton_Run->setStyleSheet(QLatin1String("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(0, 85, 127);\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"	border-color: rgb(0, 50, 74);\n"
"}\n"
""));
        Module_MOD1103_Condition->setCentralWidget(centralwidget);

        retranslateUi(Module_MOD1103_Condition);

        QMetaObject::connectSlotsByName(Module_MOD1103_Condition);
    } // setupUi

    void retranslateUi(QMainWindow *Module_MOD1103_Condition)
    {
        Module_MOD1103_Condition->setWindowTitle(QApplication::translate("Module_MOD1103_Condition", "MFS1103-Th\341\273\261c h\303\240nh", nullptr));
        pushButton_Cancel->setText(QApplication::translate("Module_MOD1103_Condition", "Tho\303\241t", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_Cancel->setShortcut(QApplication::translate("Module_MOD1103_Condition", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        label_Blink_Start->setText(QApplication::translate("Module_MOD1103_Condition", "\304\220i\341\273\201u ki\341\273\207n b\341\272\257t \304\221\341\272\247u", nullptr));
        label_Blink_Process->setText(QApplication::translate("Module_MOD1103_Condition", "Qu\303\241 tr\303\254nh", nullptr));
        label_Blink_Stop->setText(QApplication::translate("Module_MOD1103_Condition", "\304\220i\341\273\201u ki\341\273\207n k\341\272\277t th\303\272c", nullptr));
        lineEdit_Condition_Stop->setText(QApplication::translate("Module_MOD1103_Condition", "0", nullptr));
        comboBox_Condition_Stop_Car->setItemText(0, QApplication::translate("Module_MOD1103_Condition", "XE-01", nullptr));
        comboBox_Condition_Stop_Car->setItemText(1, QApplication::translate("Module_MOD1103_Condition", "XE-02", nullptr));
        comboBox_Condition_Stop_Car->setItemText(2, QApplication::translate("Module_MOD1103_Condition", "T\341\272\244T C\341\272\242", nullptr));

        label_5->setText(QApplication::translate("Module_MOD1103_Condition", "\304\220i\341\273\201u ki\341\273\207n k\341\272\277t th\303\272c cho", nullptr));
        comboBox_Condition_Stop->setItemText(0, QApplication::translate("Module_MOD1103_Condition", "Kh\303\264ng c\303\263 \304\221i\341\273\201u ki\341\273\207n", nullptr));
        comboBox_Condition_Stop->setItemText(1, QApplication::translate("Module_MOD1103_Condition", "Qu\303\243ng \304\221\306\260\341\273\235ng (l\341\273\233n h\306\241n)", nullptr));
        comboBox_Condition_Stop->setItemText(2, QApplication::translate("Module_MOD1103_Condition", "Qu\303\243ng \304\221\306\260\341\273\235ng (nh\341\273\217 h\306\241n)", nullptr));
        comboBox_Condition_Stop->setItemText(3, QApplication::translate("Module_MOD1103_Condition", "V\341\272\255n t\341\273\221c (l\341\273\233n h\306\241n)", nullptr));
        comboBox_Condition_Stop->setItemText(4, QApplication::translate("Module_MOD1103_Condition", "V\341\272\255n t\341\273\221c (nh\341\273\217 h\306\241n)", nullptr));
        comboBox_Condition_Stop->setItemText(5, QApplication::translate("Module_MOD1103_Condition", "Gia t\341\273\221c (l\341\273\233n h\306\241n)", nullptr));
        comboBox_Condition_Stop->setItemText(6, QApplication::translate("Module_MOD1103_Condition", "Gia t\341\273\221c (nh\341\273\217 h\306\241n)", nullptr));
        comboBox_Condition_Stop->setItemText(7, QApplication::translate("Module_MOD1103_Condition", "L\341\273\261c t\303\241c \304\221\341\273\231ng (l\341\273\233n h\306\241n)", nullptr));
        comboBox_Condition_Stop->setItemText(8, QApplication::translate("Module_MOD1103_Condition", "L\341\273\261c t\303\241c \304\221\341\273\231ng (nh\341\273\217 h\306\241n)", nullptr));
        comboBox_Condition_Stop->setItemText(9, QApplication::translate("Module_MOD1103_Condition", "Th\341\273\235i gian (l\341\273\233n h\306\241n)", nullptr));

        label_Condition_Stop_Unit->setText(QApplication::translate("Module_MOD1103_Condition", "(mm/s2)", nullptr));
        pushButton_Save->setText(QApplication::translate("Module_MOD1103_Condition", "L\306\260u", nullptr));
        pushButton_New->setText(QApplication::translate("Module_MOD1103_Condition", "T\341\272\241o m\341\273\233i", nullptr));
        comboBox_Condition_Start_Car->setItemText(0, QApplication::translate("Module_MOD1103_Condition", "XE-01", nullptr));
        comboBox_Condition_Start_Car->setItemText(1, QApplication::translate("Module_MOD1103_Condition", "XE-02", nullptr));
        comboBox_Condition_Start_Car->setItemText(2, QApplication::translate("Module_MOD1103_Condition", "T\341\272\244T C\341\272\242", nullptr));

        label_4->setText(QApplication::translate("Module_MOD1103_Condition", "\304\220i\341\273\201u ki\341\273\207n b\341\272\257t \304\221\341\272\247u cho", nullptr));
        comboBox_Condition_Start->setItemText(0, QApplication::translate("Module_MOD1103_Condition", "Kh\303\264ng c\303\263 \304\221i\341\273\201u ki\341\273\207n", nullptr));
        comboBox_Condition_Start->setItemText(1, QApplication::translate("Module_MOD1103_Condition", "Qu\303\243ng \304\221\306\260\341\273\235ng (l\341\273\233n h\306\241n)", nullptr));
        comboBox_Condition_Start->setItemText(2, QApplication::translate("Module_MOD1103_Condition", "Qu\303\243ng \304\221\306\260\341\273\235ng (nh\341\273\217 h\306\241n)", nullptr));
        comboBox_Condition_Start->setItemText(3, QApplication::translate("Module_MOD1103_Condition", "V\341\272\255n t\341\273\221c (l\341\273\233n h\306\241n)", nullptr));
        comboBox_Condition_Start->setItemText(4, QApplication::translate("Module_MOD1103_Condition", "V\341\272\255n t\341\273\221c (nh\341\273\217 h\306\241n)", nullptr));
        comboBox_Condition_Start->setItemText(5, QApplication::translate("Module_MOD1103_Condition", "Gia t\341\273\221c (l\341\273\233n h\306\241n)", nullptr));
        comboBox_Condition_Start->setItemText(6, QApplication::translate("Module_MOD1103_Condition", "Gia t\341\273\221c (nh\341\273\217 h\306\241n)", nullptr));
        comboBox_Condition_Start->setItemText(7, QApplication::translate("Module_MOD1103_Condition", "L\341\273\261c t\303\241c \304\221\341\273\231ng (l\341\273\233n h\306\241n)", nullptr));
        comboBox_Condition_Start->setItemText(8, QApplication::translate("Module_MOD1103_Condition", "L\341\273\261c t\303\241c \304\221\341\273\231ng (nh\341\273\217 h\306\241n)", nullptr));
        comboBox_Condition_Start->setItemText(9, QApplication::translate("Module_MOD1103_Condition", "Th\341\273\235i gian (l\341\273\233n h\306\241n)", nullptr));

        lineEdit_Condition_Start->setText(QApplication::translate("Module_MOD1103_Condition", "0", nullptr));
        label_Condition_Start_Unit->setText(QApplication::translate("Module_MOD1103_Condition", "(mm/s2)", nullptr));
        groupBox->setTitle(QApplication::translate("Module_MOD1103_Condition", "C\303\241c b\303\240i th\341\273\261c h\303\240nh c\306\241 b\341\272\243n", nullptr));
        pushButton_Delete->setText(QApplication::translate("Module_MOD1103_Condition", "X\303\263a", nullptr));
        label_arrowBlink->setText(QString());
        label_runBlink->setText(QString());
        label_Run_Comment->setText(QApplication::translate("Module_MOD1103_Condition", "H\306\260\341\273\233ng d\341\272\253n", nullptr));
        pushButton_Run->setText(QApplication::translate("Module_MOD1103_Condition", "Th\341\273\261c hi\341\273\207n", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_Run->setShortcut(QApplication::translate("Module_MOD1103_Condition", "Space", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class Module_MOD1103_Condition: public Ui_Module_MOD1103_Condition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULE_MOD1103_CONDITION_H
