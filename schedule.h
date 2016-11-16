#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <QDialog>
#include <QTableView>
#include <QItemDelegate>
#include <QStandardItemModel>

namespace Ui {
class Schedule;
}

class Schedule : public QDialog
{
    Q_OBJECT

public:
    explicit Schedule(QWidget *parent = 0);
    ~Schedule();

private slots:


    void on_pushButton_return_clicked();

private:
    Ui::Schedule *ui;
    QStandardItemModel *schedule;
};

#endif // SCHEDULE_H
