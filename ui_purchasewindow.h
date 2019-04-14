/********************************************************************************
** Form generated from reading UI file 'purchasewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEWINDOW_H
#define UI_PURCHASEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PurchaseWindow
{
public:
    QHBoxLayout *horizontalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *purchaseSouvenirs;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *teamNameLabel;
    QLabel *teamLogo;
    QTableView *souvenirTableView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *navButton;
    QWidget *summary;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QTableView *summaryTableView;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLabel *totalPurchaseLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLabel *totalDistanceLabel;

    void setupUi(QDialog *PurchaseWindow)
    {
        if (PurchaseWindow->objectName().isEmpty())
            PurchaseWindow->setObjectName(QStringLiteral("PurchaseWindow"));
        PurchaseWindow->resize(827, 628);
        PurchaseWindow->setStyleSheet(QLatin1String("#PurchaseWindow\n"
"{\n"
"\n"
"background-image: url(:/Pictures/purchaseWindow6.jpeg) ;\n"
"\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(PurchaseWindow);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        stackedWidget = new QStackedWidget(PurchaseWindow);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        purchaseSouvenirs = new QWidget();
        purchaseSouvenirs->setObjectName(QStringLiteral("purchaseSouvenirs"));
        horizontalLayout_5 = new QHBoxLayout(purchaseSouvenirs);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(purchaseSouvenirs);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(91, 20));

        horizontalLayout->addWidget(label);

        teamNameLabel = new QLabel(purchaseSouvenirs);
        teamNameLabel->setObjectName(QStringLiteral("teamNameLabel"));
        teamNameLabel->setMinimumSize(QSize(271, 20));
        teamNameLabel->setMaximumSize(QSize(271, 20));

        horizontalLayout->addWidget(teamNameLabel);


        verticalLayout->addLayout(horizontalLayout);

        teamLogo = new QLabel(purchaseSouvenirs);
        teamLogo->setObjectName(QStringLiteral("teamLogo"));

        verticalLayout->addWidget(teamLogo);


        horizontalLayout_3->addLayout(verticalLayout);

        souvenirTableView = new QTableView(purchaseSouvenirs);
        souvenirTableView->setObjectName(QStringLiteral("souvenirTableView"));
        souvenirTableView->setStyleSheet(QLatin1String("#souvenirTableView\n"
"{\n"
"\n"
"\n"
"color: white;\n"
"\n"
"  background:rgba(0,0,0,0.3);\n"
"\n"
"\n"
"}"));

        horizontalLayout_3->addWidget(souvenirTableView);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        navButton = new QPushButton(purchaseSouvenirs);
        navButton->setObjectName(QStringLiteral("navButton"));
        navButton->setMaximumSize(QSize(131, 31));

        horizontalLayout_2->addWidget(navButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_2);

        stackedWidget->addWidget(purchaseSouvenirs);
        summary = new QWidget();
        summary->setObjectName(QStringLiteral("summary"));
        horizontalLayout_9 = new QHBoxLayout(summary);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        summaryTableView = new QTableView(summary);
        summaryTableView->setObjectName(QStringLiteral("summaryTableView"));
        summaryTableView->setStyleSheet(QLatin1String("#summaryTableView{\n"
"\n"
"color: white;\n"
"\n"
"  background:rgba(0,0,0,0.3);\n"
"\n"
"\n"
"}"));

        verticalLayout_3->addWidget(summaryTableView);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(summary);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(91, 16));
        label_2->setMaximumSize(QSize(91, 16));

        horizontalLayout_7->addWidget(label_2);

        totalPurchaseLabel = new QLabel(summary);
        totalPurchaseLabel->setObjectName(QStringLiteral("totalPurchaseLabel"));
        totalPurchaseLabel->setMinimumSize(QSize(111, 16));
        totalPurchaseLabel->setMaximumSize(QSize(111, 16));

        horizontalLayout_7->addWidget(totalPurchaseLabel);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(summary);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(121, 16));
        label_4->setMaximumSize(QSize(121, 16));

        horizontalLayout_6->addWidget(label_4);

        totalDistanceLabel = new QLabel(summary);
        totalDistanceLabel->setObjectName(QStringLiteral("totalDistanceLabel"));
        totalDistanceLabel->setMinimumSize(QSize(111, 16));
        totalDistanceLabel->setMaximumSize(QSize(111, 16));

        horizontalLayout_6->addWidget(totalDistanceLabel);


        horizontalLayout_8->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_3);

        stackedWidget->addWidget(summary);

        horizontalLayout_4->addWidget(stackedWidget);


        retranslateUi(PurchaseWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PurchaseWindow);
    } // setupUi

    void retranslateUi(QDialog *PurchaseWindow)
    {
        PurchaseWindow->setWindowTitle(QApplication::translate("PurchaseWindow", "Purchase Souvenirs", nullptr));
        label->setText(QApplication::translate("PurchaseWindow", "Team Name:", nullptr));
        teamNameLabel->setText(QApplication::translate("PurchaseWindow", "TextLabel", nullptr));
        teamLogo->setText(QApplication::translate("PurchaseWindow", "TextLabel", nullptr));
        navButton->setText(QApplication::translate("PurchaseWindow", "PushButton", nullptr));
        label_2->setText(QApplication::translate("PurchaseWindow", "Total Purchases:", nullptr));
        totalPurchaseLabel->setText(QApplication::translate("PurchaseWindow", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("PurchaseWindow", "Total Distance Traveled:", nullptr));
        totalDistanceLabel->setText(QApplication::translate("PurchaseWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PurchaseWindow: public Ui_PurchaseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASEWINDOW_H
