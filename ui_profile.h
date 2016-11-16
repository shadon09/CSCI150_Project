/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_name;
    QLabel *label_displayname;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_displayID;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_username;
    QLabel *label_displayUsername;
    QPushButton *pushButton_changeUser;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_password;
    QLabel *label_3;
    QPushButton *pushButton_changePassword;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_coursesTaken;
    QLabel *label_coursesRequired;
    QHBoxLayout *horizontalLayout_5;
    QListView *listView_coursesTaken;
    QListView *listView_coursesRequired;
    QPushButton *pushButton_OK;

    void setupUi(QDialog *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName(QStringLiteral("Profile"));
        Profile->setEnabled(true);
        Profile->resize(833, 634);
        gridLayout = new QGridLayout(Profile);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_name = new QLabel(Profile);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout->addWidget(label_name);

        label_displayname = new QLabel(Profile);
        label_displayname->setObjectName(QStringLiteral("label_displayname"));

        horizontalLayout->addWidget(label_displayname);


        horizontalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Profile);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_displayID = new QLabel(Profile);
        label_displayID->setObjectName(QStringLiteral("label_displayID"));

        horizontalLayout_2->addWidget(label_displayID);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_username = new QLabel(Profile);
        label_username->setObjectName(QStringLiteral("label_username"));

        horizontalLayout_3->addWidget(label_username);

        label_displayUsername = new QLabel(Profile);
        label_displayUsername->setObjectName(QStringLiteral("label_displayUsername"));

        horizontalLayout_3->addWidget(label_displayUsername);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_changeUser = new QPushButton(Profile);
        pushButton_changeUser->setObjectName(QStringLiteral("pushButton_changeUser"));

        verticalLayout->addWidget(pushButton_changeUser);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_password = new QLabel(Profile);
        label_password->setObjectName(QStringLiteral("label_password"));

        horizontalLayout_4->addWidget(label_password);

        label_3 = new QLabel(Profile);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        pushButton_changePassword = new QPushButton(Profile);
        pushButton_changePassword->setObjectName(QStringLiteral("pushButton_changePassword"));

        verticalLayout_2->addWidget(pushButton_changePassword);


        horizontalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_coursesTaken = new QLabel(Profile);
        label_coursesTaken->setObjectName(QStringLiteral("label_coursesTaken"));

        horizontalLayout_7->addWidget(label_coursesTaken);

        label_coursesRequired = new QLabel(Profile);
        label_coursesRequired->setObjectName(QStringLiteral("label_coursesRequired"));

        horizontalLayout_7->addWidget(label_coursesRequired);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        listView_coursesTaken = new QListView(Profile);
        listView_coursesTaken->setObjectName(QStringLiteral("listView_coursesTaken"));

        horizontalLayout_5->addWidget(listView_coursesTaken);

        listView_coursesRequired = new QListView(Profile);
        listView_coursesRequired->setObjectName(QStringLiteral("listView_coursesRequired"));

        horizontalLayout_5->addWidget(listView_coursesRequired);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        pushButton_OK = new QPushButton(Profile);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));

        gridLayout->addWidget(pushButton_OK, 1, 0, 1, 1);


        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QDialog *Profile)
    {
        Profile->setWindowTitle(QApplication::translate("Profile", "Dialog", 0));
        label_name->setText(QApplication::translate("Profile", "Name:", 0));
        label_displayname->setText(QApplication::translate("Profile", "DisplayName", 0));
        label_2->setText(QApplication::translate("Profile", "ID:", 0));
        label_displayID->setText(QApplication::translate("Profile", "Disply ID", 0));
        label_username->setText(QApplication::translate("Profile", "Username:", 0));
        label_displayUsername->setText(QApplication::translate("Profile", "DisplayUsername", 0));
        pushButton_changeUser->setText(QApplication::translate("Profile", "Change Username", 0));
        label_password->setText(QApplication::translate("Profile", "Password:", 0));
        label_3->setText(QApplication::translate("Profile", "Displaypassword", 0));
        pushButton_changePassword->setText(QApplication::translate("Profile", "Change Password", 0));
        label_coursesTaken->setText(QApplication::translate("Profile", "Courses Taken", 0));
        label_coursesRequired->setText(QApplication::translate("Profile", "Courses Required", 0));
        pushButton_OK->setText(QApplication::translate("Profile", "Return to menu", 0));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
