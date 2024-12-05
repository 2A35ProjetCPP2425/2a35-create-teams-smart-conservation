#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "client.h"
#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QTableView>
#include <QTimer>
#include "arduino.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow(); // Déclaration du destructeur
    void setupTableView();
     void on_tableView_clicked(const QModelIndex &index);
    void resetFields();
     void  setupConnections();
    void connectToDatabase();
     void updateClientData(QWidget *editor);

private slots:
    void on_pushButton_10_clicked();
     // Assurez-vous que cette ligne existe
    void on_pushButton_13_clicked();
    void on_charger_clicked();


    void on_comboBox_2_activated(int index);



    void on_lineEdit_2_textChanged(const QString &arg1);
    void on_searchTimeout();



    void update_label();




    void on_exporter_clicked();

    void on_pushButton_29_clicked();
    void on_pushButton_34_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_11_clicked();
    bool ajouterCommande(int idcl, int idc);
    /////////////////////////////////////////



    void onWeightDetected(const double weight);

    void on_pushButton_Ajouter_clicked();

private:
    Ui::MainWindow *ui;
    Client Etmp;
QTimer *searchTimer;
     QSqlTableModel *model;
void modifierClient();
void on_pushButton_12_clicked();
bool weightDetected = false;




QByteArray data; // variable contenant les données reçues

Arduino A; // objet temporaire


};

#endif // MAINWINDOW_H

