#include "schedule.h"
#include "ui_schedule.h"

//------------------------------------------------
#include <QStringListModel>
#include "mainwindow.h"
MainWindow *windowSch;




Schedule::Schedule(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Schedule)
{

    ui->setupUi(this);
    schedule = new QStandardItemModel(10,10,this);
    ui->tableView_schedule->setModel(schedule);
    for(int row = 1; row < 10; row++)
        {

                QModelIndex index = schedule->index(row,0,QModelIndex());
                schedule->setData(index,"Time");

        }
    for(int col = 1; col < 8; col++)
    {
        if(col == 1)
        {
        QModelIndex index = schedule->index(0,col,QModelIndex());
        schedule->setData(index,"Mon");
        }
        else if(col == 2)
        {
        QModelIndex index = schedule->index(0,col,QModelIndex());
        schedule->setData(index,"Tue");
        }
        else if(col == 3)
        {
        QModelIndex index = schedule->index(0,col,QModelIndex());
        schedule->setData(index,"Wed");
        }
        else if(col == 4)
        {
        QModelIndex index = schedule->index(0,col,QModelIndex());
        schedule->setData(index,"Thu");
        }
        else if(col == 5)
        {
        QModelIndex index = schedule->index(0,col,QModelIndex());
        schedule->setData(index,"Fri");
        }
        else if(col == 6)
        {
        QModelIndex index = schedule->index(0,col,QModelIndex());
        schedule->setData(index,"Sat");
        }
        else if(col == 7)
        {
        QModelIndex index = schedule->index(0,col,QModelIndex());
        schedule->setData(index,"Sun");
        }
    }





    ui->tableView_schedule->show();

}

Schedule::~Schedule()
{
    delete ui;
}




void Schedule::on_pushButton_return_clicked()
{
    close();
    windowSch= new MainWindow(this);
    windowSch->showNormal();
}
