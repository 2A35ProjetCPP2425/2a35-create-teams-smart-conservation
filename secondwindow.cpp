 #include "secondwindow.h"
#include "ui_secondwindow.h"
#include"equipement.h"
#include<QMessageBox>
#include<QDate>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QAbstractItemModel>
#include<QSqlTableModel>
//#include <QAxObject>
using namespace  std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    ui->tableView->setModel(e.afficher());
    QAction *iconAction1 = new QAction(this);
    QIcon icon1(":/img/Screenshot_2024-10-08_134640-removebg-preview.png");
    iconAction1->setIcon(icon1);
    ui->tabWidget->setTabIcon(0, icon1);
    ui->tabWidget->setTabText(0, "client");
    QAction *iconAction2 = new QAction(this);
    QIcon icon2(":/img/Screenshot_2024-10-08_134706-removebg-preview.png");
    iconAction2->setIcon(icon2);
    ui->tabWidget->setTabIcon(1, icon2);
    ui->tabWidget->setTabText(1, "personnel");
    QAction *iconAction3 = new QAction(this);
    QIcon icon3(":/img/Screenshot_2024-10-08_134713-removebg-preview.png");
    iconAction3->setIcon(icon3);
    ui->tabWidget->setTabIcon(2, icon3);
    ui->tabWidget->setTabText(2, "Stock");
    QAction *iconAction4 = new QAction(this);
    QIcon icon4(":/img/Screenshot_2024-10-08_134859-removebg-preview.png");
    iconAction4->setIcon(icon4);
    ui->tabWidget->setTabIcon(3, icon4);
    ui->tabWidget->setTabText(3, "Commande");
    QAction *iconAction5 = new QAction(this);
    QIcon icon5(":/img/Screenshot_2024-10-08_134930-removebg-preview.png");
    iconAction5->setIcon(icon5);
    ui->tabWidget->setTabIcon(4, icon5);
    ui->tabWidget->setTabText(4, "Equipement");

    ui->tabWidget_2->setTabText(0, "Acceuil");
    ui->tabWidget_2->setTabText(1, "Fonctionalite");
    ui->prenom1->setPlaceholderText("prenom");

    ui->nom1->setPlaceholderText("nom");
    ui->matricule->setPlaceholderText("matricule");
    ui->DateE->setPlaceholderText("Date_Embauche");
    ui->poste->setPlaceholderText("poste");
    ui->salaire->setPlaceholderText("salaire");
    ui->mail->setPlaceholderText("mail");
    ui->telephone->setPlaceholderText("telephone");
    QAction *iconAction = new QAction(this);
    QIcon icon(":/img/Screenshot_2024-10-08_135113-removebg-preview.png");
    iconAction->setIcon(icon);
    ui->lineEdit->addAction(iconAction->icon(), QLineEdit::LeadingPosition);
    ui->lineEdit->setPlaceholderText("Rechercher");

    ui->tabWidget_3->setTabText(0,"Acceuil");
    ui->tabWidget_3->setTabText(1,"Fonctionalite");
    ui->id_client->setPlaceholderText("id");
    ui->nom1_2->setPlaceholderText("nom");
    ui->prenom1_2->setPlaceholderText("prenom");
    ui->email_2->setPlaceholderText("email");
    ui->adresse->setPlaceholderText("adresse");
    ui->H_achat->setPlaceholderText("Historique d'achat");
    iconAction->setIcon(icon);
    ui->lineEdit_2->addAction(iconAction->icon(), QLineEdit::LeadingPosition);
    ui->lineEdit_2->setPlaceholderText("Rechercher");

    ui->tabWidget_4->setTabText(0,"Acceuil");
    ui->tabWidget_4->setTabText(1,"Fonctionalite");
    ui->id_stock->setPlaceholderText("id");
    ui->nom1_3->setPlaceholderText("nom");
    ui->categorie->setPlaceholderText("categorie");
    ui->fournisseur->setPlaceholderText("fournisseur");
    ui->date_ex->setPlaceholderText("date-expedition");
    ui->dateaq->setPlaceholderText("date-aquesition");
    ui->condition_s->setPlaceholderText("condition stock");
    ui->quantite_disp->setPlaceholderText("quantite_disponible");
    ui->lineEdit_3->addAction(iconAction->icon(), QLineEdit::LeadingPosition);
    ui->lineEdit_3->setPlaceholderText("Rechercher");

    ui->tabWidget_5->setTabText(0,"Acceuil");
    ui->tabWidget_5->setTabText(1,"Fonctionalite");
    ui->id_commande->setPlaceholderText("id");
    ui->etat_commande->setPlaceholderText("etat_commande");
    ui->date_cimmande->setPlaceholderText("date_commande");
    ui->id_client->setPlaceholderText("id_client");
    ui->id_client_2->setPlaceholderText("id_client");
    ui->id_material->setPlaceholderText("id_material");
    ui->quantite_c->setPlaceholderText("quantite commande");
    ui->date_liv->setPlaceholderText("date_livraison");
    ui->lineEdit_4->addAction(iconAction->icon(), QLineEdit::LeadingPosition);
    ui->lineEdit_4->setPlaceholderText("Rechercher");

    ui->tabWidget_6->setTabText(0,"Acceuil");
    ui->tabWidget_6->setTabText(1,"Fonctionalite");
    ui->id_equipement->setPlaceholderText("id");
    ui->nom_e->setPlaceholderText("nom");
    ui->categorie_2->setPlaceholderText("categorie");
    ui->etat_eq->setPlaceholderText("etat");
    //ui->date_dm->setPlaceholderText("date_dernier_maintenace");
    //ui->date_pm->setPlaceholderText("date_prochain_maintenace");
    ui->prix->setPlaceholderText("prix");
    ui->par_suivi->setPlaceholderText("parametre_suivi");
    //ui->date_aquesition->setPlaceholderText("date-aquesition");
    ui->localisation_eq->setPlaceholderText("localisation");
    ui->fourniseureq->setPlaceholderText("fournisseur");
    ui->lineEdit_5->addAction(iconAction->icon(), QLineEdit::LeadingPosition);
    ui->lineEdit_5->setPlaceholderText("Rechercher");
    QIcon icon6(":/img/Screenshot_2024-10-09_092351-removebg-preview.png");
    iconAction->setIcon(icon6);
    ui->comboBox_6->addItem(icon6, "word");
    QIcon icon7(":/img/Screenshot_2024-10-09_093226-removebg-preview.png");
    iconAction->setIcon(icon7);
    ui->comboBox_6->addItem(icon7, "pdf");
    QIcon icon8(":/img/Screenshot_2024-10-09_093052-removebg-preview.png");
    iconAction->setIcon(icon8);

    ui->comboBox_6->addItem(icon8, "exel");

    ui->comboBox_7->addItem(icon6, "word");
    ui->comboBox_7->addItem(icon7, "pdf");
    ui->comboBox_7->addItem(icon8, "exel");
    ui->comboBox_8->addItem(icon6, "word");
    ui->comboBox_8->addItem(icon7, "pdf");
    ui->comboBox_8->addItem(icon8, "exel");
    ui->comboBox_9->addItem(icon6, "word");
    ui->comboBox_9->addItem(icon7, "pdf");
    ui->comboBox_9->addItem(icon8, "exel");
    ui->comboBox_10->addItem(icon6, "word");
    ui->comboBox_10->addItem(icon7, "pdf");
    ui->comboBox_10->addItem(icon8, "exel");


    ui->tableView->setModel(e.getTableModel(this));
    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);

}





void MainWindow::exportTableViewToPDF(QTableView *tableView) {
    QString fileName = QFileDialog::getSaveFileName(nullptr, "Save as PDF", "", "PDF Files (*.pdf);;All Files (*)");
    if (fileName.isEmpty()) {
        return;
    }

    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageOrientation(QPageLayout::Portrait);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    pdfWriter.setResolution(300);

    QPainter painter(&pdfWriter);

    QAbstractItemModel *model = tableView->model();

    int x = 10;   // Starting x position
    int y = 30;   // Starting y position
    int rowHeight = 100;
    int columnWidth = 250;

    // Set up font for the PDF
    QFont font = painter.font();
    font.setPointSize(5);
    painter.setFont(font);

    // Draw column headers
    for (int column = 0; column < model->columnCount(); ++column) {
        QRect rect(x + column * columnWidth, y, columnWidth, rowHeight);
        painter.drawText(rect, Qt::AlignCenter, model->headerData(column, Qt::Horizontal).toString());
        painter.drawRect(rect);
    }

    // Draw rows
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int column = 0; column < model->columnCount(); ++column) {
            QRect rect(x + column * columnWidth, y + (row + 1) * rowHeight, columnWidth, rowHeight);
            painter.drawText(rect, Qt::AlignCenter, model->data(model->index(row, column)).toString());
            painter.drawRect(rect);
        }
    }

    painter.end();
    QMessageBox::information(nullptr, "Export Complete", "Data has been exported to PDF successfully.");
}
//////// ////////////////////////////////////word////////////////////////////////////////
void MainWindow::exportTableViewToWord(QTableView *tableView) {
    QString fileName = QFileDialog::getSaveFileName(this, "Save as Word Document", "", "Word Files (*.docx);;All Files (*)");
    if (fileName.isEmpty()) {
        return;
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Unable to open file", file.errorString());
        return;
    }

    QTextStream out(&file);
    QAbstractItemModel *model = tableView->model();

    // Write headers
    for (int column = 0; column < model->columnCount(); ++column) {
        out << model->headerData(column, Qt::Horizontal).toString() << "\t";
    }
    out << "\n";

    // Write data rows
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int column = 0; column < model->columnCount(); ++column) {
            out << model->data(model->index(row, column)).toString() << "\t";
        }
        out << "\n";
    }

    file.close();
    QMessageBox::information(this, "Export Complete", "Data has been exported to Word successfully.");
}


/*void MainWindow::exportTableViewToExcel(QTableView *tableView) {
    QAxObject *excel = new QAxObject("Excel.Application");
    excel->setProperty("Visible", false);
    QAxObject *workbook = excel->querySubObject("Workbooks")->querySubObject("Add");
    QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1);

    QAbstractItemModel *model = tableView->model();

    // Write headers
    for (int column = 0; column < model->columnCount(); ++column) {
        QAxObject *cell = worksheet->querySubObject("Cells(int,int)", 1, column + 1);
        cell->setProperty("Value", model->headerData(column, Qt::Horizontal).toString());
    }

    // Write data rows
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int column = 0; column < model->columnCount(); ++column) {
            QAxObject *cell = worksheet->querySubObject("Cells(int,int)", row + 2, column + 1);
            cell->setProperty("Value", model->data(model->index(row, column)).toString());
        }
    }

    workbook->dynamicCall("SaveAs(const QString&)", QFileDialog::getSaveFileName(this, "Save as Excel File", "", "Excel Files (*.xlsx);;All Files (*)"));
    workbook->dynamicCall("Close()");
    excel->dynamicCall("Quit()");
    QMessageBox::information(this, "Export Complete", "Data has been exported to Excel successfully.");
}*/



void MainWindow::on_pushButton_22_clicked()
{

    int id_eq = ui->id_equipement->text().toInt();
    //e.setid(id_eq);
    QString nom = ui->nom_e->text();
    //e.setnom(nom);
    QString categorie = ui->categorie_2->text();
    //e.setcategorie(categorie);
    QString etat = ui->etat_eq->text();
    //e.setetat(etat);
   // QString date_aq_text = ui->date_aquesition->text();
    QDate Date_aq = ui->dateEdit->date();
    //e.setdatea(Date_aq);

    //QString date_d_text=ui->date_dm->text();
    QDate Date_D= ui->dateEdit_2->date();
    //e.setdated(Date_D);

   // QString date_p_text=ui->date_pm->text();
    QDate Date_P=ui->dateEdit_3->date();
    //e.setdatep(Date_P);
    QString fournisseur = ui->fourniseureq->text();
    //e.setfournisseur(fournisseur);
    QString localisation = ui->localisation_eq->text();
    //e.setlocalisation(localisation);
    double prix = ui->prix->text().toDouble();
    //e.setprix(prix);
    QString parametre_M = ui->par_suivi->text();
    //e.setparametre(parametre_M);
    equipement e(id_eq,nom,categorie,etat,fournisseur,localisation,parametre_M,Date_D,Date_P,Date_aq,prix);


    if (nom.isEmpty() || categorie.isEmpty() || etat.isEmpty() ||
          fournisseur.isEmpty() || localisation.isEmpty() ||
        prix <= 0 || parametre_M.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields must be filled correctly.");
        return;
    }
////////ajout////////////

    if (e.ajouter()){
        ui->tableView->setModel(e.afficher());
        clear();
        QMessageBox::information(this, "Success", "Equipment added successfully.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to add equipment.");
    }


}
///////////suppression//////////////
void MainWindow::on_pushButton_25_clicked()
{
    int id;
    if (ui->id_equipement->text().isEmpty()) {
        id = ui->lineEdit_5->text().toInt();
    } else {
        id = ui->id_equipement->text().toInt();
    }

    if (e.supprimer(id)) {

        ui->tableView->setModel(e.afficher());


        QMessageBox::information(this, "Success", "Equipment deleted successfully.");
    } else {

        QMessageBox::warning(this, "Error", "Failed to delete equipment.");
    }

}

void MainWindow::on_pushButton_24_clicked()
{
    int id;
    if (ui->id_equipement->text().isEmpty()) {
        id = ui->lineEdit_5->text().toInt();
    } else {
        id = ui->id_equipement->text().toInt();
    }
    //e.setid(id);
    QString nom = ui->nom_e->text();
    //e.setnom(nom);
    QString categorie = ui->categorie_2->text();
    //e.setcategorie(categorie);
    QString etat = ui->etat_eq->text();
    //e.setetat(etat);
   // QString date_aq_text = ui->date_aquesition->text();
    QDate Date_aq =ui->dateEdit->date();
   // e.setdatea(Date_aq);

    //QString date_d_text=ui->date_dm->text();
    QDate Date_D= ui->dateEdit_2->date();
    //e.setdated(Date_D);

    //QString date_p_text=ui->date_pm->text();
    QDate Date_P=ui->dateEdit_3->date();
    //e.setdatep(Date_P);
    QString fournisseur = ui->fourniseureq->text();
    //e.setfournisseur(fournisseur);
    QString localisation = ui->localisation_eq->text();
    //e.setlocalisation(localisation);
    double prix = ui->prix->text().toDouble();
    //e.setprix(prix);
    QString parametre_M = ui->par_suivi->text();
    //e.setparametre(parametre_M);
    equipement e(id,nom,categorie,etat,fournisseur,localisation,parametre_M,Date_D,Date_P,Date_aq,prix);
    if (e.modifier(id)) {

        ui->tableView->setModel(e.afficher());
        clear();

        QMessageBox::information(this, "Success", "Equipment modified successfully.");
    } else {

        QMessageBox::warning(this, "Error", "Failed to modify equipment.");
    }

}




void MainWindow::on_lineEdit_5_textChanged()
{
    QString partialId = ui->lineEdit_5->text();

    QSqlQueryModel* model = e.rechercher(partialId);
    if (model) {
        ui->tableView->setModel(model);
    } else {
        QMessageBox::warning(this, "Error", "Search failed.");
    }

}
void MainWindow::on_comboBox_5_currentIndexChanged()
{
    QString methode=ui->comboBox_5->currentText();
    QSqlQueryModel* model = e.trier(methode);
    ui->tableView->setModel(model);

}
void MainWindow::on_pushButton_23_clicked()
{
    QString exportFormat = ui->comboBox_10->currentText();

    if (exportFormat == "pdf") {
        exportTableViewToPDF(ui->tableView);
    } else if (exportFormat == "word") {
        exportTableViewToWord(ui->tableView);
        // } else if (exportFormat == "Excel") {
        //    exportTableViewToExcel(ui->tableView);
    } else {
        QMessageBox::warning(this, "Export", "Invalid export format selected.");
    }

}
void MainWindow::clear()
{

    ui->lineEdit_5->clear();
    ui->id_equipement->clear();
    ui->nom_e->clear();
    ui->categorie_2->clear();
    ui->etat_eq->clear();
    ui->dateEdit->clear();
    ui->dateEdit_2->clear();
    ui->dateEdit_3->clear();
    ui->fourniseureq->clear();
    ui->localisation_eq->clear();
    ui->prix->clear();
    ui->par_suivi->clear();

}
MainWindow::~MainWindow()
{
    delete ui;
}


















