/********************************************************************************
** Form generated from reading UI file 'Mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_8;
    QLineEdit *adresse;
    QLineEdit *nom1_2;
    QLabel *label_9;
    QLineEdit *id_client;
    QLineEdit *H_achat;
    QLineEdit *prenom1_2;
    QLineEdit *email_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;
    QComboBox *comboBox_7;
    QLineEdit *IDC_client;
    QTableView *tableView_2;
    QWidget *tab_9;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_29;
    QGroupBox *groupBox_7;
    QPushButton *pushButton_30;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_6;
    QLineEdit *poste;
    QLineEdit *mail;
    QLineEdit *nom1;
    QLabel *label_2;
    QLineEdit *prenom1;
    QLineEdit *telephone;
    QLineEdit *salaire;
    QLineEdit *matricule;
    QLineEdit *DateE;
    QTableWidget *tableWidget;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QComboBox *comboBox_6;
    QWidget *tab_7;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_27;
    QWidget *tab_4;
    QTabWidget *tabWidget_4;
    QWidget *tab_10;
    QLineEdit *fournisseur;
    QLineEdit *date_ex;
    QLineEdit *nom1_3;
    QLabel *label_10;
    QLineEdit *id_stock;
    QLineEdit *condition_s;
    QLineEdit *dateaq;
    QLineEdit *categorie;
    QLineEdit *quantite_disp;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_3;
    QComboBox *comboBox_8;
    QWidget *tab_11;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_31;
    QGroupBox *groupBox_9;
    QPushButton *pushButton_32;
    QWidget *tab_5;
    QTabWidget *tabWidget_5;
    QWidget *tab_12;
    QLineEdit *id_material;
    QLineEdit *date_liv;
    QLineEdit *date_cimmande;
    QLabel *label_11;
    QLineEdit *id_commande;
    QLineEdit *quantite_c;
    QLineEdit *etat_commande;
    QLineEdit *id_client_2;
    QTableWidget *tableWidget_4;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox_4;
    QComboBox *comboBox_9;
    QWidget *tab_13;
    QGroupBox *groupBox_10;
    QPushButton *pushButton_33;
    QWidget *tab_2;
    QTabWidget *tabWidget_6;
    QWidget *tab_14;
    QLineEdit *date_aquesition;
    QLineEdit *date_pm;
    QLineEdit *nom_e;
    QLabel *label_12;
    QLineEdit *id_equipement;
    QLineEdit *date_dm;
    QLineEdit *categorie_2;
    QLineEdit *etat_eq;
    QTableWidget *tableWidget_5;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox_5;
    QLineEdit *par_suivi;
    QLineEdit *prix;
    QLineEdit *fourniseureq;
    QLineEdit *localisation_eq;
    QComboBox *comboBox_10;
    QWidget *tab_15;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1344, 816);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 10, 1181, 761));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"     subcontrol-origin: margin;      /* Title positioned from margin */\n"
"    subcontrol-position: top center; /* Center the title */\n"
"    padding: 5px 20px;              /* Padding around the title */\n"
"    background-color: #213d35;      /* Dark green background like the button */\n"
"    border: 2px solid #4CAF50;      /* Green border for the title */\n"
"    border-radius: 5px;            /* Rounded corners for the title */\n"
"    color: #9DC28A;                 /* Light green text color */\n"
"    font-size: 16px;                /* Font size */\n"
"    font-weight: bold;           \n"
"}\n"
""));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(60, 40, 1071, 711));
        tabWidget->setStyleSheet(QString::fromUtf8("/* Style for the entire QTabWidget */\n"
"QTabWidget::pane {\n"
"    border: none;               /* Remove border */\n"
"    background: transparent;    /* Remove background color */\n"
"    padding: 0px;               /* Remove padding around tabs */\n"
"}\n"
"QTabWidget_3::pane {\n"
"background-color:whit;\n"
"}\n"
"/* Style for the QTabBar (the row of tabs) */\n"
"QTabBar::tab {\n"
"    background-color: #737373;  \n"
"    color: white;             \n"
"    border: 2px solid black;  \n"
"    border-radius: 10px;      \n"
"     margin-right: 10px; \n"
"    padding: 10px 20px;         \n"
"    min-width: 100px;         \n"
"    font-size: 16px;            \n"
"}\n"
"\n"
"/* Hover effect for tabs */\n"
"QTabBar::tab:hover {\n"
"    background-color: grey;  /* Change background on hover */\n"
"    color: white;               /* Text color on hover */\n"
"}\n"
"\n"
"/* Active (selected) tab styling */\n"
"QTabBar::tab:selected {\n"
"    background-color: grey;  /* Background for selected tab */\n"
"    color: wh"
                        "ite;               /* Text color for selected tab */\n"
"   /* border: 2px solid black; /* Highlight the bottom border */\n"
"}\n"
"\n"
"/* Disabled tab styling */\n"
"QTabBar::tab:disabled {\n"
"    background-color:#737373;  /* Gray out disabled tabs */\n"
"    color: #888888;             /* Text color for disabled tabs */\n"
"}\n"
"\n"
"/* Style for the widget area (content inside the tabs) */\n"
"QWidget {\n"
"    background-color: rgb(0, 85, 0);;  /* Background for the tab content */\n"
"    border: none;\n"
"    border-radius: 10px;        /* Rounded corners for the content */\n"
"   /* padding: 10px;*/\n"
"}\n"
"QTabWidget::pane {\n"
"    padding: 10px;  /* Apply padding only to the QTabWidget pane */\n"
"}\n"
"\n"
"QTableWidget {\n"
"    margin: 0px;  /* Ensure no margin/padding inside the QTableWidget */\n"
"}\n"
"QTableWidget {\n"
"    background-color: #a6c868;   /* Set a distinct background for the table */\n"
"    border: 1px solid black;   /* Add a border for better visibility */\n"
"}\n"
"\n"
"Q"
                        "TableWidget::item {\n"
"    background-color: #a6c868;   /* Set item background */\n"
"    color:#a6c868;              /* Set text color for table items */\n"
"    padding: 5px;              /* Add padding to table cells */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color:  #a6c868; /* Set background for header */\n"
"    color: black;              /* Set text color for header */\n"
"    font-size: 12px;           /* Set font size for header */\n"
"    font:bold;\n"
"    padding: 8px;\n"
"}\n"
"QTableCornerButton::section {\n"
"    background-color: #a6c868;  /* Set top-left corner to light green */\n"
"    border: 1px solid #737373;     /* Optional: Add a border for consistency */\n"
"}"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget_3 = new QTabWidget(tab_3);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 991, 591));
        tabWidget_3->setStyleSheet(QString::fromUtf8(""));
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        adresse = new QLineEdit(tab_8);
        adresse->setObjectName(QString::fromUtf8("adresse"));
        adresse->setGeometry(QRect(40, 240, 141, 41));
        adresse->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        nom1_2 = new QLineEdit(tab_8);
        nom1_2->setObjectName(QString::fromUtf8("nom1_2"));
        nom1_2->setGeometry(QRect(40, 70, 141, 41));
        nom1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        label_9 = new QLabel(tab_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 211, 451));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        id_client = new QLineEdit(tab_8);
        id_client->setObjectName(QString::fromUtf8("id_client"));
        id_client->setGeometry(QRect(40, 20, 141, 41));
        QFont font;
        font.setPointSize(8);
        id_client->setFont(font);
        id_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        H_achat = new QLineEdit(tab_8);
        H_achat->setObjectName(QString::fromUtf8("H_achat"));
        H_achat->setGeometry(QRect(40, 300, 141, 41));
        H_achat->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        prenom1_2 = new QLineEdit(tab_8);
        prenom1_2->setObjectName(QString::fromUtf8("prenom1_2"));
        prenom1_2->setGeometry(QRect(40, 120, 141, 41));
        prenom1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        email_2 = new QLineEdit(tab_8);
        email_2->setObjectName(QString::fromUtf8("email_2"));
        email_2->setGeometry(QRect(40, 180, 141, 41));
        email_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        pushButton_10 = new QPushButton(tab_8);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(60, 470, 121, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_11 = new QPushButton(tab_8);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(280, 420, 121, 41));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_12 = new QPushButton(tab_8);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(690, 420, 121, 41));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_13 = new QPushButton(tab_8);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(820, 420, 121, 41));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        lineEdit_2 = new QLineEdit(tab_8);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 20, 231, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 2px solid black;\n"
"color:black;"));
        comboBox_2 = new QComboBox(tab_8);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(770, 20, 164, 28));
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgb(0, 85, 0);/* Background color */\n"
"    color: #ffffff;              /* Text color */\n"
"    border: 2px solid black;   /* Border color and thickness */\n"
"    border-radius: 5px;         /* Rounded corners */\n"
"    padding: 5px;               /* Padding around the text */\n"
"    min-width: 150px;           /* Minimum width */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #a6c868 ;  /* Darker border on hover */\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background-color: rgb(0, 85, 0);        /* Background color when editable */\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"    background-color:  #005e38;       /* Background color when not editable */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid black;  /* Border color when focused */\n"
"}\n"
""));
        comboBox_7 = new QComboBox(tab_8);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
        comboBox_7->setGeometry(QRect(410, 420, 114, 31));
        comboBox_7->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: white;/* Background color */\n"
"    color: black;              /* Text color */\n"
"    border: 2px solid black;   /* Border color and thickness */\n"
"    border-radius: 5px;         /* Rounded corners */\n"
"    padding: 5px;               /* Padding around the text */\n"
"    min-width: 100px;           /* Minimum width */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #a6c868 ;  /* Darker border on hover */\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background-color: white;        /* Background color when editable */\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"    background-color:  white;       /* Background color when not editable */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid black;  /* Border color when focused */\n"
"}\n"
""));
        IDC_client = new QLineEdit(tab_8);
        IDC_client->setObjectName(QString::fromUtf8("IDC_client"));
        IDC_client->setGeometry(QRect(40, 360, 141, 41));
        IDC_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        tableView_2 = new QTableView(tab_8);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(295, 71, 691, 261));
        tabWidget_3->addTab(tab_8, QString());
        label_9->raise();
        id_client->raise();
        H_achat->raise();
        prenom1_2->raise();
        email_2->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        pushButton_12->raise();
        pushButton_13->raise();
        lineEdit_2->raise();
        comboBox_2->raise();
        nom1_2->raise();
        adresse->raise();
        comboBox_7->raise();
        IDC_client->raise();
        tableView_2->raise();
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        groupBox_6 = new QGroupBox(tab_9);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(140, 100, 291, 251));
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        pushButton_29 = new QPushButton(groupBox_6);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        pushButton_29->setGeometry(QRect(30, 110, 231, 51));
        pushButton_29->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        groupBox_7 = new QGroupBox(tab_9);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(590, 100, 291, 251));
        groupBox_7->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        pushButton_30 = new QPushButton(groupBox_7);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        pushButton_30->setGeometry(QRect(30, 110, 231, 51));
        pushButton_30->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        tabWidget_3->addTab(tab_9, QString());
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 1031, 591));
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        poste = new QLineEdit(tab_6);
        poste->setObjectName(QString::fromUtf8("poste"));
        poste->setGeometry(QRect(40, 240, 141, 41));
        poste->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        mail = new QLineEdit(tab_6);
        mail->setObjectName(QString::fromUtf8("mail"));
        mail->setGeometry(QRect(40, 340, 141, 41));
        mail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        nom1 = new QLineEdit(tab_6);
        nom1->setObjectName(QString::fromUtf8("nom1"));
        nom1->setGeometry(QRect(40, 90, 141, 41));
        nom1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        label_2 = new QLabel(tab_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 211, 451));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        prenom1 = new QLineEdit(tab_6);
        prenom1->setObjectName(QString::fromUtf8("prenom1"));
        prenom1->setGeometry(QRect(40, 40, 141, 41));
        prenom1->setFont(font);
        prenom1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        telephone = new QLineEdit(tab_6);
        telephone->setObjectName(QString::fromUtf8("telephone"));
        telephone->setGeometry(QRect(40, 390, 141, 41));
        telephone->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        salaire = new QLineEdit(tab_6);
        salaire->setObjectName(QString::fromUtf8("salaire"));
        salaire->setGeometry(QRect(40, 290, 141, 41));
        salaire->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        matricule = new QLineEdit(tab_6);
        matricule->setObjectName(QString::fromUtf8("matricule"));
        matricule->setGeometry(QRect(40, 140, 141, 41));
        matricule->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        DateE = new QLineEdit(tab_6);
        DateE->setObjectName(QString::fromUtf8("DateE"));
        DateE->setGeometry(QRect(40, 190, 141, 41));
        DateE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        tableWidget = new QTableWidget(tab_6);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem16);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(280, 50, 711, 351));
        pushButton_6 = new QPushButton(tab_6);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(60, 470, 121, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_7 = new QPushButton(tab_6);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(280, 420, 121, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_8 = new QPushButton(tab_6);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(740, 420, 121, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_9 = new QPushButton(tab_6);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(870, 420, 121, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        lineEdit = new QLineEdit(tab_6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 20, 231, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 2px solid black;\n"
"color:black;"));
        comboBox = new QComboBox(tab_6);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(820, 20, 164, 28));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgb(0, 85, 0);/* Background color */\n"
"    color: #ffffff;              /* Text color */\n"
"    border: 2px solid black;   /* Border color and thickness */\n"
"    border-radius: 5px;         /* Rounded corners */\n"
"    padding: 5px;               /* Padding around the text */\n"
"    min-width: 150px;           /* Minimum width */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #a6c868 ;  /* Darker border on hover */\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background-color: rgb(0, 85, 0);        /* Background color when editable */\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"    background-color:  #005e38;       /* Background color when not editable */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid black;  /* Border color when focused */\n"
"}\n"
""));
        comboBox_6 = new QComboBox(tab_6);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(410, 420, 114, 31));
        comboBox_6->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: white;/* Background color */\n"
"    color: black;              /* Text color */\n"
"    border: 2px solid black;   /* Border color and thickness */\n"
"    border-radius: 5px;         /* Rounded corners */\n"
"    padding: 5px;               /* Padding around the text */\n"
"    min-width: 100px;           /* Minimum width */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #a6c868 ;  /* Darker border on hover */\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background-color: white;        /* Background color when editable */\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"    background-color:  white;       /* Background color when not editable */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid black;  /* Border color when focused */\n"
"}\n"
""));
        tabWidget_2->addTab(tab_6, QString());
        label_2->raise();
        prenom1->raise();
        telephone->raise();
        salaire->raise();
        matricule->raise();
        DateE->raise();
        nom1->raise();
        poste->raise();
        mail->raise();
        tableWidget->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        lineEdit->raise();
        comboBox->raise();
        comboBox_6->raise();
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        groupBox_5 = new QGroupBox(tab_7);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(340, 140, 291, 191));
        groupBox_5->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        pushButton_27 = new QPushButton(groupBox_5);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        pushButton_27->setGeometry(QRect(30, 80, 231, 51));
        pushButton_27->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        tabWidget_2->addTab(tab_7, QString());
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget_4 = new QTabWidget(tab_4);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 0, 1001, 591));
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        fournisseur = new QLineEdit(tab_10);
        fournisseur->setObjectName(QString::fromUtf8("fournisseur"));
        fournisseur->setGeometry(QRect(40, 240, 141, 41));
        fournisseur->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        date_ex = new QLineEdit(tab_10);
        date_ex->setObjectName(QString::fromUtf8("date_ex"));
        date_ex->setGeometry(QRect(40, 340, 141, 41));
        date_ex->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        nom1_3 = new QLineEdit(tab_10);
        nom1_3->setObjectName(QString::fromUtf8("nom1_3"));
        nom1_3->setGeometry(QRect(40, 90, 141, 41));
        nom1_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        label_10 = new QLabel(tab_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 10, 211, 451));
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        id_stock = new QLineEdit(tab_10);
        id_stock->setObjectName(QString::fromUtf8("id_stock"));
        id_stock->setGeometry(QRect(40, 40, 141, 41));
        id_stock->setFont(font);
        id_stock->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        condition_s = new QLineEdit(tab_10);
        condition_s->setObjectName(QString::fromUtf8("condition_s"));
        condition_s->setGeometry(QRect(40, 390, 141, 41));
        condition_s->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        dateaq = new QLineEdit(tab_10);
        dateaq->setObjectName(QString::fromUtf8("dateaq"));
        dateaq->setGeometry(QRect(40, 290, 141, 41));
        dateaq->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        categorie = new QLineEdit(tab_10);
        categorie->setObjectName(QString::fromUtf8("categorie"));
        categorie->setGeometry(QRect(40, 140, 141, 41));
        categorie->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        quantite_disp = new QLineEdit(tab_10);
        quantite_disp->setObjectName(QString::fromUtf8("quantite_disp"));
        quantite_disp->setGeometry(QRect(40, 190, 141, 41));
        quantite_disp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        tableWidget_3 = new QTableWidget(tab_10);
        if (tableWidget_3->columnCount() < 8)
            tableWidget_3->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(7, __qtablewidgetitem24);
        if (tableWidget_3->rowCount() < 9)
            tableWidget_3->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(4, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(5, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(6, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(7, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(8, __qtablewidgetitem33);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(280, 50, 651, 351));
        pushButton_14 = new QPushButton(tab_10);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(60, 470, 121, 41));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_15 = new QPushButton(tab_10);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(280, 420, 121, 41));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_16 = new QPushButton(tab_10);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(680, 420, 121, 41));
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_17 = new QPushButton(tab_10);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(810, 420, 121, 41));
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        lineEdit_3 = new QLineEdit(tab_10);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(280, 20, 231, 28));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 2px solid black;\n"
"color:black;"));
        comboBox_3 = new QComboBox(tab_10);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(760, 20, 164, 28));
        comboBox_3->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgb(0, 85, 0);/* Background color */\n"
"    color: #ffffff;              /* Text color */\n"
"    border: 2px solid black;   /* Border color and thickness */\n"
"    border-radius: 5px;         /* Rounded corners */\n"
"    padding: 5px;               /* Padding around the text */\n"
"    min-width: 150px;           /* Minimum width */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #a6c868 ;  /* Darker border on hover */\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background-color: rgb(0, 85, 0);        /* Background color when editable */\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"    background-color:  #005e38;       /* Background color when not editable */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid black;  /* Border color when focused */\n"
"}\n"
""));
        comboBox_8 = new QComboBox(tab_10);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));
        comboBox_8->setGeometry(QRect(410, 420, 114, 31));
        comboBox_8->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: white;/* Background color */\n"
"    color: black;              /* Text color */\n"
"    border: 2px solid black;   /* Border color and thickness */\n"
"    border-radius: 5px;         /* Rounded corners */\n"
"    padding: 5px;               /* Padding around the text */\n"
"    min-width: 100px;           /* Minimum width */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #a6c868 ;  /* Darker border on hover */\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background-color: white;        /* Background color when editable */\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"    background-color:  white;       /* Background color when not editable */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid black;  /* Border color when focused */\n"
"}\n"
""));
        tabWidget_4->addTab(tab_10, QString());
        label_10->raise();
        id_stock->raise();
        condition_s->raise();
        dateaq->raise();
        categorie->raise();
        quantite_disp->raise();
        tableWidget_3->raise();
        pushButton_14->raise();
        pushButton_15->raise();
        pushButton_16->raise();
        pushButton_17->raise();
        lineEdit_3->raise();
        comboBox_3->raise();
        date_ex->raise();
        nom1_3->raise();
        fournisseur->raise();
        comboBox_8->raise();
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        groupBox_8 = new QGroupBox(tab_11);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(160, 110, 291, 251));
        groupBox_8->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        pushButton_31 = new QPushButton(groupBox_8);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        pushButton_31->setGeometry(QRect(30, 110, 231, 51));
        pushButton_31->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        groupBox_9 = new QGroupBox(tab_11);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(530, 110, 291, 251));
        groupBox_9->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        pushButton_32 = new QPushButton(groupBox_9);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        pushButton_32->setGeometry(QRect(10, 110, 271, 51));
        pushButton_32->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   font-size:14px;\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        tabWidget_4->addTab(tab_11, QString());
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget_5 = new QTabWidget(tab_5);
        tabWidget_5->setObjectName(QString::fromUtf8("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(0, 0, 971, 591));
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        id_material = new QLineEdit(tab_12);
        id_material->setObjectName(QString::fromUtf8("id_material"));
        id_material->setGeometry(QRect(40, 270, 141, 41));
        id_material->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        date_liv = new QLineEdit(tab_12);
        date_liv->setObjectName(QString::fromUtf8("date_liv"));
        date_liv->setGeometry(QRect(40, 390, 141, 41));
        date_liv->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        date_cimmande = new QLineEdit(tab_12);
        date_cimmande->setObjectName(QString::fromUtf8("date_cimmande"));
        date_cimmande->setGeometry(QRect(40, 90, 141, 41));
        date_cimmande->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        label_11 = new QLabel(tab_12);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 10, 211, 451));
        label_11->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        id_commande = new QLineEdit(tab_12);
        id_commande->setObjectName(QString::fromUtf8("id_commande"));
        id_commande->setGeometry(QRect(40, 30, 141, 41));
        id_commande->setFont(font);
        id_commande->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        quantite_c = new QLineEdit(tab_12);
        quantite_c->setObjectName(QString::fromUtf8("quantite_c"));
        quantite_c->setGeometry(QRect(40, 330, 141, 41));
        quantite_c->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        etat_commande = new QLineEdit(tab_12);
        etat_commande->setObjectName(QString::fromUtf8("etat_commande"));
        etat_commande->setGeometry(QRect(40, 150, 141, 41));
        etat_commande->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        id_client_2 = new QLineEdit(tab_12);
        id_client_2->setObjectName(QString::fromUtf8("id_client_2"));
        id_client_2->setGeometry(QRect(40, 210, 141, 41));
        id_client_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        tableWidget_4 = new QTableWidget(tab_12);
        if (tableWidget_4->columnCount() < 8)
            tableWidget_4->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(5, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(6, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(7, __qtablewidgetitem41);
        if (tableWidget_4->rowCount() < 9)
            tableWidget_4->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(3, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(4, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(5, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(6, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(7, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget_4->setVerticalHeaderItem(8, __qtablewidgetitem50);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(280, 50, 641, 351));
        pushButton_18 = new QPushButton(tab_12);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(60, 470, 121, 41));
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_19 = new QPushButton(tab_12);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(280, 420, 121, 41));
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_20 = new QPushButton(tab_12);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(670, 420, 121, 41));
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_21 = new QPushButton(tab_12);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(800, 420, 121, 41));
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        lineEdit_4 = new QLineEdit(tab_12);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(280, 20, 231, 28));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 2px solid black;\n"
"color:black;"));
        comboBox_4 = new QComboBox(tab_12);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(750, 20, 164, 28));
        comboBox_4->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgb(0, 85, 0);/* Background color */\n"
"    color: #ffffff;              /* Text color */\n"
"    border: 2px solid black;   /* Border color and thickness */\n"
"    border-radius: 5px;         /* Rounded corners */\n"
"    padding: 5px;               /* Padding around the text */\n"
"    min-width: 150px;           /* Minimum width */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #a6c868 ;  /* Darker border on hover */\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background-color: rgb(0, 85, 0);        /* Background color when editable */\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"    background-color:  #005e38;       /* Background color when not editable */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid black;  /* Border color when focused */\n"
"}\n"
""));
        comboBox_9 = new QComboBox(tab_12);
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));
        comboBox_9->setGeometry(QRect(410, 420, 114, 31));
        comboBox_9->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: white;/* Background color */\n"
"    color: black;              /* Text color */\n"
"    border: 2px solid black;   /* Border color and thickness */\n"
"    border-radius: 5px;         /* Rounded corners */\n"
"    padding: 5px;               /* Padding around the text */\n"
"    min-width: 100px;           /* Minimum width */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #a6c868 ;  /* Darker border on hover */\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background-color: white;        /* Background color when editable */\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"    background-color:  white;       /* Background color when not editable */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid black;  /* Border color when focused */\n"
"}\n"
""));
        tabWidget_5->addTab(tab_12, QString());
        label_11->raise();
        id_commande->raise();
        quantite_c->raise();
        etat_commande->raise();
        id_client_2->raise();
        tableWidget_4->raise();
        pushButton_18->raise();
        pushButton_19->raise();
        pushButton_20->raise();
        pushButton_21->raise();
        lineEdit_4->raise();
        comboBox_4->raise();
        date_liv->raise();
        id_material->raise();
        date_cimmande->raise();
        comboBox_9->raise();
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        groupBox_10 = new QGroupBox(tab_13);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(330, 130, 291, 251));
        groupBox_10->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        pushButton_33 = new QPushButton(groupBox_10);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        pushButton_33->setGeometry(QRect(30, 110, 231, 51));
        pushButton_33->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        tabWidget_5->addTab(tab_13, QString());
        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget_6 = new QTabWidget(tab_2);
        tabWidget_6->setObjectName(QString::fromUtf8("tabWidget_6"));
        tabWidget_6->setGeometry(QRect(0, 0, 991, 691));
        tab_14 = new QWidget();
        tab_14->setObjectName(QString::fromUtf8("tab_14"));
        date_aquesition = new QLineEdit(tab_14);
        date_aquesition->setObjectName(QString::fromUtf8("date_aquesition"));
        date_aquesition->setGeometry(QRect(40, 230, 141, 41));
        date_aquesition->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        date_pm = new QLineEdit(tab_14);
        date_pm->setObjectName(QString::fromUtf8("date_pm"));
        date_pm->setGeometry(QRect(40, 330, 141, 41));
        date_pm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        nom_e = new QLineEdit(tab_14);
        nom_e->setObjectName(QString::fromUtf8("nom_e"));
        nom_e->setGeometry(QRect(40, 80, 141, 41));
        nom_e->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        label_12 = new QLabel(tab_14);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 10, 211, 571));
        label_12->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        id_equipement = new QLineEdit(tab_14);
        id_equipement->setObjectName(QString::fromUtf8("id_equipement"));
        id_equipement->setGeometry(QRect(40, 30, 141, 41));
        id_equipement->setFont(font);
        id_equipement->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        date_dm = new QLineEdit(tab_14);
        date_dm->setObjectName(QString::fromUtf8("date_dm"));
        date_dm->setGeometry(QRect(40, 280, 141, 41));
        date_dm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        categorie_2 = new QLineEdit(tab_14);
        categorie_2->setObjectName(QString::fromUtf8("categorie_2"));
        categorie_2->setGeometry(QRect(40, 130, 141, 41));
        categorie_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        etat_eq = new QLineEdit(tab_14);
        etat_eq->setObjectName(QString::fromUtf8("etat_eq"));
        etat_eq->setGeometry(QRect(40, 180, 141, 41));
        etat_eq->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        tableWidget_5 = new QTableWidget(tab_14);
        if (tableWidget_5->columnCount() < 10)
            tableWidget_5->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(4, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(5, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(6, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(7, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(8, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(9, __qtablewidgetitem60);
        if (tableWidget_5->rowCount() < 9)
            tableWidget_5->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(0, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(1, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(2, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(3, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(4, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(5, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(6, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(7, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget_5->setVerticalHeaderItem(8, __qtablewidgetitem69);
        tableWidget_5->setObjectName(QString::fromUtf8("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(280, 50, 691, 351));
        pushButton_22 = new QPushButton(tab_14);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(230, 540, 121, 41));
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_23 = new QPushButton(tab_14);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(280, 420, 121, 41));
        pushButton_23->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_24 = new QPushButton(tab_14);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        pushButton_24->setGeometry(QRect(710, 420, 121, 41));
        pushButton_24->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_25 = new QPushButton(tab_14);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        pushButton_25->setGeometry(QRect(840, 420, 121, 41));
        pushButton_25->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        lineEdit_5 = new QLineEdit(tab_14);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(280, 20, 231, 28));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 2px solid black;\n"
"color:black;"));
        comboBox_5 = new QComboBox(tab_14);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(800, 20, 164, 28));
        comboBox_5->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgb(0, 85, 0);/* Background color */\n"
"    color: #ffffff;              /* Text color */\n"
"    border: 2px solid black;   /* Border color and thickness */\n"
"    border-radius: 5px;         /* Rounded corners */\n"
"    padding: 5px;               /* Padding around the text */\n"
"    min-width: 150px;           /* Minimum width */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #a6c868 ;  /* Darker border on hover */\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background-color: rgb(0, 85, 0);        /* Background color when editable */\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"    background-color:  #005e38;       /* Background color when not editable */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid black;  /* Border color when focused */\n"
"}\n"
""));
        par_suivi = new QLineEdit(tab_14);
        par_suivi->setObjectName(QString::fromUtf8("par_suivi"));
        par_suivi->setGeometry(QRect(40, 380, 141, 41));
        par_suivi->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        prix = new QLineEdit(tab_14);
        prix->setObjectName(QString::fromUtf8("prix"));
        prix->setGeometry(QRect(40, 430, 141, 41));
        prix->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        fourniseureq = new QLineEdit(tab_14);
        fourniseureq->setObjectName(QString::fromUtf8("fourniseureq"));
        fourniseureq->setGeometry(QRect(40, 480, 141, 41));
        fourniseureq->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        localisation_eq = new QLineEdit(tab_14);
        localisation_eq->setObjectName(QString::fromUtf8("localisation_eq"));
        localisation_eq->setGeometry(QRect(40, 530, 141, 41));
        localisation_eq->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color:black;"));
        comboBox_10 = new QComboBox(tab_14);
        comboBox_10->setObjectName(QString::fromUtf8("comboBox_10"));
        comboBox_10->setGeometry(QRect(410, 420, 114, 31));
        comboBox_10->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: white;/* Background color */\n"
"    color: black;              /* Text color */\n"
"    border: 2px solid black;   /* Border color and thickness */\n"
"    border-radius: 5px;         /* Rounded corners */\n"
"    padding: 5px;               /* Padding around the text */\n"
"    min-width: 100px;           /* Minimum width */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #a6c868 ;  /* Darker border on hover */\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background-color: white;        /* Background color when editable */\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"    background-color:  white;       /* Background color when not editable */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid black;  /* Border color when focused */\n"
"}\n"
""));
        tabWidget_6->addTab(tab_14, QString());
        label_12->raise();
        id_equipement->raise();
        date_dm->raise();
        categorie_2->raise();
        etat_eq->raise();
        tableWidget_5->raise();
        pushButton_22->raise();
        pushButton_23->raise();
        pushButton_24->raise();
        pushButton_25->raise();
        lineEdit_5->raise();
        comboBox_5->raise();
        date_pm->raise();
        date_aquesition->raise();
        nom_e->raise();
        par_suivi->raise();
        prix->raise();
        fourniseureq->raise();
        localisation_eq->raise();
        comboBox_10->raise();
        tab_15 = new QWidget();
        tab_15->setObjectName(QString::fromUtf8("tab_15"));
        groupBox_2 = new QGroupBox(tab_15);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(90, 80, 291, 351));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 80, 191, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 190, 191, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        groupBox_3 = new QGroupBox(tab_15);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(520, 80, 301, 351));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #a6c868;     /* Set background color to white */\n"
"    border: 2px solid;   /* Set border color */\n"
"    border-radius: 10px;         /* Rounded corners */\n"
"    margin-top: 10px;            /* Space for the title */\n"
"    padding: 10px;               /* Padding inside the box */\n"
"}"));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 80, 191, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 180, 191, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;                      /* Text color */\n"
"    border: 2px solid black;         /* Border width and color */\n"
"    border-radius: 15px;              /* Round the corners */\n"
"    background-color: #005e38;        /* Optional: Set a background color */\n"
"    padding: 10px 20px;               /* Add padding for better aesthetics */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;        /* Change background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41;        /* Change background color when pressed */\n"
"}"));
        tabWidget_6->addTab(tab_15, QString());
        tabWidget->addTab(tab_2, QString());
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1220, 10, 81, 61));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/img/logo.png);"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);
        tabWidget_5->setCurrentIndex(0);
        tabWidget_6->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        label_9->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Exporter", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "nom", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "id", nullptr));
        comboBox_2->setItemText(2, QString());
        comboBox_2->setItemText(3, QString());

        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "fidelite", nullptr));
        pushButton_29->setText(QCoreApplication::translate("MainWindow", "lister les clients fideles", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Systeme de crecommandation", nullptr));
        pushButton_30->setText(QCoreApplication::translate("MainWindow", "Recommander des achats", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Page", nullptr));
        label_2->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "prenom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "matricule", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "mail", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "telephone", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Date_Embauche", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "salaire", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "post", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Exporter", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "nom", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "id", nullptr));
        comboBox->setItemText(2, QString());
        comboBox->setItemText(3, QString());

        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "personnel section", nullptr));
        pushButton_27->setText(QCoreApplication::translate("MainWindow", "generer les congees", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_10->setText(QString());
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "id_stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "fournisseur", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "categorie", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "date_aquesition", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "date-expedition", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "quantite-dispinible", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_3->horizontalHeaderItem(7);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "condition_stockage", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_3->verticalHeaderItem(1);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_3->verticalHeaderItem(2);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_3->verticalHeaderItem(3);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_3->verticalHeaderItem(4);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_3->verticalHeaderItem(5);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_3->verticalHeaderItem(6);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_3->verticalHeaderItem(7);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_3->verticalHeaderItem(8);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Exporter", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "nom", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "id", nullptr));
        comboBox_3->setItemText(2, QString());
        comboBox_3->setItemText(3, QString());

        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_10), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "Alertes", nullptr));
        pushButton_31->setText(QCoreApplication::translate("MainWindow", "Generer des Alerts", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "Stockage", nullptr));
        pushButton_32->setText(QCoreApplication::translate("MainWindow", "Suerveiller les conditon de stockage ", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_11), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Page", nullptr));
        label_11->setText(QString());
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "id_commande", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "date_commande", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "eata_commande", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("MainWindow", "id_client", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("MainWindow", "id_material", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_4->horizontalHeaderItem(5);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("MainWindow", "date-expedition", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_4->horizontalHeaderItem(6);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("MainWindow", "quantite-commande", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_4->horizontalHeaderItem(7);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("MainWindow", "date_livraison", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_4->verticalHeaderItem(0);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_4->verticalHeaderItem(1);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_4->verticalHeaderItem(2);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_4->verticalHeaderItem(3);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget_4->verticalHeaderItem(4);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget_4->verticalHeaderItem(5);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget_4->verticalHeaderItem(6);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget_4->verticalHeaderItem(7);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget_4->verticalHeaderItem(8);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "Exporter", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "nom", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "id", nullptr));
        comboBox_4->setItemText(2, QString());
        comboBox_4->setItemText(3, QString());

        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_12), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "Commande", nullptr));
        pushButton_33->setText(QCoreApplication::translate("MainWindow", "Suivi commande", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_13), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Page", nullptr));
        label_12->setText(QString());
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("MainWindow", "id_equipement", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem52->setText(QCoreApplication::translate("MainWindow", "nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem53->setText(QCoreApplication::translate("MainWindow", "etat", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem54->setText(QCoreApplication::translate("MainWindow", "condistion", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem55->setText(QCoreApplication::translate("MainWindow", "prix", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget_5->horizontalHeaderItem(5);
        ___qtablewidgetitem56->setText(QCoreApplication::translate("MainWindow", "fournisseur", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget_5->horizontalHeaderItem(6);
        ___qtablewidgetitem57->setText(QCoreApplication::translate("MainWindow", "localisation", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget_5->horizontalHeaderItem(7);
        ___qtablewidgetitem58->setText(QCoreApplication::translate("MainWindow", "date-aquesition", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget_5->horizontalHeaderItem(8);
        ___qtablewidgetitem59->setText(QCoreApplication::translate("MainWindow", "date_dmaintenace", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget_5->horizontalHeaderItem(9);
        ___qtablewidgetitem60->setText(QCoreApplication::translate("MainWindow", "date_pmaintenace", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget_5->verticalHeaderItem(0);
        ___qtablewidgetitem61->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget_5->verticalHeaderItem(1);
        ___qtablewidgetitem62->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget_5->verticalHeaderItem(2);
        ___qtablewidgetitem63->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget_5->verticalHeaderItem(3);
        ___qtablewidgetitem64->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget_5->verticalHeaderItem(4);
        ___qtablewidgetitem65->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget_5->verticalHeaderItem(5);
        ___qtablewidgetitem66->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget_5->verticalHeaderItem(6);
        ___qtablewidgetitem67->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget_5->verticalHeaderItem(7);
        ___qtablewidgetitem68->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget_5->verticalHeaderItem(8);
        ___qtablewidgetitem69->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "Exporter", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "nom", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("MainWindow", "id", nullptr));
        comboBox_5->setItemText(2, QString());
        comboBox_5->setItemText(3, QString());

        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_14), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "DiagnostiUE et Reparation", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Faire un diagnostique", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Reparation", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Qrcode", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Generer un Qr code", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Scan un Qr code ", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_15), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
