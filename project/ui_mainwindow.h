/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_studentProfile;
    QPushButton *pushButton_classSearch;
    QPushButton *pushButton_classSchedule;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(500, 400));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 421, 301));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(500, 400));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_studentProfile = new QPushButton(groupBox);
        pushButton_studentProfile->setObjectName(QStringLiteral("pushButton_studentProfile"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_studentProfile->sizePolicy().hasHeightForWidth());
        pushButton_studentProfile->setSizePolicy(sizePolicy2);
        pushButton_studentProfile->setMaximumSize(QSize(16777215, 16777215));
        pushButton_studentProfile->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(pushButton_studentProfile);

        pushButton_classSearch = new QPushButton(groupBox);
        pushButton_classSearch->setObjectName(QStringLiteral("pushButton_classSearch"));
        sizePolicy2.setHeightForWidth(pushButton_classSearch->sizePolicy().hasHeightForWidth());
        pushButton_classSearch->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(pushButton_classSearch);

        pushButton_classSchedule = new QPushButton(groupBox);
        pushButton_classSchedule->setObjectName(QStringLiteral("pushButton_classSchedule"));
        sizePolicy2.setHeightForWidth(pushButton_classSchedule->sizePolicy().hasHeightForWidth());
        pushButton_classSchedule->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(pushButton_classSchedule);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "MENU", 0));
        pushButton_studentProfile->setText(QApplication::translate("MainWindow", "Student Profile", 0));
        pushButton_classSearch->setText(QApplication::translate("MainWindow", "Class Search", 0));
        pushButton_classSchedule->setText(QApplication::translate("MainWindow", "Class Schedule", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
