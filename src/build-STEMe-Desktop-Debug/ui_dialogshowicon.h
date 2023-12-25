/********************************************************************************
** Form generated from reading UI file 'dialogshowicon.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSHOWICON_H
#define UI_DIALOGSHOWICON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogShowIcon
{
public:
    QScrollArea *scrollArea_Icon;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_OK;

    void setupUi(QDialog *DialogShowIcon)
    {
        if (DialogShowIcon->objectName().isEmpty())
            DialogShowIcon->setObjectName(QStringLiteral("DialogShowIcon"));
        DialogShowIcon->resize(1000, 600);
        scrollArea_Icon = new QScrollArea(DialogShowIcon);
        scrollArea_Icon->setObjectName(QStringLiteral("scrollArea_Icon"));
        scrollArea_Icon->setGeometry(QRect(20, 40, 960, 501));
        scrollArea_Icon->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 958, 499));
        scrollArea_Icon->setWidget(scrollAreaWidgetContents);
        label = new QLabel(DialogShowIcon);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 561, 22));
        horizontalLayoutWidget = new QWidget(DialogShowIcon);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(690, 550, 291, 41));
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

        pushButton_OK = new QPushButton(horizontalLayoutWidget);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));
        pushButton_OK->setFont(font);

        horizontalLayout->addWidget(pushButton_OK);


        retranslateUi(DialogShowIcon);

        QMetaObject::connectSlotsByName(DialogShowIcon);
    } // setupUi

    void retranslateUi(QDialog *DialogShowIcon)
    {
        DialogShowIcon->setWindowTitle(QApplication::translate("DialogShowIcon", "STEMe - Ch\341\273\215n \341\272\243nh (icon)", nullptr));
        label->setText(QApplication::translate("DialogShowIcon", "Ch\341\273\215n Icon b\303\252n d\306\260\341\273\233i cho thi\341\272\277t b\341\273\213 c\341\273\247a b\341\272\241n.", nullptr));
        pushButton_Cancel->setText(QApplication::translate("DialogShowIcon", "Cancel", nullptr));
        pushButton_OK->setText(QApplication::translate("DialogShowIcon", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogShowIcon: public Ui_DialogShowIcon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSHOWICON_H
