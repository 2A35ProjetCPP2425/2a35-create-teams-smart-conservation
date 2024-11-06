#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QDate>
#include "personel.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
   // ui->setupUi(this);




    ui->setupUi(this);

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
    ui->lineEdit_id->setPlaceholderText("id");

    ui->lineEdit_nom->setPlaceholderText("nom");
    ui->lineEdit_prenom->setPlaceholderText("prenom");
    // ui->dateEdit->setPlaceholderText("Date_Embauche"); //
    ui->lineEdit_poste->setPlaceholderText("poste");
    ui->lineEdit_salaire->setPlaceholderText("salaire");
    ui->lineEdit_telephone->setPlaceholderText("telephone");
    ui->lineEdit_mail->setPlaceholderText("mail");



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
    ui->date_dm->setPlaceholderText("date_dernier_maintenace");
    ui->date_pm->setPlaceholderText("date_prochain_maintenace");
    ui->prix->setPlaceholderText("prix");
    ui->par_suivi->setPlaceholderText("parametre_suivi");
    ui->date_aquesition->setPlaceholderText("date-aquesition");
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
///////////////////////////////////////////////////////////////////////////////////////////////
    ui->comboBox_6->addItem(icon8, "exel");
    ///////////////////////////////////////
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
    ///
    ui->tableView->setModel(p.afficher());
}
void MainWindow::on_ajouter_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();
    QDate date = ui->dateEdit->date();
    QString poste = ui->lineEdit_poste->text();
    int salaire = ui->lineEdit_salaire->text().toInt();
    QString mail = ui->lineEdit_mail->text();
    int telephone = ui->lineEdit_telephone->text().toInt();


    // Instanciation d'un objet de la classe Client
    personel p(id, nom, prenom, date, poste, salaire, mail, telephone);

    // Appel de la méthode ajouter() pour insérer l'objet dans la base de données
    bool test = p.ajouter();

    // Affichage d'une boîte de dialogue en fonction du résultat
    if (test)
    {

        //ui->tableView->setModel(p.afficher());

        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Ajout effectué\n"
                                             "Click Cancel to exit."),
                                 QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n"
                                          "Click Cancel to exit."),
                              QMessageBox::Cancel);
    }
}




void MainWindow::on_supprimer_clicked()
{
    int id =ui->lineEdit_id->text().toInt();
    bool test=p.supprimer(id);

    if(test)
    {
        ui->tableView->setModel(p.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Suppression effectuee\n"
                                             "Click Cancel to exit ."), QMessageBox::Cancel);

    }


}
void MainWindow::on_afficher_clicked()
{
    // Créez une instance de la classe personel
    //personel p; // Assurez-vous que votre classe personel est correctement définie

    // Mettez à jour le modèle du QTableView avec les données
    ui->tableView->setModel(p.afficher()); // Appelle la méthode afficher de la classe personel

}






void MainWindow::on_modifier_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();
    QDate date = ui->dateEdit->date();
    QString poste = ui->lineEdit_poste->text();
    int salaire = ui->lineEdit_salaire->text().toInt();
    QString mail = ui->lineEdit_mail->text();
    int telephone = ui->lineEdit_telephone->text().toInt();


   // personel p(id, nom, prenom, date, poste, salaire, mail, telephone);


    p.setID(id);
    p.setNom(nom);
    p.setPrenom(prenom);
    p.setDate(date);
    p.setPoste(poste);
    p.setsalaire(salaire);
    p.setMail(mail);
    p.setTelephone(telephone);


    bool test = p.modifier(id);

    if (test)
    {
        ui->tableView->setModel(p.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Modification effectuée\n"
                                             "Click Cancel to exit."),
                                 QMessageBox::Cancel);
        ui->tableView->setModel(p.afficher());
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Modification non effectuée.\n"
                                          "Click Cancel to exit."),
                              QMessageBox::Cancel);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



