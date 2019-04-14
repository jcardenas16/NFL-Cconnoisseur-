/********************************************************************************
** Form generated from reading UI file 'traversalsummarywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAVERSALSUMMARYWINDOW_H
#define UI_TRAVERSALSUMMARYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TraversalSummaryWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *TitleLabel;
    QTableView *tableView;

    void setupUi(QDialog *TraversalSummaryWindow)
    {
        if (TraversalSummaryWindow->objectName().isEmpty())
            TraversalSummaryWindow->setObjectName(QStringLiteral("TraversalSummaryWindow"));
        TraversalSummaryWindow->resize(588, 457);
        TraversalSummaryWindow->setStyleSheet(QLatin1String("#TraversalSummaryWindow\n"
"{\n"
"background-image: url(:/Pictures/summaryDisplay1.png);\n"
"\n"
"\n"
"}"));
        horizontalLayout = new QHBoxLayout(TraversalSummaryWindow);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        TitleLabel = new QLabel(TraversalSummaryWindow);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setWeight(50);
        TitleLabel->setFont(font);
        TitleLabel->setStyleSheet(QLatin1String("#TitleLablel\n"
"{\n"
"color: white;\n"
"\n"
"}\n"
""));
        TitleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(TitleLabel);

        tableView = new QTableView(TraversalSummaryWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QLatin1String("#tableView\n"
"{\n"
"color: white;\n"
"\n"
"  background:rgba(0,0,0,0.3);\n"
"\n"
"\n"
"\n"
"}\n"
""));
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tableView);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(TraversalSummaryWindow);

        QMetaObject::connectSlotsByName(TraversalSummaryWindow);
    } // setupUi

    void retranslateUi(QDialog *TraversalSummaryWindow)
    {
        TraversalSummaryWindow->setWindowTitle(QApplication::translate("TraversalSummaryWindow", "Traversal Summary", nullptr));
        TitleLabel->setText(QApplication::translate("TraversalSummaryWindow", "TraversalType", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TraversalSummaryWindow: public Ui_TraversalSummaryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAVERSALSUMMARYWINDOW_H
