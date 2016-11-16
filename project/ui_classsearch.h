/********************************************************************************
** Form generated from reading UI file 'classsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSSEARCH_H
#define UI_CLASSSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ClassSearch
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_time_2;
    QLineEdit *lineEdit_getTime_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_getClass_2;
    QLineEdit *lineEdit_getClass_2;
    QLabel *label_days;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_MWF;
    QCheckBox *checkBox_TTH;
    QPushButton *pushButton_filter;
    QPushButton *pushButton_return;
    QListView *listView;
    QPushButton *pushButton_addClass;

    void setupUi(QDialog *ClassSearch)
    {
        if (ClassSearch->objectName().isEmpty())
            ClassSearch->setObjectName(QStringLiteral("ClassSearch"));
        ClassSearch->setWindowModality(Qt::NonModal);
        ClassSearch->resize(833, 368);
        ClassSearch->setMaximumSize(QSize(16777215, 16777215));
        ClassSearch->setSizeGripEnabled(true);
        ClassSearch->setModal(true);
        gridLayout = new QGridLayout(ClassSearch);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(ClassSearch);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_time_2 = new QLabel(groupBox);
        label_time_2->setObjectName(QStringLiteral("label_time_2"));

        horizontalLayout_6->addWidget(label_time_2);

        lineEdit_getTime_2 = new QLineEdit(groupBox);
        lineEdit_getTime_2->setObjectName(QStringLiteral("lineEdit_getTime_2"));

        horizontalLayout_6->addWidget(lineEdit_getTime_2);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_getClass_2 = new QLabel(groupBox);
        label_getClass_2->setObjectName(QStringLiteral("label_getClass_2"));

        horizontalLayout_5->addWidget(label_getClass_2);

        lineEdit_getClass_2 = new QLineEdit(groupBox);
        lineEdit_getClass_2->setObjectName(QStringLiteral("lineEdit_getClass_2"));

        horizontalLayout_5->addWidget(lineEdit_getClass_2);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_5);

        label_days = new QLabel(groupBox);
        label_days->setObjectName(QStringLiteral("label_days"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_days);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        checkBox_MWF = new QCheckBox(groupBox);
        checkBox_MWF->setObjectName(QStringLiteral("checkBox_MWF"));

        horizontalLayout_4->addWidget(checkBox_MWF);

        checkBox_TTH = new QCheckBox(groupBox);
        checkBox_TTH->setObjectName(QStringLiteral("checkBox_TTH"));

        horizontalLayout_4->addWidget(checkBox_TTH);


        formLayout->setLayout(3, QFormLayout::LabelRole, horizontalLayout_4);

        pushButton_filter = new QPushButton(groupBox);
        pushButton_filter->setObjectName(QStringLiteral("pushButton_filter"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, pushButton_filter);

        pushButton_return = new QPushButton(groupBox);
        pushButton_return->setObjectName(QStringLiteral("pushButton_return"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_return->sizePolicy().hasHeightForWidth());
        pushButton_return->setSizePolicy(sizePolicy1);

        formLayout->setWidget(5, QFormLayout::SpanningRole, pushButton_return);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        listView = new QListView(ClassSearch);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView, 0, 1, 1, 1);

        pushButton_addClass = new QPushButton(ClassSearch);
        pushButton_addClass->setObjectName(QStringLiteral("pushButton_addClass"));

        gridLayout->addWidget(pushButton_addClass, 1, 1, 1, 1);


        retranslateUi(ClassSearch);

        QMetaObject::connectSlotsByName(ClassSearch);
    } // setupUi

    void retranslateUi(QDialog *ClassSearch)
    {
        ClassSearch->setWindowTitle(QApplication::translate("ClassSearch", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("ClassSearch", "Filters", 0));
        label_time_2->setText(QApplication::translate("ClassSearch", "Enter Time:", 0));
        label_getClass_2->setText(QApplication::translate("ClassSearch", "<html><head/><body><p>Enter Class:</p></body></html>", 0));
        label_days->setText(QApplication::translate("ClassSearch", "Select Days:", 0));
        checkBox_MWF->setText(QApplication::translate("ClassSearch", "MWF", 0));
        checkBox_TTH->setText(QApplication::translate("ClassSearch", "TTH", 0));
        pushButton_filter->setText(QApplication::translate("ClassSearch", "Filter", 0));
        pushButton_return->setText(QApplication::translate("ClassSearch", "Return to Menu", 0));
        pushButton_addClass->setText(QApplication::translate("ClassSearch", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class ClassSearch: public Ui_ClassSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSSEARCH_H
