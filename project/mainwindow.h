#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "profile.h"
#include "schedule.h"
#include "classsearch.h"



#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_pushButton_classSearch_clicked();

    void on_pushButton_studentProfile_clicked();

    void on_pushButton_classSchedule_clicked();

private:
    Ui::MainWindow *ui;
    ClassSearch *classSearchW;
    Profile *profileW;
    Schedule *scheduleW;



};

#endif // MAINWINDOW_H
