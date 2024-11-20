#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include "stock.h"
#include <QMainWindow>
#include <QSystemTrayIcon>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT



public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_14_clicked();

    void on_pushButton_17_clicked();
    void on_pushButton_16_clicked();

   void on_IDR_textChanged();
   void on_pushButton_15_clicked();


  // void on_QRCode_clicked();
 //  void checkExpirationDates();
  // void startAutomaticExpirationCheck();
   void on_pushButton_32_clicked();
   void on_comboBox_3_currentIndexChanged();
   void checkExpirationAndNotify();


  void displayCategoryStatistics();
 // void checkExpirationAndNotify();
  //QString getImagePathForProduct(const QString &productName);
  //void afficherImagesDesProduits();
  //void on_genererImageButton_clicked();

private:
    void drawPieChart(const QMap<QString, double>& statistiques);


private:
    Ui::MainWindow *ui;
    stock Stmp;

    class QRCodeGenerator {
    public:
        static QImage generateQRCode(const QString &data);  // Méthode statique pour générer le QR code
    };




};

#endif // SECONDWINDOW_H
