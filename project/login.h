#ifndef LOGIN_H
#define LOGIN_H
#include "mainwindow.h"
#include "createuser.h"
#include <QMainWindow>

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_signUp_clicked();

private:
    Ui::login *ui;
    MainWindow *window;
    CreateUser *signUpW;

};

#endif // LOGIN_H
