/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminwindow
{
public:
    QWidget *centralwidget;
    QPushButton *Log_Off_Button;
    QStackedWidget *adminstackedWidget;
    QWidget *homePage;
    QLabel *NFL_Logo;
    QPushButton *Add_Team_btn;
    QPushButton *Edit_Souv_btn;
    QPushButton *Edit_Stadium_btn;
    QWidget *Edi_Souv_Page;
    QComboBox *Team_Name_Combo_Box;
    QRadioButton *Edit_Souv_radio_button;
    QRadioButton *Add_Souv_radiobtn;
    QRadioButton *Delete_Souv_radiobtn;
    QPushButton *Continue;
    QLabel *Current_Team_Logo;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *name_title;
    QListWidget *TbleWidget_Souv_Name_Display;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *cost_title;
    QListWidget *TbleWidget_Souv_Price_Display;
    QWidget *Add_Souv_Item;
    QLabel *Current_Team_Logo_2;
    QPushButton *Confirm_Btn;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_8;
    QLabel *Name_Title_2;
    QLineEdit *Souv_Name;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_9;
    QLabel *Cost_Title_2;
    QLineEdit *Souve_Price;
    QWidget *Delte_Souv_Item;
    QLabel *Admin_Page_Title_2;
    QLabel *Current_Team_Logo_3;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_10;
    QLabel *Name_Title_8;
    QListWidget *TbleWidget_Souv_Name_Display_2;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_11;
    QLabel *Name_Title_9;
    QListWidget *TbleWidget_Souv_Price_Display_2;
    QWidget *Edit_Souv_Page_2;
    QLabel *Current_Team_Logo_4;
    QPushButton *Confirm_price_change_btn;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_4;
    QLabel *Name_Title_4;
    QListWidget *TbleWidget_Souv_Name_Display_3;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_5;
    QLabel *Cost_Title_4;
    QListWidget *TbleWidget_Souv_Price_Display_3;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_6;
    QLabel *Name_Title_5;
    QLineEdit *Souv_name_Edit;
    QVBoxLayout *verticalLayout_7;
    QLabel *Name_Title_7;
    QLineEdit *Souv_price_Edit;
    QWidget *Stadium_Modifciation;
    QComboBox *Roof_Type_Combo_Box;
    QLabel *Current_Team_Logo_5;
    QComboBox *Team_Name_Combo_Box_2;
    QLabel *Name_Title_3;
    QLineEdit *Stadium_Name_LineEdit;
    QLabel *Name_Title_6;
    QLabel *Name_Title_10;
    QLineEdit *Seating_Capacity_LineEdit;
    QLabel *Name_Title_11;
    QLabel *Name_Title_12;
    QPushButton *Continue_Btn;
    QLineEdit *Stadium_Name_LineEdit_2;
    QLabel *Name_Title_13;
    QComboBox *Surface_Type_Combo_Box;
    QLineEdit *Location_LineEdit;
    QPushButton *Home_Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName(QStringLiteral("adminwindow"));
        adminwindow->resize(920, 593);
        adminwindow->setStyleSheet(QLatin1String("QMessageBox {\n"
"    background-color: rgb(51, 51, 51);\n"
"}\n"
".QLabel \n"
"{\n"
"color:white;\n"
"}"));
        centralwidget = new QWidget(adminwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"\n"
"\n"
"\n"
"background-image: url(:/Pictures/admin4.jpg);\n"
"\n"
"min-height: 100;\n"
"\n"
"background-repeat: no-repeat;\n"
"\n"
"/*\n"
"background-image: url(:/resources/img/main_window_backgroudn.jpg);\n"
"background-size: 1800px\342\200\2061800px\n"
"\n"
" width: 200px;\n"
"  height: 1800px;\n"
"*/\n"
"background-size: cover;\n"
"\n"
" }\n"
""));
        Log_Off_Button = new QPushButton(centralwidget);
        Log_Off_Button->setObjectName(QStringLiteral("Log_Off_Button"));
        Log_Off_Button->setGeometry(QRect(670, 10, 141, 41));
        Log_Off_Button->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"#Log_Off_Button\n"
"{\n"
"	 padding-top: 5px;\n"
"         padding-right: 5px;\n"
"         padding-bottom: 5px;\n"
"         padding-left: 5px;\n"
"              border: 2px solid #8f8f91;\n"
"        border-radius: 6px;\n"
"background-color: rgb(0,0,0.5);\n"
"color: white;\n"
"font-size: 15px;\n"
"/*border-image: url(:/Pictures/Logout_Pic.png);*/\n"
"/*image: url(:/resources/img/backButton.png);*/\n"
"}\n"
"\n"
"#Log_Off_Button:hover {\n"
"\n"
"\n"
"\n"
"  border: 2px solid red;\n"
"color: red;\n"
"\n"
"\n"
"font-size: 20px;\n"
"font-style: bold;\n"
"/*\n"
"color: white;\n"
" border-radius: 6px;\n"
"*/\n"
"}"));
        adminstackedWidget = new QStackedWidget(centralwidget);
        adminstackedWidget->setObjectName(QStringLiteral("adminstackedWidget"));
        adminstackedWidget->setGeometry(QRect(10, 110, 781, 431));
        adminstackedWidget->setStyleSheet(QLatin1String("\n"
"/*background-color: rgb(0,0,0.5);*/\n"
""));
        homePage = new QWidget();
        homePage->setObjectName(QStringLiteral("homePage"));
        NFL_Logo = new QLabel(homePage);
        NFL_Logo->setObjectName(QStringLiteral("NFL_Logo"));
        NFL_Logo->setGeometry(QRect(400, 30, 231, 341));
        NFL_Logo->setStyleSheet(QStringLiteral("border-image: url(:/Pictures/NFL LOGO.png);"));
        Add_Team_btn = new QPushButton(homePage);
        Add_Team_btn->setObjectName(QStringLiteral("Add_Team_btn"));
        Add_Team_btn->setGeometry(QRect(0, 60, 171, 51));
        Add_Team_btn->setStyleSheet(QLatin1String("#Add_Team_btn\n"
"{\n"
"	 padding-top: 5px;\n"
"         padding-right: 5px;\n"
"         padding-bottom: 5px;\n"
"         padding-left: 5px;\n"
"              border: 2px solid #8f8f91;\n"
"        border-radius: 6px;\n"
"background-color: rgb(0,0,0.5);\n"
"\n"
" /*background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #A3A4A2, stop: 1 #dadbde); */\n"
"\n"
"color: white;\n"
"font-size: 15px;\n"
"\n"
"/*image: url(:/resources/img/backButton.png);*/\n"
"}\n"
"\n"
"#Add_Team_btn:hover {\n"
"\n"
"\n"
"\n"
"  border: 2px solid white;\n"
"\n"
"\n"
"font-size: 20px;\n"
"font-style: bold;\n"
"/*\n"
"color: white;\n"
" border-radius: 6px;\n"
"*/\n"
"}"));
        Edit_Souv_btn = new QPushButton(homePage);
        Edit_Souv_btn->setObjectName(QStringLiteral("Edit_Souv_btn"));
        Edit_Souv_btn->setGeometry(QRect(0, 180, 171, 51));
        Edit_Souv_btn->setStyleSheet(QLatin1String("#Edit_Souv_btn\n"
"{\n"
"	 padding-top: 5px;\n"
"         padding-right: 5px;\n"
"         padding-bottom: 5px;\n"
"         padding-left: 5px;\n"
"              border: 2px solid #8f8f91;\n"
"        border-radius: 6px;\n"
"background-color: rgb(0,0,0.5);\n"
"color: white;\n"
"font-size: 15px;\n"
"\n"
"/*image: url(:/resources/img/backButton.png);*/\n"
"}\n"
"\n"
"#Edit_Souv_btn:hover {\n"
"\n"
"\n"
"\n"
"  border: 2px solid white;\n"
"\n"
"\n"
"font-size: 20px;\n"
"font-style: bold;\n"
"/*\n"
"color: white;\n"
" border-radius: 6px;\n"
"*/\n"
"}"));
        Edit_Stadium_btn = new QPushButton(homePage);
        Edit_Stadium_btn->setObjectName(QStringLiteral("Edit_Stadium_btn"));
        Edit_Stadium_btn->setGeometry(QRect(0, 310, 171, 51));
        Edit_Stadium_btn->setStyleSheet(QLatin1String("#Edit_Stadium_btn\n"
"{\n"
"	 padding-top: 5px;\n"
"         padding-right: 5px;\n"
"         padding-bottom: 5px;\n"
"         padding-left: 5px;\n"
"              border: 2px solid #8f8f91;\n"
"        border-radius: 6px;\n"
"background-color: rgb(0,0,0.5);\n"
"color: white;\n"
"font-size: 15px;\n"
"\n"
"/*image: url(:/resources/img/backButton.png);*/\n"
"}\n"
"\n"
"#Edit_Stadium_btn:hover {\n"
"\n"
"\n"
"\n"
"  border: 2px solid white;\n"
"\n"
"\n"
"font-size: 20px;\n"
"font-style: bold;\n"
"/*\n"
"color: white;\n"
" border-radius: 6px;\n"
"*/\n"
"}"));
        adminstackedWidget->addWidget(homePage);
        Edi_Souv_Page = new QWidget();
        Edi_Souv_Page->setObjectName(QStringLiteral("Edi_Souv_Page"));
        Team_Name_Combo_Box = new QComboBox(Edi_Souv_Page);
        Team_Name_Combo_Box->setObjectName(QStringLiteral("Team_Name_Combo_Box"));
        Team_Name_Combo_Box->setGeometry(QRect(10, 10, 191, 31));
        Team_Name_Combo_Box->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"\n"
"#Team_Name_Combo_Box:editable {\n"
"    background: rgb(0,0,0);\n"
"}\n"
"\n"
"\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"#Team_Name_Combo_Box:!editable:on, QComboBox::drop-down:editable:on {\n"
" /*   background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1); */\n"
"\n"
"color: rgb(0,0,0);\n"
"}\n"
"\n"
"#Team_Name_Combo_Box:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"#Team_Name_Combo_Box::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"\n"
""
                        "\n"
"}\n"
"\n"
"\n"
"#Team_Name_Combo_Box::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}"));
        Edit_Souv_radio_button = new QRadioButton(Edi_Souv_Page);
        Edit_Souv_radio_button->setObjectName(QStringLiteral("Edit_Souv_radio_button"));
        Edit_Souv_radio_button->setGeometry(QRect(40, 360, 161, 20));
        Edit_Souv_radio_button->setStyleSheet(QLatin1String("font: 63 16pt \"Segoe UI Semibold\";\n"
"color: rgb(80, 80, 80);"));
        Add_Souv_radiobtn = new QRadioButton(Edi_Souv_Page);
        Add_Souv_radiobtn->setObjectName(QStringLiteral("Add_Souv_radiobtn"));
        Add_Souv_radiobtn->setGeometry(QRect(210, 360, 161, 20));
        Add_Souv_radiobtn->setStyleSheet(QLatin1String("font: 63 16pt \"Segoe UI Semibold\";\n"
"color: rgb(80, 80, 80);"));
        Delete_Souv_radiobtn = new QRadioButton(Edi_Souv_Page);
        Delete_Souv_radiobtn->setObjectName(QStringLiteral("Delete_Souv_radiobtn"));
        Delete_Souv_radiobtn->setGeometry(QRect(380, 360, 181, 20));
        Delete_Souv_radiobtn->setStyleSheet(QLatin1String("font: 63 16pt \"Segoe UI Semibold\";\n"
"color: rgb(80, 80, 80);"));
        Continue = new QPushButton(Edi_Souv_Page);
        Continue->setObjectName(QStringLiteral("Continue"));
        Continue->setGeometry(QRect(570, 340, 121, 41));
        Continue->setStyleSheet(QLatin1String("#Continue\n"
"{\n"
"	 padding-top: 5px;\n"
"         padding-right: 5px;\n"
"         padding-bottom: 5px;\n"
"         padding-left: 5px;\n"
"              border: 2px solid #8f8f91;\n"
"        border-radius: 6px;\n"
"background-color: rgb(0,0,0.5);\n"
"color: white;\n"
"font-size: 15px;\n"
"\n"
"/*image: url(:/resources/img/backButton.png);*/\n"
"}\n"
"\n"
"#Continue:hover {\n"
"\n"
"\n"
"\n"
"  border: 2px solid white;\n"
"\n"
"\n"
"font-size: 20px;\n"
"font-style: bold;\n"
"/*\n"
"color: white;\n"
" border-radius: 6px;\n"
"*/\n"
"}"));
        Current_Team_Logo = new QLabel(Edi_Souv_Page);
        Current_Team_Logo->setObjectName(QStringLiteral("Current_Team_Logo"));
        Current_Team_Logo->setGeometry(QRect(30, 110, 151, 141));
        Current_Team_Logo->setStyleSheet(QStringLiteral(""));
        layoutWidget = new QWidget(Edi_Souv_Page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 70, 258, 238));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        name_title = new QLabel(layoutWidget);
        name_title->setObjectName(QStringLiteral("name_title"));
        name_title->setStyleSheet(QLatin1String("#name_title{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 30px;\n"
"\n"
"}\n"
""));

        verticalLayout->addWidget(name_title);

        TbleWidget_Souv_Name_Display = new QListWidget(layoutWidget);
        TbleWidget_Souv_Name_Display->setObjectName(QStringLiteral("TbleWidget_Souv_Name_Display"));
        TbleWidget_Souv_Name_Display->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"#TbleWidget_Souv_Name_Display{\n"
"background-color:rgba(0,0,0,0);\n"
"\n"
"font-weight: bold;\n"
"\n"
"\n"
"}\n"
"#TbleWidget_Souv_Name_Display:item{\n"
"color: white;\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(TbleWidget_Souv_Name_Display);

        layoutWidget1 = new QWidget(Edi_Souv_Page);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(520, 70, 258, 238));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        cost_title = new QLabel(layoutWidget1);
        cost_title->setObjectName(QStringLiteral("cost_title"));
        cost_title->setStyleSheet(QLatin1String("#cost_title{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 30px;\n"
"\n"
"}\n"
""));

        verticalLayout_2->addWidget(cost_title);

        TbleWidget_Souv_Price_Display = new QListWidget(layoutWidget1);
        TbleWidget_Souv_Price_Display->setObjectName(QStringLiteral("TbleWidget_Souv_Price_Display"));
        TbleWidget_Souv_Price_Display->setStyleSheet(QLatin1String("#TbleWidget_Souv_Price_Display{\n"
"background-color:rgba(0,0,0,0);\n"
"\n"
"font-weight: bold;\n"
"\n"
"\n"
"}\n"
"#TbleWidget_Souv_Price_Display:item{\n"
"color: white;\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_2->addWidget(TbleWidget_Souv_Price_Display);

        adminstackedWidget->addWidget(Edi_Souv_Page);
        Add_Souv_Item = new QWidget();
        Add_Souv_Item->setObjectName(QStringLiteral("Add_Souv_Item"));
        Current_Team_Logo_2 = new QLabel(Add_Souv_Item);
        Current_Team_Logo_2->setObjectName(QStringLiteral("Current_Team_Logo_2"));
        Current_Team_Logo_2->setGeometry(QRect(390, 90, 251, 201));
        Current_Team_Logo_2->setStyleSheet(QStringLiteral(""));
        Confirm_Btn = new QPushButton(Add_Souv_Item);
        Confirm_Btn->setObjectName(QStringLiteral("Confirm_Btn"));
        Confirm_Btn->setGeometry(QRect(530, 340, 161, 51));
        Confirm_Btn->setStyleSheet(QLatin1String("#Confirm_Btn\n"
"{\n"
"	 padding-top: 5px;\n"
"         padding-right: 5px;\n"
"         padding-bottom: 5px;\n"
"         padding-left: 5px;\n"
"              border: 2px solid #8f8f91;\n"
"        border-radius: 6px;\n"
"background-color: rgb(0,0,0.5);\n"
"color: white;\n"
"font-size: 15px;\n"
"\n"
"/*image: url(:/resources/img/backButton.png);*/\n"
"}\n"
"\n"
"#Confirm_Btn:hover {\n"
"\n"
"\n"
"\n"
"  border: 2px solid white;\n"
"\n"
"\n"
"font-size: 20px;\n"
"font-style: bold;\n"
"/*\n"
"color: white;\n"
" border-radius: 6px;\n"
"*/\n"
"}"));
        layoutWidget2 = new QWidget(Add_Souv_Item);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 60, 250, 67));
        verticalLayout_8 = new QVBoxLayout(layoutWidget2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        Name_Title_2 = new QLabel(layoutWidget2);
        Name_Title_2->setObjectName(QStringLiteral("Name_Title_2"));
        Name_Title_2->setStyleSheet(QLatin1String("#Name_Title_2\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 30px;\n"
"\n"
"}\n"
""));

        verticalLayout_8->addWidget(Name_Title_2);

        Souv_Name = new QLineEdit(layoutWidget2);
        Souv_Name->setObjectName(QStringLiteral("Souv_Name"));

        verticalLayout_8->addWidget(Souv_Name);

        layoutWidget3 = new QWidget(Add_Souv_Item);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(60, 160, 238, 67));
        verticalLayout_9 = new QVBoxLayout(layoutWidget3);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        Cost_Title_2 = new QLabel(layoutWidget3);
        Cost_Title_2->setObjectName(QStringLiteral("Cost_Title_2"));
        Cost_Title_2->setStyleSheet(QLatin1String("#Cost_Title_2\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 30px;\n"
"\n"
"}\n"
""));

        verticalLayout_9->addWidget(Cost_Title_2);

        Souve_Price = new QLineEdit(layoutWidget3);
        Souve_Price->setObjectName(QStringLiteral("Souve_Price"));

        verticalLayout_9->addWidget(Souve_Price);

        adminstackedWidget->addWidget(Add_Souv_Item);
        Delte_Souv_Item = new QWidget();
        Delte_Souv_Item->setObjectName(QStringLiteral("Delte_Souv_Item"));
        Admin_Page_Title_2 = new QLabel(Delte_Souv_Item);
        Admin_Page_Title_2->setObjectName(QStringLiteral("Admin_Page_Title_2"));
        Admin_Page_Title_2->setGeometry(QRect(250, 40, 291, 41));
        Admin_Page_Title_2->setStyleSheet(QLatin1String("\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"font: 18pt \"MS Shell Dlg 2\";"));
        Current_Team_Logo_3 = new QLabel(Delte_Souv_Item);
        Current_Team_Logo_3->setObjectName(QStringLiteral("Current_Team_Logo_3"));
        Current_Team_Logo_3->setGeometry(QRect(580, 140, 181, 171));
        Current_Team_Logo_3->setStyleSheet(QStringLiteral(""));
        layoutWidget4 = new QWidget(Delte_Souv_Item);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 100, 258, 238));
        verticalLayout_10 = new QVBoxLayout(layoutWidget4);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        Name_Title_8 = new QLabel(layoutWidget4);
        Name_Title_8->setObjectName(QStringLiteral("Name_Title_8"));
        Name_Title_8->setStyleSheet(QLatin1String("#Name_Title_8\n"
"\n"
"\n"
"\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 30px;\n"
"\n"
"}\n"
""));

        verticalLayout_10->addWidget(Name_Title_8);

        TbleWidget_Souv_Name_Display_2 = new QListWidget(layoutWidget4);
        TbleWidget_Souv_Name_Display_2->setObjectName(QStringLiteral("TbleWidget_Souv_Name_Display_2"));
        TbleWidget_Souv_Name_Display_2->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"#TbleWidget_Souv_Name_Display_2{\n"
"background-color:rgba(0,0,0,0);\n"
"\n"
"font-weight: bold;\n"
"\n"
"\n"
"}\n"
"#TbleWidget_Souv_Name_Display_2:item{\n"
"color: white;\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_10->addWidget(TbleWidget_Souv_Name_Display_2);

        layoutWidget5 = new QWidget(Delte_Souv_Item);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(310, 100, 258, 238));
        verticalLayout_11 = new QVBoxLayout(layoutWidget5);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        Name_Title_9 = new QLabel(layoutWidget5);
        Name_Title_9->setObjectName(QStringLiteral("Name_Title_9"));
        Name_Title_9->setStyleSheet(QLatin1String("#Name_Title_9\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 30px;\n"
"\n"
"}\n"
""));

        verticalLayout_11->addWidget(Name_Title_9);

        TbleWidget_Souv_Price_Display_2 = new QListWidget(layoutWidget5);
        TbleWidget_Souv_Price_Display_2->setObjectName(QStringLiteral("TbleWidget_Souv_Price_Display_2"));
        TbleWidget_Souv_Price_Display_2->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"#TbleWidget_Souv_Price_Display_2{\n"
"background-color:rgba(0,0,0,0);\n"
"\n"
"font-weight: bold;\n"
"\n"
"\n"
"}\n"
"#TbleWidget_Souv_Price_Display_2:item{\n"
"color: white;\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_11->addWidget(TbleWidget_Souv_Price_Display_2);

        adminstackedWidget->addWidget(Delte_Souv_Item);
        Edit_Souv_Page_2 = new QWidget();
        Edit_Souv_Page_2->setObjectName(QStringLiteral("Edit_Souv_Page_2"));
        Current_Team_Logo_4 = new QLabel(Edit_Souv_Page_2);
        Current_Team_Logo_4->setObjectName(QStringLiteral("Current_Team_Logo_4"));
        Current_Team_Logo_4->setGeometry(QRect(150, 220, 201, 181));
        Current_Team_Logo_4->setStyleSheet(QStringLiteral(""));
        Confirm_price_change_btn = new QPushButton(Edit_Souv_Page_2);
        Confirm_price_change_btn->setObjectName(QStringLiteral("Confirm_price_change_btn"));
        Confirm_price_change_btn->setGeometry(QRect(570, 260, 141, 51));
        Confirm_price_change_btn->setStyleSheet(QLatin1String("#Confirm_price_change_btn\n"
"{\n"
"	 padding-top: 5px;\n"
"         padding-right: 5px;\n"
"         padding-bottom: 5px;\n"
"         padding-left: 5px;\n"
"              border: 2px solid #8f8f91;\n"
"        border-radius: 6px;\n"
"background-color: rgb(0,0,0.5);\n"
"color: white;\n"
"font-size: 15px;\n"
"\n"
"/*image: url(:/resources/img/backButton.png);*/\n"
"}\n"
"\n"
"#Confirm_price_change_btn:hover {\n"
"\n"
"\n"
"\n"
"  border: 2px solid white;\n"
"\n"
"\n"
"font-size: 20px;\n"
"font-style: bold;\n"
"/*\n"
"color: white;\n"
" border-radius: 6px;\n"
"*/\n"
"}"));
        layoutWidget6 = new QWidget(Edit_Souv_Page_2);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 20, 258, 181));
        verticalLayout_4 = new QVBoxLayout(layoutWidget6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Name_Title_4 = new QLabel(layoutWidget6);
        Name_Title_4->setObjectName(QStringLiteral("Name_Title_4"));
        Name_Title_4->setStyleSheet(QLatin1String("#Name_Title_4\n"
"\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 30px;\n"
"\n"
"}\n"
""));

        verticalLayout_4->addWidget(Name_Title_4);

        TbleWidget_Souv_Name_Display_3 = new QListWidget(layoutWidget6);
        TbleWidget_Souv_Name_Display_3->setObjectName(QStringLiteral("TbleWidget_Souv_Name_Display_3"));
        TbleWidget_Souv_Name_Display_3->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"#TbleWidget_Souv_Name_Display_3{\n"
"background-color:rgba(0,0,0,0);\n"
"\n"
"font-weight: bold;\n"
"\n"
"\n"
"}\n"
"#TbleWidget_Souv_Name_Display_3:item{\n"
"color: white;\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_4->addWidget(TbleWidget_Souv_Name_Display_3);

        layoutWidget7 = new QWidget(Edit_Souv_Page_2);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(270, 20, 258, 181));
        verticalLayout_5 = new QVBoxLayout(layoutWidget7);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        Cost_Title_4 = new QLabel(layoutWidget7);
        Cost_Title_4->setObjectName(QStringLiteral("Cost_Title_4"));
        Cost_Title_4->setStyleSheet(QLatin1String("#Cost_Title_4\n"
"\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 30px;\n"
"\n"
"}\n"
""));

        verticalLayout_5->addWidget(Cost_Title_4);

        TbleWidget_Souv_Price_Display_3 = new QListWidget(layoutWidget7);
        TbleWidget_Souv_Price_Display_3->setObjectName(QStringLiteral("TbleWidget_Souv_Price_Display_3"));
        TbleWidget_Souv_Price_Display_3->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"#TbleWidget_Souv_Price_Display_3{\n"
"background-color:rgba(0,0,0,0);\n"
"\n"
"font-weight: bold;\n"
"\n"
"\n"
"}\n"
"#TbleWidget_Souv_Price_Display_3:item{\n"
"color: white;\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_5->addWidget(TbleWidget_Souv_Price_Display_3);

        layoutWidget8 = new QWidget(Edit_Souv_Page_2);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(540, 40, 231, 146));
        verticalLayout_12 = new QVBoxLayout(layoutWidget8);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        Name_Title_5 = new QLabel(layoutWidget8);
        Name_Title_5->setObjectName(QStringLiteral("Name_Title_5"));
        Name_Title_5->setStyleSheet(QLatin1String("#Name_Title_5\n"
"\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 30px;\n"
"\n"
"}\n"
""));

        verticalLayout_6->addWidget(Name_Title_5);

        Souv_name_Edit = new QLineEdit(layoutWidget8);
        Souv_name_Edit->setObjectName(QStringLiteral("Souv_name_Edit"));
        Souv_name_Edit->setReadOnly(true);

        verticalLayout_6->addWidget(Souv_name_Edit);


        verticalLayout_12->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        Name_Title_7 = new QLabel(layoutWidget8);
        Name_Title_7->setObjectName(QStringLiteral("Name_Title_7"));
        Name_Title_7->setStyleSheet(QLatin1String("#Name_Title_7\n"
"\n"
"\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 30px;\n"
"\n"
"}\n"
""));

        verticalLayout_7->addWidget(Name_Title_7);

        Souv_price_Edit = new QLineEdit(layoutWidget8);
        Souv_price_Edit->setObjectName(QStringLiteral("Souv_price_Edit"));
        Souv_price_Edit->setReadOnly(false);

        verticalLayout_7->addWidget(Souv_price_Edit);


        verticalLayout_12->addLayout(verticalLayout_7);

        adminstackedWidget->addWidget(Edit_Souv_Page_2);
        Stadium_Modifciation = new QWidget();
        Stadium_Modifciation->setObjectName(QStringLiteral("Stadium_Modifciation"));
        Roof_Type_Combo_Box = new QComboBox(Stadium_Modifciation);
        Roof_Type_Combo_Box->addItem(QString());
        Roof_Type_Combo_Box->addItem(QString());
        Roof_Type_Combo_Box->addItem(QString());
        Roof_Type_Combo_Box->setObjectName(QStringLiteral("Roof_Type_Combo_Box"));
        Roof_Type_Combo_Box->setGeometry(QRect(260, 340, 171, 31));
        Current_Team_Logo_5 = new QLabel(Stadium_Modifciation);
        Current_Team_Logo_5->setObjectName(QStringLiteral("Current_Team_Logo_5"));
        Current_Team_Logo_5->setGeometry(QRect(20, 140, 151, 141));
        Current_Team_Logo_5->setStyleSheet(QStringLiteral(""));
        Team_Name_Combo_Box_2 = new QComboBox(Stadium_Modifciation);
        Team_Name_Combo_Box_2->setObjectName(QStringLiteral("Team_Name_Combo_Box_2"));
        Team_Name_Combo_Box_2->setGeometry(QRect(10, 70, 191, 31));
        Team_Name_Combo_Box_2->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"\n"
"#Team_Name_Combo_Box:editable {\n"
"    background: rgb(0,0,0);\n"
"}\n"
"\n"
"\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"#Team_Name_Combo_Box:!editable:on, QComboBox::drop-down:editable:on {\n"
" /*   background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1); */\n"
"\n"
"color: rgb(0,0,0);\n"
"}\n"
"\n"
"#Team_Name_Combo_Box:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"#Team_Name_Combo_Box::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"\n"
""
                        "\n"
"}\n"
"\n"
"\n"
"#Team_Name_Combo_Box::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}"));
        Name_Title_3 = new QLabel(Stadium_Modifciation);
        Name_Title_3->setObjectName(QStringLiteral("Name_Title_3"));
        Name_Title_3->setGeometry(QRect(260, 60, 161, 39));
        Name_Title_3->setStyleSheet(QLatin1String("#Name_Title_3\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 20px;\n"
"}\n"
""));
        Stadium_Name_LineEdit = new QLineEdit(Stadium_Modifciation);
        Stadium_Name_LineEdit->setObjectName(QStringLiteral("Stadium_Name_LineEdit"));
        Stadium_Name_LineEdit->setGeometry(QRect(260, 100, 171, 31));
        Name_Title_6 = new QLabel(Stadium_Modifciation);
        Name_Title_6->setObjectName(QStringLiteral("Name_Title_6"));
        Name_Title_6->setGeometry(QRect(260, 140, 181, 39));
        Name_Title_6->setStyleSheet(QLatin1String("#Name_Title_6\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 20px;\n"
"}\n"
""));
        Name_Title_10 = new QLabel(Stadium_Modifciation);
        Name_Title_10->setObjectName(QStringLiteral("Name_Title_10"));
        Name_Title_10->setGeometry(QRect(260, 220, 141, 39));
        Name_Title_10->setStyleSheet(QLatin1String("#Name_Title_10\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 20px;\n"
"}\n"
""));
        Seating_Capacity_LineEdit = new QLineEdit(Stadium_Modifciation);
        Seating_Capacity_LineEdit->setObjectName(QStringLiteral("Seating_Capacity_LineEdit"));
        Seating_Capacity_LineEdit->setGeometry(QRect(260, 180, 171, 31));
        Name_Title_11 = new QLabel(Stadium_Modifciation);
        Name_Title_11->setObjectName(QStringLiteral("Name_Title_11"));
        Name_Title_11->setGeometry(QRect(260, 300, 141, 39));
        Name_Title_11->setStyleSheet(QLatin1String("#Name_Title_11\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 20px;\n"
"}\n"
""));
        Name_Title_12 = new QLabel(Stadium_Modifciation);
        Name_Title_12->setObjectName(QStringLiteral("Name_Title_12"));
        Name_Title_12->setGeometry(QRect(470, 70, 161, 39));
        Name_Title_12->setStyleSheet(QLatin1String("#Name_Title_12\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 20px;\n"
"}\n"
""));
        Continue_Btn = new QPushButton(Stadium_Modifciation);
        Continue_Btn->setObjectName(QStringLiteral("Continue_Btn"));
        Continue_Btn->setGeometry(QRect(560, 340, 151, 41));
        Stadium_Name_LineEdit_2 = new QLineEdit(Stadium_Modifciation);
        Stadium_Name_LineEdit_2->setObjectName(QStringLiteral("Stadium_Name_LineEdit_2"));
        Stadium_Name_LineEdit_2->setGeometry(QRect(470, 200, 171, 31));
        Stadium_Name_LineEdit_2->setReadOnly(true);
        Name_Title_13 = new QLabel(Stadium_Modifciation);
        Name_Title_13->setObjectName(QStringLiteral("Name_Title_13"));
        Name_Title_13->setGeometry(QRect(470, 160, 201, 39));
        Name_Title_13->setStyleSheet(QLatin1String("#Name_Title_13\n"
"{\n"
"color: white;\n"
"font-weight: bold;\n"
"font-size: 20px;\n"
"}\n"
""));
        Surface_Type_Combo_Box = new QComboBox(Stadium_Modifciation);
        Surface_Type_Combo_Box->addItem(QString());
        Surface_Type_Combo_Box->addItem(QString());
        Surface_Type_Combo_Box->addItem(QString());
        Surface_Type_Combo_Box->addItem(QString());
        Surface_Type_Combo_Box->addItem(QString());
        Surface_Type_Combo_Box->addItem(QString());
        Surface_Type_Combo_Box->addItem(QString());
        Surface_Type_Combo_Box->addItem(QString());
        Surface_Type_Combo_Box->addItem(QString());
        Surface_Type_Combo_Box->addItem(QString());
        Surface_Type_Combo_Box->setObjectName(QStringLiteral("Surface_Type_Combo_Box"));
        Surface_Type_Combo_Box->setGeometry(QRect(260, 260, 171, 31));
        Location_LineEdit = new QLineEdit(Stadium_Modifciation);
        Location_LineEdit->setObjectName(QStringLiteral("Location_LineEdit"));
        Location_LineEdit->setGeometry(QRect(470, 110, 171, 31));
        Location_LineEdit->setReadOnly(true);
        adminstackedWidget->addWidget(Stadium_Modifciation);
        Home_Button = new QPushButton(centralwidget);
        Home_Button->setObjectName(QStringLiteral("Home_Button"));
        Home_Button->setGeometry(QRect(10, 10, 101, 41));
        Home_Button->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"#Home_Button\n"
"{\n"
"	 padding-top: 5px;\n"
"         padding-right: 5px;\n"
"         padding-bottom: 5px;\n"
"         padding-left: 5px;\n"
"              border: 2px solid #8f8f91;\n"
"        border-radius: 6px;\n"
"background-color: rgb(0,0,0.5);\n"
"color: white;\n"
"font-size: 15px;\n"
"/*border-image: url(:/Pictures/Logout_Pic.png);*/\n"
"/*image: url(:/resources/img/backButton.png);\n"
"border-image: url(:/Pictures/home.png);\n"
"*/\n"
"}\n"
"\n"
"#Home_Button:hover {\n"
"\n"
"\n"
"\n"
"  border: 2px solid #26AEE8;\n"
"color: #26AEE8;\n"
"\n"
"\n"
"\n"
"font-size: 20px;\n"
"font-style: bold;\n"
"/*\n"
"color: white;\n"
" border-radius: 6px;\n"
"*/\n"
"}"));
        adminwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 920, 17));
        adminwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(adminwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        adminwindow->setStatusBar(statusbar);

        retranslateUi(adminwindow);

        adminstackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminwindow)
    {
        adminwindow->setWindowTitle(QApplication::translate("adminwindow", "MainWindow", nullptr));
        Log_Off_Button->setText(QApplication::translate("adminwindow", "Sign Out", nullptr));
        NFL_Logo->setText(QString());
        Add_Team_btn->setText(QApplication::translate("adminwindow", "Add Team ", nullptr));
        Edit_Souv_btn->setText(QApplication::translate("adminwindow", "Edit Souvenir", nullptr));
        Edit_Stadium_btn->setText(QApplication::translate("adminwindow", "Edit Stadium", nullptr));
        Edit_Souv_radio_button->setText(QApplication::translate("adminwindow", "Edit Souvenier", nullptr));
        Add_Souv_radiobtn->setText(QApplication::translate("adminwindow", "Add Souvenier", nullptr));
        Delete_Souv_radiobtn->setText(QApplication::translate("adminwindow", "Delete Souvenier", nullptr));
        Continue->setText(QApplication::translate("adminwindow", "Continue", nullptr));
        Current_Team_Logo->setText(QString());
        name_title->setText(QApplication::translate("adminwindow", "Name", nullptr));
        cost_title->setText(QApplication::translate("adminwindow", "Cost", nullptr));
        Current_Team_Logo_2->setText(QString());
        Confirm_Btn->setText(QApplication::translate("adminwindow", "Confirm", nullptr));
        Name_Title_2->setText(QApplication::translate("adminwindow", "Souvenier Name", nullptr));
        Cost_Title_2->setText(QApplication::translate("adminwindow", "Souvenier Price", nullptr));
        Admin_Page_Title_2->setText(QApplication::translate("adminwindow", "Select Souvenier to Delete", nullptr));
        Current_Team_Logo_3->setText(QString());
        Name_Title_8->setText(QApplication::translate("adminwindow", "Name ", nullptr));
        Name_Title_9->setText(QApplication::translate("adminwindow", "Cost", nullptr));
        Current_Team_Logo_4->setText(QString());
        Confirm_price_change_btn->setText(QApplication::translate("adminwindow", "Confirm", nullptr));
        Name_Title_4->setText(QApplication::translate("adminwindow", "Name", nullptr));
        Cost_Title_4->setText(QApplication::translate("adminwindow", "Price", nullptr));
        Name_Title_5->setText(QApplication::translate("adminwindow", "    Name", nullptr));
        Name_Title_7->setText(QApplication::translate("adminwindow", "Name Price", nullptr));
        Roof_Type_Combo_Box->setItemText(0, QApplication::translate("adminwindow", "Fixed", nullptr));
        Roof_Type_Combo_Box->setItemText(1, QApplication::translate("adminwindow", "Open", nullptr));
        Roof_Type_Combo_Box->setItemText(2, QApplication::translate("adminwindow", "Retractable", nullptr));

        Current_Team_Logo_5->setText(QString());
        Name_Title_3->setText(QApplication::translate("adminwindow", "Stadium Name: ", nullptr));
        Name_Title_6->setText(QApplication::translate("adminwindow", "Seating Capacity:", nullptr));
        Name_Title_10->setText(QApplication::translate("adminwindow", "Surface Type:", nullptr));
        Name_Title_11->setText(QApplication::translate("adminwindow", "Roof Type:", nullptr));
        Name_Title_12->setText(QApplication::translate("adminwindow", "Location:", nullptr));
        Continue_Btn->setText(QApplication::translate("adminwindow", "Continue", nullptr));
        Name_Title_13->setText(QApplication::translate("adminwindow", "Old Stadium Name:", nullptr));
        Surface_Type_Combo_Box->setItemText(0, QApplication::translate("adminwindow", "A-Turf Titan 50", nullptr));
        Surface_Type_Combo_Box->setItemText(1, QApplication::translate("adminwindow", "Bermuda Grass", nullptr));
        Surface_Type_Combo_Box->setItemText(2, QApplication::translate("adminwindow", "Desso GrassMaster", nullptr));
        Surface_Type_Combo_Box->setItemText(3, QApplication::translate("adminwindow", "FieldTurf Classic HD", nullptr));
        Surface_Type_Combo_Box->setItemText(4, QApplication::translate("adminwindow", "FieldTurf Revolution", nullptr));
        Surface_Type_Combo_Box->setItemText(5, QApplication::translate("adminwindow", "Hellas Matrix Turf", nullptr));
        Surface_Type_Combo_Box->setItemText(6, QApplication::translate("adminwindow", "Kentucky Bluegrass", nullptr));
        Surface_Type_Combo_Box->setItemText(7, QApplication::translate("adminwindow", "Platinum TE Paspalum", nullptr));
        Surface_Type_Combo_Box->setItemText(8, QApplication::translate("adminwindow", "UBU Speed Series S5-M Synthetic Turf", nullptr));
        Surface_Type_Combo_Box->setItemText(9, QApplication::translate("adminwindow", "UBU Sports Speed Series S5-M Synthetic Turf", nullptr));

        Home_Button->setText(QApplication::translate("adminwindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
