#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include <QMainWindow>
#include"equipement.h"
#include<QTableView>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void exportTableViewToWord(QTableView *tableView);
    void exportTableViewToPDF(QTableView *tableView);
    //void exportTableViewToExcel(QTableView *tableView);
    void clear();

private slots:


    void on_pushButton_22_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_24_clicked();




    void on_lineEdit_5_textChanged();

    void on_comboBox_5_currentIndexChanged();
    void on_pushButton_23_clicked();

private:
    Ui::MainWindow *ui;
    equipement e;
   // equipement eq;
};
#endif // SECONDWINDOW_H
