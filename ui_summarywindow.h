/********************************************************************************
** Form generated from reading UI file 'summarywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUMMARYWINDOW_H
#define UI_SUMMARYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SummaryWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *SummaryWindow)
    {
        if (SummaryWindow->objectName().isEmpty())
            SummaryWindow->setObjectName(QStringLiteral("SummaryWindow"));
        SummaryWindow->resize(1192, 680);
        verticalLayout_2 = new QVBoxLayout(SummaryWindow);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(SummaryWindow);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(SummaryWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SummaryWindow);

        QMetaObject::connectSlotsByName(SummaryWindow);
    } // setupUi

    void retranslateUi(QDialog *SummaryWindow)
    {
        SummaryWindow->setWindowTitle(QApplication::translate("SummaryWindow", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("SummaryWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SummaryWindow: public Ui_SummaryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUMMARYWINDOW_H
