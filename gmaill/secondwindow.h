#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include <QTableView>  // Assurez-vous que cette ligne est incluse

#include <QMainWindow>
#include "personel.h"
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
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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

private:
    Ui::MainWindow *ui;
    personel p;
    QLineEdit *lineEdit;  // Your QLineEdit
        QCompleter *completer;  // Declare QCompleter as a member


};
#endif // SECONDWINDOW_H
