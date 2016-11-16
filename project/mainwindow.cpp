#include "mainwindow.h"
#include "ui_mainwindow.h"
//----------------------------
ClassSearch *classSearchW;
Profile *profileW;
Schedule *scheduleW;


MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_classSearch_clicked()
{
    hide();
    classSearchW = new ClassSearch(this);
    classSearchW->showNormal();
}

void MainWindow::on_pushButton_studentProfile_clicked()
{
    hide();
    profileW = new Profile(this);
    profileW->showNormal();
}

void MainWindow::on_pushButton_classSchedule_clicked()
{
    hide();
    scheduleW = new Schedule(this);
    scheduleW->showNormal();
}
