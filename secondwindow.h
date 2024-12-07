#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include <QTableView>  // Assurez-vous que cette ligne est incluse

#include <QMainWindow>
#include "personel.h"
#include"equipement.h"
#include"client.h"
#include"commande.h"
#include <QCompleter>
#include <QStringListModel>
#include <QListView>
#include <QStringListModel>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const QString &email, QWidget *parent = nullptr);
    ~MainWindow();
    void priviligae();
    void exportTableViewToWord(QTableView *tableView);
    void exportTableViewToPDF(QTableView *tableView);
    //void exportTableViewToExcel(QTableView *tableView);
    void clear();
    void createChart();
    void setupTableView();
    void on_tableView_clicked(const QModelIndex &index);
   void resetFields();
    void  setupConnections();
    void connectToDatabase();
    void updateClientData(QWidget *editor);
    bool ajouterCommande(int idcl, int idc);
    void modifierClient();

private slots:



    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_modifier_2_clicked();

    void on_ajouter_2_clicked();
    void on_ajouter_clicked();
    void on_supprimer_clicked();

   void on_afficher_clicked();

    void on_modifier_clicked();


    void on_lineEdit_textChanged(const QString &arg1);



    void on_modifier_3_clicked();
    //////////////////////////
    void on_pushButton_22_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_24_clicked();




    void on_lineEdit_5_textChanged();

    void on_comboBox_5_currentIndexChanged();
    void on_pushButton_23_clicked();



    void on_pushButton_3_clicked();

   // void on_pushButton_4_clicked();

    void on_pushButton_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_26_clicked();
    ///////////////////////////// client
   void on_pushButton_10_clicked();
        // Assurez-vous que cette ligne existe
    void on_pushButton_13_clicked();
    void on_charger_clicked();


    void on_comboBox_2_activated(int index);

    void on_lineEdit_2_textChanged(const QString &arg1);
   // void on_searchTimeout();




    void on_exporter_clicked();

    void on_pushButton_29_clicked();
    void on_pushButton_34_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();

    ///////////commande////////////
    void on_AjoutCo_clicked();

    void on_supco_clicked();

    //void on_pushButton_clicked();

    void on_Commandelist_activated(const QModelIndex &index);

    void on_chercherC_clicked();

    void on_statistique_clicked();

    //  void on_comboBox_activated(const QString &arg1);

    void on_exportpdf_clicked();

    void on_pushButton_18_clicked();

    void on_etatmodifier_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    ///

    void on_pushButton_19_clicked();

private:
    Ui::MainWindow *ui;
    personel p;
    QLineEdit *lineEdit;  // Your QLineEdit
    QCompleter *completer;  // Declare QCompleter as a member
    QString useremail;
    equipement e;
   Client Etmp;
    QTimer *searchTimer;
    QSqlTableModel *model;
    Commande CL;




};
#endif // SECONDWINDOW_H
//////////////////////////////////////////////

