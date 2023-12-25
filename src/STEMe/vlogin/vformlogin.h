#ifndef VFORMLOGIN_H
#define VFORMLOGIN_H

#include <QWidget>
#include <QLineEdit>
#include <vlogin/vuser.h>
#include <mainwindow.h>

namespace Ui {
class VFormLogin;
}

class VFormLogin : public QWidget
{
    Q_OBJECT

public:
    explicit VFormLogin(QWidget *parent = nullptr);
    ~VFormLogin();

private slots:
    void on_loggout();
    void on_pushButton_Login_clicked();

    void on_lineEdit_Password_textChanged(const QString &arg1);

    void on_comboBox_Account_currentTextChanged(const QString &arg1);

private:
    Ui::VFormLogin *ui;  
    MainWindow w;
   // QLineEdit *lineEdit;
};

#endif // VFORMLOGIN_H
