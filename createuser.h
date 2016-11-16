#ifndef CREATEUSER_H
#define CREATEUSER_H
#include "mainwindow.h"
#include <QDialog>
#include <vector>
#include <string>


namespace Ui {
class CreateUser;
}

struct node{
    int key;
    int mark;
};



class CreateUser : public QDialog
{
    Q_OBJECT

public:
    explicit CreateUser(QWidget *parent = 0);
    ~CreateUser();

private slots:
    void on_pushButton_createUser_clicked();





private:
    Ui::CreateUser *ui;
    MainWindow *window;


};

#endif // CREATEUSER_H
