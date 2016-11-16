/********************************************************************************
** Form generated from reading UI file 'createuser.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEUSER_H
#define UI_CREATEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateUser
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_firstName;
    QLineEdit *lineEdit_firstName;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_major;
    QLineEdit *lineEdit_getMajor;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_ID;
    QLineEdit *lineEdit_getID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_getUser;
    QLineEdit *lineEdit_getUser;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_lastName;
    QLineEdit *lineEdit_lastName;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_minor;
    QLineEdit *lineEdit_getMinor;
    QHBoxLayout *horizontalLayout;
    QLabel *label_getPassword;
    QLineEdit *lineEdit_getPassword;
    QPushButton *pushButton_createUser;

    void setupUi(QDialog *CreateUser)
    {
        if (CreateUser->objectName().isEmpty())
            CreateUser->setObjectName(QStringLiteral("CreateUser"));
        CreateUser->resize(375, 175);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CreateUser->sizePolicy().hasHeightForWidth());
        CreateUser->setSizePolicy(sizePolicy);
        CreateUser->setMaximumSize(QSize(375, 175));
        CreateUser->setSizeGripEnabled(false);
        CreateUser->setModal(true);
        formLayout = new QFormLayout(CreateUser);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_firstName = new QLabel(CreateUser);
        label_firstName->setObjectName(QStringLiteral("label_firstName"));

        horizontalLayout_3->addWidget(label_firstName);

        lineEdit_firstName = new QLineEdit(CreateUser);
        lineEdit_firstName->setObjectName(QStringLiteral("lineEdit_firstName"));

        horizontalLayout_3->addWidget(lineEdit_firstName);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_major = new QLabel(CreateUser);
        label_major->setObjectName(QStringLiteral("label_major"));

        horizontalLayout_5->addWidget(label_major);

        lineEdit_getMajor = new QLineEdit(CreateUser);
        lineEdit_getMajor->setObjectName(QStringLiteral("lineEdit_getMajor"));

        horizontalLayout_5->addWidget(lineEdit_getMajor);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_ID = new QLabel(CreateUser);
        label_ID->setObjectName(QStringLiteral("label_ID"));

        horizontalLayout_7->addWidget(label_ID);

        lineEdit_getID = new QLineEdit(CreateUser);
        lineEdit_getID->setObjectName(QStringLiteral("lineEdit_getID"));

        horizontalLayout_7->addWidget(lineEdit_getID);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_getUser = new QLabel(CreateUser);
        label_getUser->setObjectName(QStringLiteral("label_getUser"));

        horizontalLayout_2->addWidget(label_getUser);

        lineEdit_getUser = new QLineEdit(CreateUser);
        lineEdit_getUser->setObjectName(QStringLiteral("lineEdit_getUser"));

        horizontalLayout_2->addWidget(lineEdit_getUser);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_8->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_lastName = new QLabel(CreateUser);
        label_lastName->setObjectName(QStringLiteral("label_lastName"));

        horizontalLayout_4->addWidget(label_lastName);

        lineEdit_lastName = new QLineEdit(CreateUser);
        lineEdit_lastName->setObjectName(QStringLiteral("lineEdit_lastName"));

        horizontalLayout_4->addWidget(lineEdit_lastName);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_minor = new QLabel(CreateUser);
        label_minor->setObjectName(QStringLiteral("label_minor"));

        horizontalLayout_6->addWidget(label_minor);

        lineEdit_getMinor = new QLineEdit(CreateUser);
        lineEdit_getMinor->setObjectName(QStringLiteral("lineEdit_getMinor"));

        horizontalLayout_6->addWidget(lineEdit_getMinor);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_getPassword = new QLabel(CreateUser);
        label_getPassword->setObjectName(QStringLiteral("label_getPassword"));

        horizontalLayout->addWidget(label_getPassword);

        lineEdit_getPassword = new QLineEdit(CreateUser);
        lineEdit_getPassword->setObjectName(QStringLiteral("lineEdit_getPassword"));

        horizontalLayout->addWidget(lineEdit_getPassword);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_8->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_8);

        pushButton_createUser = new QPushButton(CreateUser);
        pushButton_createUser->setObjectName(QStringLiteral("pushButton_createUser"));

        verticalLayout_3->addWidget(pushButton_createUser);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_3);

        pushButton_createUser->raise();

        retranslateUi(CreateUser);

        QMetaObject::connectSlotsByName(CreateUser);
    } // setupUi

    void retranslateUi(QDialog *CreateUser)
    {
        CreateUser->setWindowTitle(QApplication::translate("CreateUser", "Dialog", 0));
        label_firstName->setText(QApplication::translate("CreateUser", "First Name:", 0));
        label_major->setText(QApplication::translate("CreateUser", "Major:", 0));
        label_ID->setText(QApplication::translate("CreateUser", "ID:", 0));
        label_getUser->setText(QApplication::translate("CreateUser", "Username:", 0));
        label_lastName->setText(QApplication::translate("CreateUser", "Last Name:", 0));
        label_minor->setText(QApplication::translate("CreateUser", "Minor:", 0));
        label_getPassword->setText(QApplication::translate("CreateUser", "Password:", 0));
        pushButton_createUser->setText(QApplication::translate("CreateUser", "Create", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateUser: public Ui_CreateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSER_H
