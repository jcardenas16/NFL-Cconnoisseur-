/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout;
    QPushButton *buildTripButton;
    QPushButton *navigationButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *adminButton;
    QPushButton *navigationButtonTwo;
    QStackedWidget *mainStackedWidget;
    QWidget *mainDirectory;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *teamHelmetsGridLayout;
    QWidget *teamInfo;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *ConfFilterComboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *DivFilterComboBox;
    QTableView *teamListTableView;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTableView *teamInfoTableView;
    QWidget *stadiumInfo;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout;
    QLabel *roofTypeLabel;
    QComboBox *roofTypeComboBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_5;
    QLabel *TotalSeatingCapacityLabel;
    QTableView *stadiumListTable;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_8;
    QLabel *stadiumLabel;
    QTableView *stadiumInfoTable;
    QWidget *admin_log_in_Page;
    QHBoxLayout *horizontalLayout_12;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *Page_Title;
    QPushButton *Log_In_Button;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *username_Title;
    QLineEdit *UserName_Input_QLineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *Password_Title;
    QLineEdit *Password_Input_QLineEdit;
    QWidget *build_trip_window;
    QGridLayout *gridLayout_3;
    QPushButton *bfsButton;
    QLabel *teamPicLabel;
    QTableView *teamSelectTable;
    QComboBox *selectTeamComboBox;
    QLabel *startingTeamLabel;
    QLabel *tripTraversalTypeLabel;
    QComboBox *tripTraversalTypeComboBox;
    QPushButton *mstButton;
    QPushButton *executeTripButton;
    QPushButton *dfsButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1114, 654);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("#centralWidget{\n"
"background-image: url(:/Pictures/mainWindow_bkg.png);\n"
" }\n"
"\n"
""));
        verticalLayout_10 = new QVBoxLayout(centralWidget);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buildTripButton = new QPushButton(centralWidget);
        buildTripButton->setObjectName(QStringLiteral("buildTripButton"));
        buildTripButton->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"\n"
"\n"
"#buildTripButton:hover\n"
"{\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"font-style: bold;\n"
"color: Blue;\n"
"\n"
"padding:3;\n"
"    margin:3;\n"
"}\n"
"\n"
"\n"
"#buildTripButton:hover:pressed\n"
"{\n"
"  /*border: 2px solid #ffd700;*/\n"
"\n"
"color: #ffd700;\n"
"}\n"
""));

        gridLayout->addWidget(buildTripButton, 0, 0, 1, 1);

        navigationButton = new QPushButton(centralWidget);
        navigationButton->setObjectName(QStringLiteral("navigationButton"));
        navigationButton->setStyleSheet(QLatin1String("\n"
"\n"
"#navigationButton:hover\n"
"{\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"font-style: bold;\n"
"color: Blue;\n"
"\n"
"padding:3;\n"
"    margin:3;\n"
"}\n"
"\n"
"\n"
"#navigationButton:hover:pressed\n"
"{\n"
"  /*border: 2px solid #ffd700;*/\n"
"\n"
"color: #ffd700;\n"
"}"));

        gridLayout->addWidget(navigationButton, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(588, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        adminButton = new QPushButton(centralWidget);
        adminButton->setObjectName(QStringLiteral("adminButton"));
        adminButton->setStyleSheet(QLatin1String("\n"
"#adminButton:hover\n"
"{\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"font-style: bold;\n"
"color: Blue;\n"
"\n"
"padding:3;\n"
"    margin:3;\n"
"}\n"
"\n"
"\n"
"#adminButton:hover:pressed\n"
"{\n"
"  /*border: 2px solid #ffd700;*/\n"
"\n"
"color: #ffd700;\n"
"}"));

        gridLayout->addWidget(adminButton, 0, 1, 1, 1);

        navigationButtonTwo = new QPushButton(centralWidget);
        navigationButtonTwo->setObjectName(QStringLiteral("navigationButtonTwo"));
        navigationButtonTwo->setStyleSheet(QLatin1String("\n"
"\n"
"#navigationButtonTwo:hover\n"
"{\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"font-style: bold;\n"
"color: Blue;\n"
"\n"
"padding:3;\n"
"    margin:3;\n"
"}\n"
"\n"
"\n"
"#navigationButtonTwo:hover:pressed\n"
"{\n"
"  /*border: 2px solid #ffd700;*/\n"
"\n"
"color: #ffd700;\n"
"}"));

        gridLayout->addWidget(navigationButtonTwo, 0, 3, 1, 1);


        verticalLayout_9->addLayout(gridLayout);

        mainStackedWidget = new QStackedWidget(centralWidget);
        mainStackedWidget->setObjectName(QStringLiteral("mainStackedWidget"));
        mainStackedWidget->setStyleSheet(QLatin1String(".QPushButton\n"
"{\n"
"    padding-top: 5px;\n"
"    padding-right: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 5px;\n"
"    border-radius: 6px;\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: white;\n"
"    font-style: bold;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
".QPushButton:hover\n"
"{\n"
"\n"
"  border: 4px solid white;\n"
"\n"
"\n"
"font-size: 20px;\n"
"font-style: bold;\n"
"\n"
"\n"
"padding:3;\n"
"    margin:3;\n"
"}\n"
"\n"
"\n"
".QPushButton:hover:pressed\n"
"{\n"
"  border: 3px solid #ffd700;\n"
"}\n"
"\n"
".QLineEdits\n"
"{\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: blue;\n"
"    background-color: yellow;\n"
"    selection-color: yellow;\n"
"    selection-background-color: blue;\n"
"}"));
        mainDirectory = new QWidget();
        mainDirectory->setObjectName(QStringLiteral("mainDirectory"));
        verticalLayout_5 = new QVBoxLayout(mainDirectory);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        teamHelmetsGridLayout = new QGridLayout();
        teamHelmetsGridLayout->setSpacing(6);
        teamHelmetsGridLayout->setObjectName(QStringLiteral("teamHelmetsGridLayout"));

        verticalLayout_5->addLayout(teamHelmetsGridLayout);

        mainStackedWidget->addWidget(mainDirectory);
        teamInfo = new QWidget();
        teamInfo->setObjectName(QStringLiteral("teamInfo"));
        horizontalLayout_7 = new QHBoxLayout(teamInfo);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        widget = new QWidget(teamInfo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(91, 20));

        horizontalLayout_2->addWidget(label);

        ConfFilterComboBox = new QComboBox(widget);
        ConfFilterComboBox->setObjectName(QStringLiteral("ConfFilterComboBox"));

        horizontalLayout_2->addWidget(ConfFilterComboBox);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(71, 16));

        horizontalLayout_3->addWidget(label_2);

        DivFilterComboBox = new QComboBox(widget);
        DivFilterComboBox->setObjectName(QStringLiteral("DivFilterComboBox"));
        DivFilterComboBox->setMaximumSize(QSize(120, 22));

        horizontalLayout_3->addWidget(DivFilterComboBox);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        teamListTableView = new QTableView(widget);
        teamListTableView->setObjectName(QStringLiteral("teamListTableView"));
        teamListTableView->setStyleSheet(QLatin1String("#teamListTableView\n"
"{\n"
"	padding-top: 5px;\n"
"	padding-right: 5px;\n"
"	padding-bottom: 5px;\n"
"	padding-left: 5px;\n"
"	border-radius: 6px;\n"
"	background:rgba(0,0,0,0.5);\n"
"	color: white;\n"
"	font-style: bold;\n"
"	font-size: 15px;\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"#teamListTableView:hover\n"
"{\n"
"\n"
"font-size: 22px;\n"
"}\n"
""));
        teamListTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        teamListTableView->setSortingEnabled(true);

        verticalLayout->addWidget(teamListTableView);


        verticalLayout_6->addLayout(verticalLayout);


        horizontalLayout_6->addWidget(widget);

        widget_3 = new QWidget(teamInfo);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMaximumSize(QSize(351, 16777215));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(201, 141));
        label_3->setMaximumSize(QSize(201, 141));

        verticalLayout_2->addWidget(label_3);

        teamInfoTableView = new QTableView(widget_3);
        teamInfoTableView->setObjectName(QStringLiteral("teamInfoTableView"));
        teamInfoTableView->setMaximumSize(QSize(16777215, 221));
        teamInfoTableView->setStyleSheet(QLatin1String("#teamInfoTableView\n"
"{\n"
"\n"
"	background:rgba(0,0,0,0.5);\n"
"	color: white;\n"
"	font-style: bold;\n"
"	font-size: 15px;\n"
"\n"
"\n"
"}"));
        teamInfoTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        teamInfoTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        teamInfoTableView->setShowGrid(false);
        teamInfoTableView->horizontalHeader()->setVisible(false);
        teamInfoTableView->horizontalHeader()->setHighlightSections(false);
        teamInfoTableView->verticalHeader()->setVisible(false);
        teamInfoTableView->verticalHeader()->setHighlightSections(false);

        verticalLayout_2->addWidget(teamInfoTableView);


        horizontalLayout_5->addLayout(verticalLayout_2);


        horizontalLayout_6->addWidget(widget_3);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        mainStackedWidget->addWidget(teamInfo);
        stadiumInfo = new QWidget();
        stadiumInfo->setObjectName(QStringLiteral("stadiumInfo"));
        horizontalLayout_17 = new QHBoxLayout(stadiumInfo);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        roofTypeLabel = new QLabel(stadiumInfo);
        roofTypeLabel->setObjectName(QStringLiteral("roofTypeLabel"));
        roofTypeLabel->setMaximumSize(QSize(61, 18));

        horizontalLayout->addWidget(roofTypeLabel);

        roofTypeComboBox = new QComboBox(stadiumInfo);
        roofTypeComboBox->addItem(QString());
        roofTypeComboBox->addItem(QString());
        roofTypeComboBox->addItem(QString());
        roofTypeComboBox->addItem(QString());
        roofTypeComboBox->setObjectName(QStringLiteral("roofTypeComboBox"));
        roofTypeComboBox->setMaximumSize(QSize(111, 20));

        horizontalLayout->addWidget(roofTypeComboBox);


        horizontalLayout_14->addLayout(horizontalLayout);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_5 = new QLabel(stadiumInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(121, 20));

        horizontalLayout_13->addWidget(label_5);

        TotalSeatingCapacityLabel = new QLabel(stadiumInfo);
        TotalSeatingCapacityLabel->setObjectName(QStringLiteral("TotalSeatingCapacityLabel"));
        TotalSeatingCapacityLabel->setMaximumSize(QSize(111, 16));

        horizontalLayout_13->addWidget(TotalSeatingCapacityLabel);


        horizontalLayout_14->addLayout(horizontalLayout_13);


        verticalLayout_7->addLayout(horizontalLayout_14);

        stadiumListTable = new QTableView(stadiumInfo);
        stadiumListTable->setObjectName(QStringLiteral("stadiumListTable"));
        stadiumListTable->setStyleSheet(QLatin1String("#stadiumListTable\n"
"{\n"
"	padding-top: 5px;\n"
"	padding-right: 5px;\n"
"	padding-bottom: 5px;\n"
"	padding-left: 5px;\n"
"	border-radius: 6px;\n"
"	background:rgba(0,0,0,0.5);\n"
"	color: white;\n"
"	font-style: bold;\n"
"	font-size: 15px;\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"#stadiumListTable:hover\n"
"{\n"
"\n"
"font-size: 22px;\n"
"}\n"
""));
        stadiumListTable->setSortingEnabled(true);

        verticalLayout_7->addWidget(stadiumListTable);


        horizontalLayout_16->addLayout(verticalLayout_7);

        groupBox = new QGroupBox(stadiumInfo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(411, 16777215));
        horizontalLayout_15 = new QHBoxLayout(groupBox);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        stadiumLabel = new QLabel(groupBox);
        stadiumLabel->setObjectName(QStringLiteral("stadiumLabel"));
        stadiumLabel->setMinimumSize(QSize(151, 131));
        stadiumLabel->setMaximumSize(QSize(151, 131));

        verticalLayout_8->addWidget(stadiumLabel);

        stadiumInfoTable = new QTableView(groupBox);
        stadiumInfoTable->setObjectName(QStringLiteral("stadiumInfoTable"));
        stadiumInfoTable->setMaximumSize(QSize(391, 291));
        stadiumInfoTable->setStyleSheet(QLatin1String("#stadiumInfoTable\n"
"{\n"
"	/*padding-top: 5px;\n"
"	padding-right: 5px;\n"
"	padding-bottom: 5px;\n"
"	padding-left: 5px;\n"
"	border-radius: 6px; */\n"
"	background:rgba(0,0,0,0.5);\n"
"	color: white;\n"
"	font-style: bold;\n"
"	font-size: 15px;\n"
"\n"
"\n"
"}\n"
"\n"
""));
        stadiumInfoTable->setGridStyle(Qt::NoPen);
        stadiumInfoTable->setWordWrap(true);
        stadiumInfoTable->horizontalHeader()->setVisible(false);
        stadiumInfoTable->verticalHeader()->setVisible(false);

        verticalLayout_8->addWidget(stadiumInfoTable);


        horizontalLayout_15->addLayout(verticalLayout_8);


        horizontalLayout_16->addWidget(groupBox);


        horizontalLayout_17->addLayout(horizontalLayout_16);

        mainStackedWidget->addWidget(stadiumInfo);
        admin_log_in_Page = new QWidget();
        admin_log_in_Page->setObjectName(QStringLiteral("admin_log_in_Page"));
        horizontalLayout_12 = new QHBoxLayout(admin_log_in_Page);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        widget_2 = new QWidget(admin_log_in_Page);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(550, 200));
        widget_2->setMaximumSize(QSize(541, 161));
        horizontalLayout_11 = new QHBoxLayout(widget_2);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        Page_Title = new QLabel(widget_2);
        Page_Title->setObjectName(QStringLiteral("Page_Title"));
        Page_Title->setMinimumSize(QSize(241, 41));
        Page_Title->setMaximumSize(QSize(241, 41));
        Page_Title->setStyleSheet(QLatin1String("text-decoration: underline;\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"font: 28pt \"MS Shell Dlg 2\";\n"
"color: white;\n"
"\n"
"\n"
""));

        horizontalLayout_10->addWidget(Page_Title);

        Log_In_Button = new QPushButton(widget_2);
        Log_In_Button->setObjectName(QStringLiteral("Log_In_Button"));
        Log_In_Button->setMinimumSize(QSize(131, 41));
        Log_In_Button->setMaximumSize(QSize(131, 41));

        horizontalLayout_10->addWidget(Log_In_Button);


        verticalLayout_4->addLayout(horizontalLayout_10);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        username_Title = new QLabel(widget_2);
        username_Title->setObjectName(QStringLiteral("username_Title"));
        username_Title->setMinimumSize(QSize(235, 45));
        username_Title->setMaximumSize(QSize(235, 45));
        username_Title->setStyleSheet(QLatin1String("font: 28pt \"MS Shell Dlg 2\";\n"
"color: white;"));

        horizontalLayout_8->addWidget(username_Title);

        UserName_Input_QLineEdit = new QLineEdit(widget_2);
        UserName_Input_QLineEdit->setObjectName(QStringLiteral("UserName_Input_QLineEdit"));
        UserName_Input_QLineEdit->setMinimumSize(QSize(291, 51));
        UserName_Input_QLineEdit->setMaximumSize(QSize(291, 51));
        UserName_Input_QLineEdit->setStyleSheet(QLatin1String("\n"
"\n"
"font: 28pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        UserName_Input_QLineEdit->setMaxLength(10);

        horizontalLayout_8->addWidget(UserName_Input_QLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        Password_Title = new QLabel(widget_2);
        Password_Title->setObjectName(QStringLiteral("Password_Title"));
        Password_Title->setMinimumSize(QSize(235, 45));
        Password_Title->setMaximumSize(QSize(235, 45));
        Password_Title->setStyleSheet(QLatin1String("font: 28pt \"MS Shell Dlg 2\";\n"
"color: white;"));

        horizontalLayout_9->addWidget(Password_Title);

        Password_Input_QLineEdit = new QLineEdit(widget_2);
        Password_Input_QLineEdit->setObjectName(QStringLiteral("Password_Input_QLineEdit"));
        Password_Input_QLineEdit->setMinimumSize(QSize(291, 51));
        Password_Input_QLineEdit->setMaximumSize(QSize(291, 51));
        Password_Input_QLineEdit->setStyleSheet(QLatin1String("\n"
"font: 28pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/* \n"
"background:rgba(0,0,0,0.5);\n"
"*/"));
        Password_Input_QLineEdit->setMaxLength(10);
        Password_Input_QLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_9->addWidget(Password_Input_QLineEdit);


        verticalLayout_3->addLayout(horizontalLayout_9);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_11->addLayout(verticalLayout_4);


        horizontalLayout_12->addWidget(widget_2);

        mainStackedWidget->addWidget(admin_log_in_Page);
        build_trip_window = new QWidget();
        build_trip_window->setObjectName(QStringLiteral("build_trip_window"));
        gridLayout_3 = new QGridLayout(build_trip_window);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        bfsButton = new QPushButton(build_trip_window);
        bfsButton->setObjectName(QStringLiteral("bfsButton"));
        bfsButton->setStyleSheet(QLatin1String("#bfsButton\n"
"{\n"
"    padding-top: 5px;\n"
"    padding-right: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 5px;\n"
"    border-radius: 6px;\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: white;\n"
"    font-style: bold;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"#bfsButton:hover\n"
"{\n"
"\n"
" padding-top: .2px;\n"
"    padding-right: .2px;\n"
"    padding-bottom: .2px;\n"
"    padding-left: .2px;\n"
"    border-radius: 6px;\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: white;\n"
"    font-style: bold;\n"
"    font-size: 15px;\n"
"}\n"
""));

        gridLayout_3->addWidget(bfsButton, 1, 2, 1, 1);

        teamPicLabel = new QLabel(build_trip_window);
        teamPicLabel->setObjectName(QStringLiteral("teamPicLabel"));
        teamPicLabel->setStyleSheet(QLatin1String(".QPushButton\n"
"{\n"
"    padding-top: 5px;\n"
"    padding-right: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 5px;\n"
"    border-radius: 6px;\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: white;\n"
"    font-style: bold;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
".QPushButton:hover\n"
"{\n"
"\n"
"  border: 4px solid white;\n"
"\n"
"\n"
"font-size: 20px;\n"
"font-style: bold;\n"
"\n"
"\n"
"padding:3;\n"
"    margin:3;\n"
"}\n"
"\n"
"\n"
".QLineEdits\n"
"{\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: blue;\n"
"    background-color: yellow;\n"
"    selection-color: yellow;\n"
"    selection-background-color: blue;\n"
"}\n"
"\n"
"\n"
"/*\n"
"\n"
"#pb_NextCity\n"
"{\n"
"\n"
"#60FE27\n"
"\n"
"\n"
"}*/"));

        gridLayout_3->addWidget(teamPicLabel, 2, 4, 1, 1);

        teamSelectTable = new QTableView(build_trip_window);
        teamSelectTable->setObjectName(QStringLiteral("teamSelectTable"));
        teamSelectTable->setStyleSheet(QLatin1String("#teamSelectTable\n"
"{\n"
"\n"
"	background:rgba(0,0,0,0.5);\n"
"	color: white;\n"
"	font-style: bold;\n"
"	font-size: 15px;\n"
"\n"
"\n"
"}"));

        gridLayout_3->addWidget(teamSelectTable, 2, 0, 2, 4);

        selectTeamComboBox = new QComboBox(build_trip_window);
        selectTeamComboBox->setObjectName(QStringLiteral("selectTeamComboBox"));

        gridLayout_3->addWidget(selectTeamComboBox, 0, 4, 1, 1);

        startingTeamLabel = new QLabel(build_trip_window);
        startingTeamLabel->setObjectName(QStringLiteral("startingTeamLabel"));

        gridLayout_3->addWidget(startingTeamLabel, 1, 4, 1, 1);

        tripTraversalTypeLabel = new QLabel(build_trip_window);
        tripTraversalTypeLabel->setObjectName(QStringLiteral("tripTraversalTypeLabel"));

        gridLayout_3->addWidget(tripTraversalTypeLabel, 0, 0, 1, 1);

        tripTraversalTypeComboBox = new QComboBox(build_trip_window);
        tripTraversalTypeComboBox->addItem(QString());
        tripTraversalTypeComboBox->addItem(QString());
        tripTraversalTypeComboBox->addItem(QString());
        tripTraversalTypeComboBox->setObjectName(QStringLiteral("tripTraversalTypeComboBox"));

        gridLayout_3->addWidget(tripTraversalTypeComboBox, 1, 0, 1, 1);

        mstButton = new QPushButton(build_trip_window);
        mstButton->setObjectName(QStringLiteral("mstButton"));
        mstButton->setStyleSheet(QLatin1String("#mstButton\n"
"{\n"
"    padding-top: 5px;\n"
"    padding-right: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 5px;\n"
"    border-radius: 6px;\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: white;\n"
"    font-style: bold;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"#mstButton:hover\n"
"{\n"
"\n"
" padding-top: .2px;\n"
"    padding-right: .2px;\n"
"    padding-bottom: .2px;\n"
"    padding-left: .2px;\n"
"    border-radius: 6px;\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: white;\n"
"    font-style: bold;\n"
"    font-size: 15px;\n"
"}\n"
""));

        gridLayout_3->addWidget(mstButton, 1, 3, 1, 1);

        executeTripButton = new QPushButton(build_trip_window);
        executeTripButton->setObjectName(QStringLiteral("executeTripButton"));
        executeTripButton->setStyleSheet(QLatin1String("#executeTripButton\n"
"{\n"
"    padding-top: 5px;\n"
"    padding-right: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 5px;\n"
"    border-radius: 6px;\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: white;\n"
"    font-style: bold;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"#executeTripButton:hover\n"
"{\n"
"\n"
" padding-top: .2px;\n"
"    padding-right: .2px;\n"
"    padding-bottom: .2px;\n"
"    padding-left: .2px;\n"
"    border-radius: 6px;\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: white;\n"
"    font-style: bold;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"#executeTripButton:hover:pressed\n"
"{\n"
"  border: 3px solid green;\n"
"}\n"
"\n"
""));

        gridLayout_3->addWidget(executeTripButton, 3, 4, 1, 1);

        dfsButton = new QPushButton(build_trip_window);
        dfsButton->setObjectName(QStringLiteral("dfsButton"));
        dfsButton->setStyleSheet(QLatin1String("#dfsButton\n"
"{\n"
"    padding-top: 5px;\n"
"    padding-right: 5px;\n"
"    padding-bottom: 5px;\n"
"    padding-left: 5px;\n"
"    border-radius: 6px;\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: white;\n"
"    font-style: bold;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"#dfsButton:hover\n"
"{\n"
"\n"
" padding-top: .2px;\n"
"    padding-right: .2px;\n"
"    padding-bottom: .2px;\n"
"    padding-left: .2px;\n"
"    border-radius: 6px;\n"
"    background:rgba(0,0,0,0.5);\n"
"    color: white;\n"
"    font-style: bold;\n"
"    font-size: 15px;\n"
"}\n"
""));

        gridLayout_3->addWidget(dfsButton, 1, 1, 1, 1);

        mainStackedWidget->addWidget(build_trip_window);

        verticalLayout_9->addWidget(mainStackedWidget);


        verticalLayout_10->addLayout(verticalLayout_9);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1114, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        mainStackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Let's Play NFL", nullptr));
        buildTripButton->setText(QApplication::translate("MainWindow", "Build Trip", nullptr));
        navigationButton->setText(QApplication::translate("MainWindow", "Navigation", nullptr));
        adminButton->setText(QApplication::translate("MainWindow", "Admin", nullptr));
        navigationButtonTwo->setText(QApplication::translate("MainWindow", "Navigation", nullptr));
        label->setText(QApplication::translate("MainWindow", "Conference Filter", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Division Filter", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "TEAM LOGO", nullptr));
        roofTypeLabel->setText(QApplication::translate("MainWindow", "Roof type", nullptr));
        roofTypeComboBox->setItemText(0, QApplication::translate("MainWindow", "All", nullptr));
        roofTypeComboBox->setItemText(1, QApplication::translate("MainWindow", "Open", nullptr));
        roofTypeComboBox->setItemText(2, QApplication::translate("MainWindow", "Retractable", nullptr));
        roofTypeComboBox->setItemText(3, QApplication::translate("MainWindow", "Fixed", nullptr));

        label_5->setText(QApplication::translate("MainWindow", "Total Seating Capacity:", nullptr));
        TotalSeatingCapacityLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox->setTitle(QString());
        stadiumLabel->setText(QApplication::translate("MainWindow", "Stadium Logo", nullptr));
        Page_Title->setText(QApplication::translate("MainWindow", "ADMIN LOGIN", nullptr));
        Log_In_Button->setText(QApplication::translate("MainWindow", "LOG-IN", nullptr));
        username_Title->setText(QApplication::translate("MainWindow", "USERNAME :", nullptr));
        Password_Title->setText(QApplication::translate("MainWindow", "PASSWORD :", nullptr));
        bfsButton->setText(QApplication::translate("MainWindow", "BFS", nullptr));
        teamPicLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        startingTeamLabel->setText(QApplication::translate("MainWindow", "Starting Team", nullptr));
        tripTraversalTypeLabel->setText(QApplication::translate("MainWindow", "Trip Type", nullptr));
        tripTraversalTypeComboBox->setItemText(0, QApplication::translate("MainWindow", "(1) Most Effecient", nullptr));
        tripTraversalTypeComboBox->setItemText(1, QApplication::translate("MainWindow", "(2) Custom Order", nullptr));
        tripTraversalTypeComboBox->setItemText(2, QApplication::translate("MainWindow", "(3) Next Shortest Path", nullptr));

        mstButton->setText(QApplication::translate("MainWindow", "MST", nullptr));
        executeTripButton->setText(QApplication::translate("MainWindow", "Execute Trip", nullptr));
        dfsButton->setText(QApplication::translate("MainWindow", "DFS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
