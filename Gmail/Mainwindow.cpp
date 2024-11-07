#include "Mainwindow.h"
#include "ui_Mainwindow.h"
#include "client.h"
#include <QMessageBox>
#include <QCoreApplication>
#include <QModelIndex>
#include <QVector>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_12, &QPushButton::clicked, this, &MainWindow::on_pushButton_12_clicked);
    connect(ui->pushButton_10, &QPushButton::clicked, this, &MainWindow::on_pushButton_10_clicked);
    connect(ui->pushButton_13, &QPushButton::clicked, this, &MainWindow::on_pushButton_13_clicked);
    connect(ui->pushButton_12, &QPushButton::clicked, this, &MainWindow::on_pushButton_12_clicked);

    connect(ui->tableView_2, &QTableView::clicked, this, &MainWindow::on_tableView_clicked);
    ui->tableView_2->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::EditKeyPressed);

    ui->tableView_2->setModel(Etmp.afficher());
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
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_10_clicked() {
    int idcl = ui->id_client->text().toInt();
    QString nomcl = ui->nom1_2->text();
    QString prenomcl = ui->prenom1_2->text();
    QString emailcl = ui->email_2->text();
    QString adressecl = ui->adresse->text();
    QString histocl = ui->H_achat->text();
    int IDC = ui->IDC_client->text().toInt();
    Client C(idcl, nomcl, prenomcl, emailcl, adressecl, histocl, IDC);
    bool test = C.ajouter();
    if (test) {
        ui->tableView_2->setModel(Etmp.afficher());
                QMessageBox::information(nullptr, QObject::tr("ok"), QObject::tr("Ajout effectué\nClick cancel to exit."), QMessageBox::Cancel);
        resetFields();
    } else {
        QMessageBox::critical(nullptr, QObject::tr("not ok"), QObject::tr("Ajout non effectué.\nClick cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_pushButton_12_clicked() {
    // Vérifier que tous les champs nécessaires sont remplis
    if (ui->id_client->text().isEmpty() || ui->nom1_2->text().isEmpty() || ui->prenom1_2->text().isEmpty() ||
        ui->email_2->text().isEmpty() || ui->adresse->text().isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs.");
        return;
    }

    // Récupérer les valeurs des champs
    int idcl = ui->id_client->text().toInt();
    QString nomcl = ui->nom1_2->text();
    QString prenomcl = ui->prenom1_2->text();
    QString emailcl = ui->email_2->text();
    QString adressecl = ui->adresse->text();
    QString histocl = ui->H_achat->text();
    int IDC = ui->IDC_client->text().toInt();

    // Créer un objet Client
    Client client(idcl, nomcl, prenomcl, emailcl, adressecl, histocl, IDC);

    // Appeler la fonction modifierClient pour effectuer la modification
    bool test = client.modifierClient(idcl, nomcl, prenomcl, emailcl, adressecl, histocl, IDC);

    // Vérifier si la modification a réussi
    if (test) {
        ui->tableView_2->setModel(Etmp.afficher());  // Actualiser la vue
        QMessageBox::information(this, "Succès", "Client modifié avec succès !");
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la modification du client.");
    }
}


void MainWindow::on_pushButton_13_clicked() {
    int idcl = ui->id_client->text().toInt();
    bool test = Etmp.supprimer(idcl);
    if (test) {
        ui->tableView_2->setModel(Etmp.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"), QObject::tr("Suppression effectuée\nClick cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("not ok"), QObject::tr("Suppression non effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_tableView_clicked(const QModelIndex &index) {
    if (!index.isValid()) {
        qDebug() << "Index non valide.";
        return;
    }

    // Récupérer l'ID du client à partir du modèle de la table
    int idcl = ui->tableView_2->model()->data(ui->tableView_2->model()->index(index.row(), 0)).toInt();

    // Créer une boîte de dialogue pour demander si l'utilisateur veut modifier ou supprimer
    QMessageBox msgBox(this);
    msgBox.setWindowTitle("Action sur le client");
    msgBox.setText("Voulez-vous modifier ou supprimer ce client ?");

    // Ajouter des boutons personnalisés
    QPushButton *modifierButton = msgBox.addButton("Modifier", QMessageBox::YesRole);
    QPushButton *supprimerButton = msgBox.addButton("Supprimer", QMessageBox::NoRole);
    QPushButton *annulerButton = msgBox.addButton("Annuler", QMessageBox::RejectRole);

    msgBox.exec();

    if (msgBox.clickedButton() == modifierButton) {
        // Appeler la méthode de modification
        on_pushButton_12_clicked(); // L'appel ici pour déclencher la modification
    } else if (msgBox.clickedButton() == supprimerButton) {
        Client client;
        bool success = client.supprimer(idcl);
        if (success) {
            ui->tableView_2->setModel(Etmp.afficher());
            QMessageBox::information(this, "Succès", "Client supprimé de la base de données !");
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression du client.");
        }
    } else if (msgBox.clickedButton() == annulerButton) {
        qDebug() << "Action annulée.";
    }
}



void MainWindow::resetFields() {
    // Remplacez ces noms par les identifiants de vos QLineEdit
    ui->id_client->clear();
    ui->nom1_2->clear();
    ui->prenom1_2->clear();
    ui->email_2->clear();
    ui->adresse->clear();
    ui->H_achat->clear();
    ui->IDC_client->clear();
}
