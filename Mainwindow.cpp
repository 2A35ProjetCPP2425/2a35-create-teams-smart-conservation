#include "Mainwindow.h"
#include "ui_Mainwindow.h"
#include "client.h"
#include <QMessageBox>
#include <QCoreApplication>
#include <QModelIndex>
#include <QVector>
#include <QDebug>
#include <QRegularExpression>
#include <QSortFilterProxyModel>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_12, &QPushButton::clicked, this, &MainWindow::on_pushButton_12_clicked);
    connect(ui->pushButton_10, &QPushButton::clicked, this, &MainWindow::on_pushButton_10_clicked);
    connect(ui->pushButton_13, &QPushButton::clicked, this, &MainWindow::on_pushButton_13_clicked);


    // Initialiser le comboBox_2 avec les options de tri

    // Connexion du signal pour détecter le changement dans comboBox_2
    connect(ui->comboBox_2, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &MainWindow::on_comboBox_2_activated);

    // Charger le modèle initialement sans tri
    ui->tableView_2->setModel(Etmp.afficher());











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
    ui->IDC_client->setPlaceholderText("ID commande");
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

#include <QMessageBox>

void MainWindow::on_pushButton_10_clicked() {
    // Récupération des données des champs
    QString nomcl = ui->nom1_2->text();
    QString prenomcl = ui->prenom1_2->text();
    QString emailcl = ui->email_2->text();
    QString adressecl = ui->adresse->text();
    QString histocl = ui->H_achat->text();

    // Vérification que idcl et IDC sont bien des entiers
    bool ok;
    int idcl = ui->id_client->text().toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Erreur de saisie", "L'ID Client doit être un nombre entier.");
        return;
    }

    int IDC = ui->IDC_client->text().toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Erreur de saisie", "L'IDC doit être un nombre entier.");
        return;
    }

    // Validation des champs nom et prénom pour ne contenir que des lettres
    auto isOnlyLetters = [](const QString &text) {
        return std::all_of(text.begin(), text.end(), [](QChar c) { return c.isLetter(); });
    };
    if (!isOnlyLetters(nomcl) || !isOnlyLetters(prenomcl)) {
        QMessageBox::warning(this, "Erreur de saisie", "Le nom et le prénom ne doivent contenir que des lettres.");
        return;
    }

    // Validation pour s'assurer que les champs email et adresse ne sont pas vides
    if (emailcl.isEmpty() || adressecl.isEmpty()) {
        QMessageBox::warning(this, "Erreur de saisie", "Les champs email et adresse ne peuvent pas être vides.");
        return;
    }

    // Si toutes les validations sont correctes, continuer avec l'ajout
    Client C(idcl, nomcl, prenomcl, emailcl, adressecl, histocl, IDC);
    bool test = C.ajouter();
    if (test) {
        ui->tableView_2->setModel(Etmp.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"), QObject::tr("Ajout effectué\nClick cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("not ok"), QObject::tr("Ajout non effectué.\nClick cancel to exit."), QMessageBox::Cancel);
    }
    resetFields();
}




void MainWindow::on_pushButton_12_clicked() {
    int idcl = ui->id_client->text().toInt();
    if (idcl == 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer l'ID du client à modifier.");
        return;
    }

    // Retrieve values from fields
    QString nomcl = ui->nom1_2->text();
    QString prenomcl = ui->prenom1_2->text();
    QString emailcl = ui->email_2->text();
    QString adressecl = ui->adresse->text();
    QString histocl = ui->H_achat->text();
    int IDC = ui->IDC_client->text().isEmpty() ? -1 : ui->IDC_client->text().toInt();

    // Create Client object with only the ID
    Client client(idcl);

    // Call modifierClient to update the fields that are not empty
    bool success = client.modifierClient(idcl, nomcl, prenomcl, emailcl, adressecl, histocl, IDC);

    // Handle success or failure
    if (success) {
        ui->tableView_2->setModel(Etmp.afficher());  // Refresh the view
        QMessageBox::information(this, "Succès", "Client modifié avec succès !");
    } else {
        QMessageBox::warning(this, "Erreur", "La modification a échoué.");
    }

    resetFields();  // Reset fields after update
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

void MainWindow::on_charger_clicked()
{
    // Récupérer l'ID client depuis le QLineEdit
    int idClient = ui->id_client->text().toInt(); // ID du client saisi dans QLineEdit

    // Créer un objet Client avec l'ID
    Client client(idClient);

    // Créer une requête pour récupérer les informations du client depuis la base de données
    QSqlQuery query;
    query.prepare("SELECT * FROM CLIENT WHERE IDCL = :id"); // Remplacez 'CLIENT' par votre nom de table réel
    query.bindValue(":id", idClient);

    if (query.exec()) {
        // Si la requête a réussi, vérifier si un client avec cet ID existe
        if (query.next()) {
            // Récupérer les données du client
            QString nom = query.value("NOMCL").toString();
            QString prenom = query.value("PRENOMCL").toString();
            QString email = query.value("EMAILCL").toString();
            QString adresse = query.value("ADRESSECL").toString();
            QString histo = query.value("HISTOCL").toString();
            int idc = query.value("IDC").toInt();

            // Assigner les données récupérées à l'objet Client
            client.setnomcl(nom);
            client.setprenomcl(prenom);
            client.setemailcl(email);
            client.setadressecl(adresse);
            client.sethistocl(histo);
            client.setIDC(idc);

            // Remplir les QLineEdit avec les données du client
            ui->nom1_2->setText(client.getnomcl());
            ui->prenom1_2->setText(client.getprenomcl());
            ui->email_2->setText(client.getemailcl());
            ui->adresse->setText(client.getadressecl());
            ui->H_achat->setText(client.gethistocl());
            ui->IDC_client->setText(QString::number(client.getIDC()));
        } else {
            // Si aucun client n'a été trouvé avec cet ID
            QMessageBox::warning(this, "Erreur", "Aucun client trouvé avec cet ID.");
        }
    } else {
        // Si la requête échoue
        QMessageBox::critical(this, "Erreur SQL", query.lastError().text());
    }
}




void MainWindow::on_comboBox_2_activated(int index)
{
    // Créer un proxy de tri pour manipuler le tri de tableView_2
    QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(Etmp.afficher());

    // Déterminer la colonne à trier : 0 pour ID, 1 pour Nom
    if (index == 0) {
        proxyModel->sort(0, Qt::AscendingOrder);  // Tri par ID
    } else if (index == 1) {
        proxyModel->sort(1, Qt::AscendingOrder);  // Tri par Nom
    }

    // Appliquer le modèle trié au tableView
    ui->tableView_2->setModel(proxyModel);
}



/*void MainWindow::on_exporter_clicked()
{

}
*/
