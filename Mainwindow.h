#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "client.h"
#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QTableView>
#include <QTimer>

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




    void on_exporter_clicked();

    void on_pushButton_29_clicked();
    void on_pushButton_34_clicked();

    void on_pushButton_35_clicked();

private:
    Ui::MainWindow *ui;
    Client Etmp;
QTimer *searchTimer;
     QSqlTableModel *model;
void modifierClient();
void on_pushButton_12_clicked();
};

#endif // MAINWINDOW_H

