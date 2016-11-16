#include "classsearch.h"
#include "ui_classsearch.h"
//--------------------------------
#include "profile.h"
#include "schedule.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "course.h"
#include "loadsave.h"
#include "filter.h"
#include <vector>
#include <sstream>
#include <fstream>
#include <QStringListModel>
#include <iostream>
#include <QMessageBox>
QStringListModel *model;
QStringList coursesFiltered;
QModelIndex index2;
QString Class;
std::vector<Student> myVec2;
std::vector<Course> allCourses, filteredCourses, myCourse3, testVec;
std::vector<Course>::iterator it3;




extern string indexS;
extern int index;
std::string mwf, tth, getClass;



MainWindow *windowCS;



ClassSearch::ClassSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClassSearch)
{
    ui->setupUi(this);
    model = new QStringListModel(this);
}

ClassSearch::~ClassSearch()
{
    delete ui;
}






void ClassSearch::on_pushButton_return_clicked()
{

    fileops f;
    f.saveStudent(myVec2);
    close();
    windowCS = new MainWindow(this);
    windowCS->showNormal();

}



void ClassSearch::on_pushButton_filter_clicked()
{
    coursesFiltered.erase(coursesFiltered.begin(),coursesFiltered.end());

    fileops fP, fP2, fP3;
    Filter filter1;

    std::cout << "test" << std::endl;
    std::ifstream myFile("activeUser.txt");
    getline(myFile, indexS);

    std::stringstream  ss(indexS);
    ss >> index;

    fP2.loadStudent(myVec2);
    fP3.loadCourse2(myCourse3);
    //std::cout << myCourse3.size() << std::endl;

    //myCourse3 = myVec2[index].getCt();


    fP.loadCourse(allCourses);
    //std::cout << allCourses.size() << std::endl;

    testVec = filter1.FilterByCourses(myCourse3, allCourses);
    //std::cout << filteredCourses.size() << std::endl;

    for(it3 = testVec.begin(); it3 != testVec.end(); it3++)
    {
        QString s2 = QString::fromStdString(it3->getName());
        coursesFiltered << s2;

    }


    model->setStringList(coursesFiltered);

    ui->listView->setModel(model);

  //  coursesFiltered.erase(coursesFiltered.begin(),coursesFiltered.end());
allCourses.clear();
myVec2.clear();
myCourse3.clear();

}





void ClassSearch::on_checkBox_MWF_stateChanged(int arg1)
{
    if (arg1)
    {
        mwf = "Monday";

    }
}

void ClassSearch::on_checkBox_TTH_stateChanged(int arg1)
{
    if(arg1)
    {
        tth = "Tuesday";
    }
}

void ClassSearch::on_pushButton_addClass_clicked()
{
   /* fileops f;
    Filter filter1;
    f.loadCourse(allCourses);
     f.loadStudent(myVec2);
    filteredCourses = filter1.FilterByCourses(myVec2[index].getCt(), allCourses);

index2 = ui->listView->currentIndex();
vector<Course> ran;

if (index2.isValid()){
 //   index2 = ui->listView->currentIndex();

    Class = coursesFiltered.at(index2.row());
    getClass = Class.toLocal8Bit().constData();
    for (int i = 0; i < filteredCourses.size(); i++)
    {
        if( getClass == filteredCourses[i].getName()){
            cout<< filteredCourses[i].getName() << endl;

            Course temp(filteredCourses[i].getName(), filteredCourses[i].getID(),filteredCourses[i].getReq(), filteredCourses[i].getStart(), filteredCourses[i].getEnd(), filteredCourses[i].getSubject(), filteredCourses[i].getDays());
              cout << temp.getName() << " help" << endl;
            (myVec2[index].setCt(temp));

            /*std::vector<Course>::iterator it4;

            for(it4 = ran.begin(); it4 != ran.end(); it4++)
            {
                std::cout << it4->getName() << std::endl;
            }


        }


    }

    //std::cout << myVec2[index].getCt()[0].getName()<< " jasafm,";
    f.saveStudent(myVec2);

    std::cout << getClass << std::endl;
}
else
{
    QMessageBox::warning(this, "ERROR", "Please select Course");
  //  coursesFiltered.erase(coursesFiltered.begin(),coursesFiltered.end());

}*/
}
