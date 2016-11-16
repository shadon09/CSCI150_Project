#include "profile.h"
#include "ui_profile.h"
//-----------------------------------
#include"mainwindow.h"
#include<QStringListModel>
#include <vector>
#include <sstream>
#include <fstream>
#include "Student.h"
#include "loadsave.h"
#include <iostream>

std::vector<Student> myVec;
std::vector<Student>::iterator itS;
std::vector<Course> myCourse, myCourse2;
std::vector<Course>::iterator it, it2;
std::string indexS, courseN;


int index;
bool flag= false;
//vector<Course> Myvec2;


MainWindow *windowp;

Profile::Profile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Profile)
{
QStringList coursesTaken, coursesRequired;





    fileops f2, f3;
    f2.loadStudent(myVec);
    ui->setupUi(this);

    std::ifstream myFile("activeUser.txt");
    getline(myFile, indexS);

    std::stringstream  ss(indexS);
    ss >> index;


    ui->label_displayname->setText(QString::fromStdString(myVec[index].getFirst()));
    ui->label_displayID->setText(QString::number((myVec[index].getID())));
    ui->label_displayUsername->setText(QString::fromStdString(myVec[index].getUser()));

    QStringListModel *model, *model2;
    model = new QStringListModel(this);
    model2 = new QStringListModel(this);


    myCourse = myVec[index].getCt();
    for(it = myCourse.begin(); it != myCourse.end(); it++){
  //      std::string example =
       courseN = it->getName();

        QString s = QString::fromStdString(courseN);

        coursesTaken <<  s;

    }


    f2.loadCourse(myCourse2);
    std::cout<< myCourse2.size() << std::endl;

    for(it2 = myCourse2.begin(); it2 != myCourse2.end(); it2++){
  //      std::string example =
       courseN = it2->getName();

        QString s2 = QString::fromStdString(courseN);

        coursesRequired <<  s2;

    }
    std::cout<< coursesRequired.size() << std::endl;


    model->setStringList(coursesTaken);
    model2->setStringList(coursesRequired);
    ui->listView_coursesTaken->setModel(model);
    ui->listView_coursesRequired->setModel(model2);


    myCourse2.clear();



}


Profile::~Profile()
{
    delete ui;
}


void Profile::on_pushButton_OK_clicked()
{
    close();
    windowp = new MainWindow(this);
    windowp->showNormal();
}
