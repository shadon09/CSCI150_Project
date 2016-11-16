#include "createuser.h"
#include "ui_createuser.h"
#include "loadsave.h"
#include <QMessageBox>
#include <sstream>
#include <fstream>

using namespace std;

int IDnum;
string first, last, user2, pwd2, minor, major, ID;
vector<Course> myVec;
vector<Student> myStd;
fileops f;

CreateUser::CreateUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateUser)
{

    ui->setupUi(this);
}

CreateUser::~CreateUser()
{
    delete ui;
}

void CreateUser::on_pushButton_createUser_clicked()
{

   QString getFirst = ui->lineEdit_firstName->text();
   QString getLast = ui->lineEdit_lastName->text();
   QString getUser = ui->lineEdit_getUser->text();
   QString getPassword = ui->lineEdit_getPassword->text();
QString getMajor = ui->lineEdit_getMajor->text();
QString getMinor = ui->lineEdit_getMinor->text();
QString getID = ui->lineEdit_getID->text();

   if (getFirst == NULL || getLast == NULL){
       QMessageBox::warning(this,"CreateUser","Please enter all fields");
   }

   else {
       first = getFirst.toLocal8Bit().constData();
       last = getLast.toLocal8Bit().constData();
       user2 = getUser.toLocal8Bit().constData();
       pwd2 = getPassword.toLocal8Bit().constData();
        major = getMajor.toLocal8Bit().constData();
        minor =getMinor.toLocal8Bit().constData();
        ID = getID.toLocal8Bit().constData();
        stringstream ss(ID);
        ss >> IDnum;

       /* f.loadStudent(myStd);




    Student student1(first,last, IDnum, major, minor, myVec,user2, pwd2);
    myStd.push_back(student1);
    f.saveStudent(myStd);*/

       close();
       window = new MainWindow(this);
       window->showNormal();
   }





}
