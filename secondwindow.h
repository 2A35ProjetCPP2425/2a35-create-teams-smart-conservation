#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include <QTableView>  // Assurez-vous que cette ligne est incluse

#include <QMainWindow>
#include "personel.h"
#include"equipement.h"
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

private:
    Ui::MainWindow *ui;
    personel p;
    QLineEdit *lineEdit;  // Your QLineEdit
    QCompleter *completer;  // Declare QCompleter as a member
    QString useremail;
    equipement e;


};
#endif // SECONDWINDOW_H
