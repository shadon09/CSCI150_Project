/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_login;
    QPushButton *pushButton_signUp;
    QLabel *label_picture;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->setEnabled(true);
        login->resize(822, 552);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        login->setMaximumSize(QSize(822, 552));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(330, 60, 381, 311));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        groupBox->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_username = new QLabel(groupBox);
        label_username->setObjectName(QStringLiteral("label_username"));

        horizontalLayout_2->addWidget(label_username);

        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        horizontalLayout_2->addWidget(lineEdit_username);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_password = new QLabel(groupBox);
        label_password->setObjectName(QStringLiteral("label_password"));

        horizontalLayout->addWidget(label_password);

        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_password);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));

        verticalLayout->addWidget(pushButton_login);

        pushButton_signUp = new QPushButton(groupBox);
        pushButton_signUp->setObjectName(QStringLiteral("pushButton_signUp"));

        verticalLayout->addWidget(pushButton_signUp);


        verticalLayout_2->addLayout(verticalLayout);

        label_picture = new QLabel(centralwidget);
        label_picture->setObjectName(QStringLiteral("label_picture"));
        label_picture->setGeometry(QRect(50, 80, 251, 291));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 822, 20));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("login", "Login", 0));
        label_username->setText(QApplication::translate("login", "Username:", 0));
        label_password->setText(QApplication::translate("login", "Password:", 0));
        lineEdit_password->setInputMask(QString());
        lineEdit_password->setText(QString());
        pushButton_login->setText(QApplication::translate("login", "Login", 0));
        pushButton_signUp->setText(QApplication::translate("login", "Sign Up", 0));
        label_picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
