#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include "personel.h"

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

    void on_ajouter_clicked();



    void on_supprimer_clicked();


   void on_afficher_clicked();

    void on_modifier_clicked();

private:
    Ui::MainWindow *ui;
    personel p;


};
#endif // SECONDWINDOW_H
