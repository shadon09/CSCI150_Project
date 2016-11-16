

#include "login.h"
#include "ui_login.h"
//#include "course.h"
#include <QMessageBox>
#include <QPixmap>
#include "library.h"
#include "Student.h"
#include "loadsave.h"
string user, pwd, userName, userPwd;
bool test;
vector<Student> accounts;
extern fileops f;





login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{

    ui->setupUi(this);
    QPixmap pix("C:/Users/Juan/Pictures/Saved Pictures/unnamed.JPG");
    int w = ui->label_picture->width();
    int h = ui->label_picture->height();
    ui->label_picture->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_login_clicked()
{
    f.loadStudent(accounts);
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    user = username.toLocal8Bit().constData();
    pwd = password.toLocal8Bit().constData();

    for (int i = 0; i < accounts.size() ; i++){
        if(user == accounts[i].getUser() && pwd == accounts[i].getPass())
        {
            ofstream myFile;
            myFile.open("activeUser.txt",  std::ofstream::out | std::ofstream::trunc);

            myFile << i << endl;

            close();
            window = new MainWindow(this);
            window->show();
            break;
        }
        else if (i == (accounts.size())){
            QMessageBox::warning(this, "login", "incorrect");
        }

    }






}

void login::on_pushButton_signUp_clicked()
{
    close();
    signUpW = new CreateUser(this);
    signUpW->showNormal();
}
