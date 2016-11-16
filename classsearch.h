#ifndef CLASSSEARCH_H
#define CLASSSEARCH_H

#include <QDialog>

namespace Ui {
class ClassSearch;
}

class ClassSearch : public QDialog
{
    Q_OBJECT

public:
    explicit ClassSearch(QWidget *parent = 0);
    ~ClassSearch();

private slots:



    void on_pushButton_return_clicked();



    void on_pushButton_filter_clicked();



    void on_checkBox_MWF_stateChanged(int arg1);

    void on_checkBox_TTH_stateChanged(int arg1);

    void on_pushButton_addClass_clicked();

private:
    Ui::ClassSearch *ui;

};

#endif // CLASSSEARCH_H
