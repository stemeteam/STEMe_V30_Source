/********************************************************************************
** Form generated from reading UI file 'vbuttonsingle.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VBUTTONSINGLE_H
#define UI_VBUTTONSINGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VButtonSingle
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *VButtonSingle)
    {
        if (VButtonSingle->objectName().isEmpty())
            VButtonSingle->setObjectName(QStringLiteral("VButtonSingle"));
        VButtonSingle->resize(160, 160);
        pushButton = new QPushButton(VButtonSingle);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 10, 100, 100));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton->setIconSize(QSize(100, 100));
        label = new QLabel(VButtonSingle);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(2, 120, 156, 22));
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(VButtonSingle);

        QMetaObject::connectSlotsByName(VButtonSingle);
    } // setupUi

    void retranslateUi(QWidget *VButtonSingle)
    {
        VButtonSingle->setWindowTitle(QApplication::translate("VButtonSingle", "Form", nullptr));
        pushButton->setText(QString());
        label->setText(QApplication::translate("VButtonSingle", "Nhi\341\273\207t \304\221\341\273\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VButtonSingle: public Ui_VButtonSingle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VBUTTONSINGLE_H
