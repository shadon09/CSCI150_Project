/********************************************************************************
** Form generated from reading UI file 'schedule.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULE_H
#define UI_SCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Schedule
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QPushButton *pushButton_return;
    QTableView *tableView_schedule;

    void setupUi(QDialog *Schedule)
    {
        if (Schedule->objectName().isEmpty())
            Schedule->setObjectName(QStringLiteral("Schedule"));
        Schedule->resize(746, 500);
        Schedule->setMinimumSize(QSize(500, 500));
        gridLayout = new QGridLayout(Schedule);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(Schedule);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        pushButton_return = new QPushButton(groupBox);
        pushButton_return->setObjectName(QStringLiteral("pushButton_return"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton_return);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        tableView_schedule = new QTableView(Schedule);
        tableView_schedule->setObjectName(QStringLiteral("tableView_schedule"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView_schedule->sizePolicy().hasHeightForWidth());
        tableView_schedule->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(tableView_schedule, 0, 1, 1, 1);


        retranslateUi(Schedule);

        QMetaObject::connectSlotsByName(Schedule);
    } // setupUi

    void retranslateUi(QDialog *Schedule)
    {
        Schedule->setWindowTitle(QApplication::translate("Schedule", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Schedule", "MENU", 0));
        pushButton_return->setText(QApplication::translate("Schedule", "Return to Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class Schedule: public Ui_Schedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULE_H
