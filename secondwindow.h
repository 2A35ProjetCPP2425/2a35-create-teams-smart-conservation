#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include <QMainWindow>
#include"equipement.h"
#include"arduino.h"
#include<QTableView>
//#include <opencv2/opencv.hpp>


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
    void createChart();
    void updateDatabase(const QString &movementStatus);
   // void readArduinoData();
    void sendDataToArduino(const QString &data);

private slots:

    void update_label();
    void on_pushButton_22_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_24_clicked();




    void on_lineEdit_5_textChanged();

    void on_comboBox_5_currentIndexChanged();
    void on_pushButton_23_clicked();



    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();
    void on_pushButton_5_clicked();

   // void on_pushButton_2_clicked();

   // void on_pushButton_26_clicked();

private:
    Ui::MainWindow *ui;
    equipement e;
   // equipement eq;
    QByteArray data;
    Arduino A;
};
#endif // SECONDWINDOW_H
