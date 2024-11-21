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
#include <QPainter>
#include <QPdfWriter>
#include <QFileDialog>
#include <QTimer>
#include <QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QRectF>  // Pour utiliser QRectF
#include <QRect>
#include <QStandardItemModel>
#include <QtCharts>
#include <QRegularExpression>












#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      searchTimer(new QTimer(this))  // Initialiser searchTimer ici
{

    ui->setupUi(this);

    // Connexions des boutons
    connect(ui->pushButton_12, &QPushButton::clicked, this, &MainWindow::on_pushButton_12_clicked);
    connect(ui->pushButton_10, &QPushButton::clicked, this, &MainWindow::on_pushButton_10_clicked);
    connect(ui->pushButton_13, &QPushButton::clicked, this, &MainWindow::on_pushButton_13_clicked);

    // Connexion du timer
    searchTimer->setInterval(500);  // Attendre 500 ms après la dernière frappe
    connect(searchTimer, &QTimer::timeout, this, &MainWindow::on_searchTimeout);

    // Initialiser le comboBox_2 avec les options de tri
    connect(ui->comboBox_2, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &MainWindow::on_comboBox_2_activated);

    // Charger le modèle initialement sans tri
    ui->tableView_2->setModel(Etmp.afficher());



    connect(ui->pushButton_29, &QPushButton::clicked, this, &MainWindow::on_pushButton_29_clicked);












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

    ui->statistique->setTabText(0,"Acceuil");
    ui->statistique->setTabText(1,"Fonctionalite");
    ui->statistique->setTabText(2,"statistiques");
    ui->statistique->setTabText(3,"Historique");
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
    QIcon icon6(":/img/Screenshot_2024-10-09_093226-removebg-preview.png");
    iconAction->setIcon(icon6);
    ui->comboBox_6->addItem(icon6, "pdf");
    QIcon icon7(":/img/Screenshot_2024-10-09_092351-removebg-preview.png");
    iconAction->setIcon(icon7);
    ui->comboBox_6->addItem(icon7, "word");

    QIcon icon8(":/img/Screenshot_2024-10-09_093052-removebg-preview.png");
    iconAction->setIcon(icon8);
    ui->comboBox_6->addItem(icon8, "exel");
    ///////////////////////////////////////
    ui->comboBox_7->addItem(icon6, "pdf");
    ui->comboBox_7->addItem(icon7, "word");
    ui->comboBox_7->addItem(icon8, "exel");
    ui->comboBox_8->addItem(icon6, "pdf");
    ui->comboBox_8->addItem(icon7, "word");
    ui->comboBox_8->addItem(icon8, "exel");
    ui->comboBox_9->addItem(icon6, "pdf");
    ui->comboBox_9->addItem(icon7, "word");
    ui->comboBox_9->addItem(icon8, "exel");
    ui->comboBox_10->addItem(icon6, "pdf");
    ui->comboBox_10->addItem(icon7, "word");
    ui->comboBox_10->addItem(icon8, "exel");
}

MainWindow::~MainWindow() {
    delete ui;
}


/*
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
        resetFields();
        return;
    }

    int IDC = ui->IDC_client->text().toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Erreur de saisie", "L'IDC doit être un nombre entier.");
        resetFields();
        return;
    }

    // Validation des champs nom et prénom pour ne contenir que des lettres
    auto isOnlyLetters = [](const QString &text) {
        return std::all_of(text.begin(), text.end(), [](QChar c) { return c.isLetter(); });
    };
    if (!isOnlyLetters(nomcl) || !isOnlyLetters(prenomcl)) {
        QMessageBox::warning(this, "Erreur de saisie", "Le nom et le prénom ne doivent contenir que des lettres.");
        resetFields();
        return;
    }

    // Validation pour s'assurer que les champs email et adresse ne sont pas vides
    if (emailcl.isEmpty() || adressecl.isEmpty()) {
        QMessageBox::warning(this, "Erreur de saisie", "Les champs email et adresse ne peuvent pas être vides.");
        resetFields();
        return;
    }

    // Si toutes les validations sont correctes, continuer avec l'ajout
    Client C(idcl, nomcl, prenomcl, emailcl, adressecl, histocl,IDC);
    bool test = C.ajouter();
    if (test) {
        ui->tableView_2->setModel(Etmp.afficher());
        QMessageBox::information(nullptr, QObject::tr("ok"), QObject::tr("Ajout effectué\nClick cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("not ok"), QObject::tr("Ajout non effectué.\nClick cancel to exit."), QMessageBox::Cancel);
    }

    // Réinitialiser les champs après l'ajout
    resetFields();
}

*/

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
        resetFields();
        return;
    }

    int IDC = ui->IDC_client->text().toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Erreur de saisie", "L'IDC doit être un nombre entier.");
        resetFields();
        return;
    }

    // Validation des champs nom et prénom pour ne contenir que des lettres
    auto isOnlyLetters = [](const QString &text) {
        return std::all_of(text.begin(), text.end(), [](QChar c) { return c.isLetter(); });
    };
    if (!isOnlyLetters(nomcl) || !isOnlyLetters(prenomcl)) {
        QMessageBox::warning(this, "Erreur de saisie", "Le nom et le prénom ne doivent contenir que des lettres.");
        resetFields();
        return;
    }

    // Validation pour s'assurer que les champs email et adresse ne sont pas vides
    if (emailcl.isEmpty() || adressecl.isEmpty()) {
        QMessageBox::warning(this, "Erreur de saisie", "Les champs email et adresse ne peuvent pas être vides.");
        resetFields();
        return;
    }

    // Si toutes les validations sont correctes, continuer avec l'ajout du client
    Client C(idcl, nomcl, prenomcl, emailcl, adressecl, histocl, IDC);

    // Appel de la méthode pour ajouter le client dans la base de données (sans vérifier l'unicité)
    bool test = C.ajouter();  // Cette méthode doit simplement insérer sans vérifier les doublons
    if (test) {
        // Actualisation de l'affichage dans la table
        ui->tableView_2->setModel(Etmp.afficher());  // Rafraîchissement de la vue
        QMessageBox::information(nullptr, QObject::tr("Ajout effectué"), QObject::tr("Client ajouté.\nClick cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("Ajout non effectué.\nClick cancel to exit."), QMessageBox::Cancel);
    }

    // Réinitialiser les champs après l'ajout
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




void MainWindow::on_comboBox_2_activated(int index) // Tri
{
    // Définir une variable pour stocker la méthode de tri et la direction
    QString colonne;
    QString direction;

    // Déterminer la colonne et la direction de tri en fonction de l'index sélectionné dans comboBox_2
    switch(index) {
    case 0:
        colonne = "idcl";  // Tri par IDCL
        direction = "ASC"; // ID croissant
        break;
    case 1:
        colonne = "nomcl";  // Tri par NOMCL
        direction = "ASC";  // Nom A-Z
        break;
    case 2:
        colonne = "nomcl";  // Tri par NOMCL
        direction = "DESC"; // Nom Z-A
        break;
    case 3:
        colonne = "idcl";   // Tri par IDCL
        direction = "ASC"; // ID croissant
        break;
    case 4:
        colonne = "datecl";  // Tri par DATECL
        direction = "ASC";   // Date croissante (du plus ancien au plus récent)
        break;
    case 5:
        colonne = "datecl";  // Tri par DATECL
        direction = "DESC";  // Date décroissante (du plus récent au plus ancien)
        break;
    default:
        // Par défaut : trier par IDCL croissant
        colonne = "idcl";
        direction = "ASC";
        break;
    }

    // Appeler la méthode trier pour obtenir le modèle trié
    QSqlQueryModel* model = Etmp.trier(colonne, direction);

    // Vérifier si le modèle est valide
    if (model) {
        // Mettre à jour le modèle de la tableView
        ui->tableView_2->setModel(model);
    } else {
        // Si le modèle est invalide, afficher un message d'erreur
        QMessageBox::warning(this, "Erreur", "Échec du tri des données.");
    }
}




void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    QString partialId = ui->lineEdit_2->text().trimmed();  // Assurez-vous que le texte est correctement récupéré

    // Si le champ de recherche est vide, ne pas effectuer de recherche
    if (partialId.isEmpty()) {
        ui->tableView_2->setModel(nullptr);  // Si rien n'est recherché, on vide le modèle de la table
        return;
    }

    // Si le texte a changé, on arrête le timer et on redémarre pour une nouvelle recherche après le délai
    searchTimer->stop();
    searchTimer->start();  // Démarre le timer pour attendre un délai avant la recherche
}

void MainWindow::on_searchTimeout()
{
    QString partialId = ui->lineEdit_2->text().trimmed();

    // Si le champ de recherche est toujours non vide, effectuer la recherche
    if (!partialId.isEmpty()) {
        QSqlQueryModel* model = Etmp.rechercher(partialId);
        if (model) {
            ui->tableView_2->setModel(model);
        } else {
            QMessageBox::warning(this, "Error", "Search failed.");
        }
    }
}




















/*
void MainWindow::on_exporter_clicked()
{
    // Ouvrir une boîte de dialogue pour choisir l'emplacement et le nom du fichier PDF
    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer en tant que PDF", "", "Fichiers PDF (*.pdf);;Tous les fichiers (*)");
    if (fileName.isEmpty()) {
        return;
    }

    // Créer un QPdfWriter pour générer le PDF
    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageOrientation(QPageLayout::Portrait);
    pdfWriter.setPageSize(QPageSize(QPageSize::A3)); // Augmenter la taille de la page à A3
    pdfWriter.setResolution(300);

    // Créer un QPainter pour dessiner dans le PDF
    QPainter painter(&pdfWriter);

    // Obtenir le modèle de données de la table
    QAbstractItemModel *model = ui->tableView_2->model();
    if (!model) {
        QMessageBox::warning(this, "Erreur", "Aucune donnée à exporter.");
        return;
    }

    int x = 10;   // Position X de départ (ajustée pour A3)
    int y = 100;   // Position Y de départ
    int rowHeight = 60;  // Hauteur des lignes (réduite)
    int columnWidth = 350;  // Largeur des colonnes (réduite pour mieux s'adapter à la page A3)

    // Définir une police plus petite pour le texte
    QFont font = painter.font();
    font.setPointSize(7);  // Réduire la taille de la police à 8 points pour améliorer la lisibilité
    painter.setFont(font);

    // Appliquer une couleur de fond pour l'en-tête des colonnes
    painter.setBrush(QBrush(Qt::darkGreen));  // Fond léger pour l'en-tête des colonnes
    painter.setPen(Qt::green);

    // Dessiner les en-têtes des colonnes
    for (int column = 0; column < model->columnCount(); ++column) {
        QRect rect(x + column * columnWidth, y, columnWidth, rowHeight);
        painter.drawRect(rect);  // Dessiner la bordure de la cellule
        painter.drawText(rect, Qt::AlignCenter, model->headerData(column, Qt::Horizontal).toString());
    }

    y += rowHeight;  // Déplacer la position Y après les en-têtes

    // Appliquer une couleur de fond différente pour chaque ligne de données
    painter.setBrush(QBrush(Qt::white));  // Fond blanc pour les lignes de données
    painter.setPen(QPen(Qt::black));  // Bordure noire

    // Dessiner les lignes de données
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int column = 0; column < model->columnCount(); ++column) {
            QRect rect(x + column * columnWidth, y + (row) * rowHeight, columnWidth, rowHeight);
            painter.drawRect(rect);  // Dessiner la bordure de la cellule
            painter.drawText(rect, Qt::AlignCenter, model->data(model->index(row, column)).toString());
        }
    }

    // Ajouter un titre ou un logo en haut du PDF
    painter.setPen(QPen(QColor(0, 128, 0)));  // Définir la couleur du texte en vert foncé (RGB: 0, 128, 0)
    font.setPointSize(24);  // Augmenter la taille du titre pour le haut du PDF
    painter.setFont(font);
    painter.drawText(700, 50, "Données Exportées:");  // Ajouter un titre

    // Ajouter un logo ou une image dans le coin supérieur droit
    QPixmap logo("C:/Users/youss/Downloads/Gmail/logo.png");
    painter.drawPixmap(3200,-50,150, 150, logo);  // Dessiner l'image à une taille appropriée

    // Terminer l'impression
    painter.end();

    // Afficher un message de confirmation
    QMessageBox::information(this, "Exportation réussie", "Les données ont été exportées vers un fichier PDF avec succès.");
}


*/




void MainWindow::on_pushButton_34_clicked() // Statistique
{
    // Préparer la requête SQL pour obtenir les statistiques des IDC
    QSqlQuery query;
    query.prepare("SELECT IDC, COUNT(*) AS count FROM CLIENT GROUP BY IDC");

    if (query.exec()) {
        // Préparer une requête pour récupérer le nombre total de clients
        QSqlQuery totalQuery;
        totalQuery.prepare("SELECT COUNT(*) AS total FROM CLIENT");

        if (totalQuery.exec() && totalQuery.next()) {
            int totalClients = totalQuery.value("total").toInt();

            if (totalClients > 0) {
                // Créer une série pour le graphique circulaire
                QPieSeries *series = new QPieSeries();

                // Définir un tableau de couleurs plus attrayantes et harmonieuses
                QList<QColor> colors = {
                    QColor("#A8D0E6"),  // Bleu pastel
                    QColor("#FF6B6B"),  // Corail doux
                    QColor("#6B8E23"),  // Vert d'eau
                    QColor("#B39DDB"),  // Lavande
                    QColor("#FFBC42"),  // Pêche clair
                    QColor("#40E0D0")   // Turquoise clair
                };

                // Récupérer les résultats de la requête
                int colorIndex = 0; // Pour alterner entre les couleurs du tableau
                while (query.next()) {
                    int idc = query.value("IDC").toInt();
                    int count = query.value("count").toInt();
                    double percentage = (static_cast<double>(count) / totalClients) * 100.0;

                    // Ajouter une part au diagramme
                    QPieSlice *slice = series->append(QString("IDC: %1 (%2%)")
                                                          .arg(idc)
                                                          .arg(QString::number(percentage, 'f', 2)),
                                                      count);

                    // Personnalisation des tranches
                    slice->setLabelVisible(true);
                    slice->setPen(QPen(Qt::black, 1));  // Définir le contour en noir

                    // Assigner une couleur différente à chaque tranche
                    slice->setBrush(colors.at(colorIndex % colors.size())); // Alterne les couleurs
                    colorIndex++; // Passer à la couleur suivante

                    if (percentage > 50.0) {
                        slice->setExploded(true);  // Mettre en évidence les grandes parts
                    }
                }

                // Créer un graphique
                QChart *chart = new QChart();
                chart->addSeries(series);
                chart->setTitle("L'ID de commande les plus demandés");
                chart->legend()->setVisible(true);
                chart->legend()->setAlignment(Qt::AlignBottom);

                // Créer un QChartView pour afficher le graphique
                QChartView *chartView = new QChartView(chart);
                chartView->setRenderHint(QPainter::Antialiasing);

                // Afficher le graphique dans un conteneur (par exemple, un QVBoxLayout dans votre `groupBox_11`)
                QLayout *layout = ui->groupBox_11->layout();
                if (layout) {
                    // Nettoyer les anciens widgets s'il y en a
                    QLayoutItem *item;
                    while ((item = layout->takeAt(0)) != nullptr) {
                        delete item->widget();
                        delete item;
                    }
                } else {
                    layout = new QVBoxLayout(ui->groupBox_11);
                    ui->groupBox_11->setLayout(layout);
                }

                layout->addWidget(chartView);

                // Rendre visible le groupBox_11
                ui->groupBox_11->setVisible(true);
            } else {
                QMessageBox::information(this, "Information", "Aucun client trouvé.");
            }
        } else {
            QMessageBox::critical(this, "Erreur", "Impossible de récupérer le nombre total de clients : " + totalQuery.lastError().text());
        }
    } else {
        // Gérer les erreurs SQL
        QMessageBox::critical(this, "Erreur", "Impossible de récupérer les statistiques des IDC : " + query.lastError().text());
    }
}




void MainWindow::on_pushButton_35_clicked()
{
    // Créer un modèle pour afficher les résultats de la requête
    QSqlQueryModel *model = new QSqlQueryModel(this);

    // Préparer la requête SQL pour récupérer les informations souhaitées
    QSqlQuery query;
    query.prepare(
        "SELECT IDCL AS \"ID Client\", NOMCL AS \"Nom\", PRENOMCL AS \"Prénom\", "
        "TO_CHAR(DATECL, 'YYYY-MM-DD HH24:MI:SS') AS \"Date et Heure d'ajout\" "
        "FROM CLIENT "
        "ORDER BY IDCL ASC"
        );

    // Exécuter la requête
    if (query.exec()) {
        // Assigner le modèle avec les résultats de la requête SQL
        model->setQuery(query);

        // Vérifier si la requête a retourné des résultats
        if (model->rowCount() > 0) {
            // Affecter le modèle à la vue tableView_3
            ui->tableView_3->setModel(model);

            // Ajuster la taille des colonnes
            ui->tableView_3->resizeColumnsToContents();

            // Sélection par ligne
            ui->tableView_3->setSelectionBehavior(QAbstractItemView::SelectRows);

            // Sélection unique
            ui->tableView_3->setSelectionMode(QAbstractItemView::SingleSelection);

            // Étendre la dernière colonne pour remplir la vue
            ui->tableView_3->horizontalHeader()->setStretchLastSection(true);
        } else {
            // Si aucune donnée n'est récupérée, afficher un message
            QMessageBox::information(this, "Aucune donnée", "Aucun client trouvé.");
        }
    } else {
        // Si la requête échoue, afficher un message d'erreur
        QMessageBox::critical(this, "Erreur", "Impossible de récupérer les données des clients : " + query.lastError().text());
    }
}




void MainWindow::on_pushButton_29_clicked() {
    QSqlQueryModel *queryModel = new QSqlQueryModel(this);

    // Requête SQL pour sélectionner IDCL, NOMCL, PRENOMCL et COMMANDEPREFEREE
    queryModel->setQuery("SELECT IDCL, NOMCL, PRENOMCL, COMMANDEPREFEREE FROM CLIENT");

    if (queryModel->lastError().isValid()) {
        qDebug() << "Erreur de requête modèle :" << queryModel->lastError();
        return;
    }

    // Associer le modèle à la vue
    ui->tableView->setModel(queryModel);

    // Ajuster la vue
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    qDebug() << "Modèle chargé avec succès";
}



/*

void MainWindow::on_exporter_clicked()
{
    // Ouvrir une boîte de dialogue pour choisir l'emplacement et le nom du fichier PDF
    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer en tant que PDF", "", "Fichiers PDF (*.pdf);;Tous les fichiers (*)");
    if (fileName.isEmpty()) {
        return;
    }

    // Créer un QPdfWriter pour générer le PDF
    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageOrientation(QPageLayout::Portrait);
    pdfWriter.setPageSize(QPageSize(QPageSize::A3)); // Augmenter la taille de la page à A3
    pdfWriter.setResolution(300);

    // Créer un QPainter pour dessiner dans le PDF
    QPainter painter(&pdfWriter);

    // Appliquer un fond de couleur vert clair à toute la page
    painter.setBrush(QBrush(QColor(144, 238, 144)));  // Vert clair en RGB
    painter.setPen(Qt::NoPen);  // Pas de bordure pour l'arrière-plan
    painter.drawRect(0, 0, pdfWriter.width(), pdfWriter.height());  // Dessiner le fond sur toute la page

    // Obtenir le modèle de données de la table
    QAbstractItemModel *model = ui->tableView_2->model();
    if (!model) {
        QMessageBox::warning(this, "Erreur", "Aucune donnée à exporter.");
        return;
    }

    int x = 20;   // Position X de départ (ajustée pour A3)
    int y = 250;   // Position Y de départ
    int rowHeight = 60;  // Hauteur des lignes (réduite)
    int columnWidth = 350;  // Largeur des colonnes (réduite pour mieux s'adapter à la page A3)

    // Définir une police plus petite pour le texte
    QFont font = painter.font();
    font.setPointSize(7);  // Réduire la taille de la police à 7 points pour améliorer la lisibilité
    painter.setFont(font);

    // Appliquer une couleur de fond pour l'en-tête des colonnes
    painter.setBrush(QBrush(Qt::darkGreen));  // Fond léger pour l'en-tête des colonnes
    painter.setPen(Qt::green);

    // Dessiner les en-têtes des colonnes
    for (int column = 0; column < model->columnCount(); ++column) {
        QRect rect(x + column * columnWidth, y, columnWidth, rowHeight);
        painter.drawRect(rect);  // Dessiner la bordure de la cellule
        painter.drawText(rect, Qt::AlignCenter, model->headerData(column, Qt::Horizontal).toString());
    }

    y += rowHeight;  // Déplacer la position Y après les en-têtes

    // Appliquer une couleur de fond différente pour chaque ligne de données
    painter.setBrush(QBrush(Qt::white));  // Fond blanc pour les lignes de données
    painter.setPen(QPen(Qt::black));  // Bordure noire

    // Dessiner les lignes de données
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int column = 0; column < model->columnCount(); ++column) {
            QRect rect(x + column * columnWidth, y + (row) * rowHeight, columnWidth, rowHeight);
            painter.drawRect(rect);  // Dessiner la bordure de la cellule
            painter.drawText(rect, Qt::AlignCenter, model->data(model->index(row, column)).toString());
        }
    }

    // Ajouter un titre ou un logo en haut du PDF
    painter.setPen(QPen(QColor(0, 128, 0)));  // Définir la couleur du texte en vert foncé (RGB: 0, 128, 0)
    font.setPointSize(24);  // Augmenter la taille du titre pour le haut du PDF
    painter.setFont(font);
    painter.drawText(960, 150, "Données Exportées:");  // Ajouter un titre

    // Ajouter un logo ou une image dans le coin supérieur droit
    QPixmap logo("C:/Users/youss/Downloads/Gmail/logo.png");
    painter.drawPixmap(3200, 0, 150, 150, logo);  // Dessiner l'image à une taille appropriée

    // Ajouter la "signature" en bas de la page (aligné à droite)
    QFont signatureFont("Bradley Hand ITC", 25);  // Utiliser une police cursive ou de signature
    painter.setFont(signatureFont);
    painter.setPen(QPen(QColor(0, 100, 0)));  // Une couleur de texte plus foncée pour la signature

    // Calculer la position de "Smart Conservation" en bas à droite de la page
    int signatureX = pdfWriter.width() - painter.fontMetrics().boundingRect("Smart Conservation").width() - 20;  // 20 pixels de marge à droite
    int signatureY = pdfWriter.height() - 50;  // Un peu au-dessus du bas de la page

    painter.drawText(signatureX, signatureY, "Smart Conservation");

    // Terminer l'impression
    painter.end();

    // Afficher un message de confirmation
    QMessageBox::information(this, "Exportation réussie", "Les données ont été exportées vers un fichier PDF avec succès.");
}
*/





void MainWindow::on_exporter_clicked()
{
    // Ouvrir une boîte de dialogue pour choisir l'emplacement et le nom du fichier PDF
    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer en tant que PDF", "", "Fichiers PDF (*.pdf);;Tous les fichiers (*)");
    if (fileName.isEmpty()) {
        return;
    }

    // Créer un QPdfWriter pour générer le PDF
    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageOrientation(QPageLayout::Portrait);
    pdfWriter.setPageSize(QPageSize(QPageSize::A3)); // Augmenter la taille de la page à A3
    pdfWriter.setResolution(300);

    // Créer un QPainter pour dessiner dans le PDF
    QPainter painter(&pdfWriter);

    // Appliquer un fond de couleur vert clair à toute la page
    painter.setBrush(QBrush(QColor(144, 238, 144)));  // Vert clair en RGB
    painter.setPen(Qt::NoPen);  // Pas de bordure pour l'arrière-plan
    painter.drawRect(0, 0, pdfWriter.width(), pdfWriter.height());  // Dessiner le fond sur toute la page

    // Obtenir le modèle de données de la table
    QAbstractItemModel *model = ui->tableView_2->model();
    if (!model) {
        QMessageBox::warning(this, "Erreur", "Aucune donnée à exporter.");
        return;
    }

    int x = 20;   // Position X de départ (ajustée pour A3)
    int y = 250;   // Position Y de départ
    int rowHeight = 60;  // Hauteur des lignes (réduite)
    int columnWidth = 350;  // Largeur des colonnes (réduite pour mieux s'adapter à la page A3)

    // Définir une police plus petite pour le texte
    QFont font = painter.font();
    font.setPointSize(7);  // Réduire la taille de la police à 7 points pour améliorer la lisibilité
    painter.setFont(font);

    // Appliquer une couleur de fond pour l'en-tête des colonnes
    painter.setBrush(QBrush(Qt::darkGreen));  // Fond léger pour l'en-tête des colonnes
    painter.setPen(Qt::green);

    // Dessiner les en-têtes des colonnes
    for (int column = 0; column < model->columnCount(); ++column) {
        QRect rect(x + column * columnWidth, y, columnWidth, rowHeight);
        painter.drawRect(rect);  // Dessiner la bordure de la cellule
        painter.drawText(rect, Qt::AlignCenter, model->headerData(column, Qt::Horizontal).toString());
    }

    y += rowHeight;  // Déplacer la position Y après les en-têtes

    // Appliquer une couleur de fond différente pour chaque ligne de données
    painter.setBrush(QBrush(Qt::white));  // Fond blanc pour les lignes de données
    painter.setPen(QPen(Qt::black));  // Bordure noire

    // Identifier l'index de la colonne `idcl` et de la colonne numéro 9
    int idclColumnIndex = 0;  // Assurez-vous que cet index correspond à la colonne `idcl`
    int column9Index = 8;  // La colonne numéro 9 (en comptant à partir de 0)

    // Dessiner les lignes de données
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int column = 0; column < model->columnCount(); ++column) {
            QRect rect(x + column * columnWidth, y + (row) * rowHeight, columnWidth, rowHeight);

            // Colorer la colonne `idcl` en marron clair (RGB: 210, 180, 140)
            if (column == idclColumnIndex) {
                painter.setBrush(QBrush(QColor(210, 180, 140)));  // Marron clair
            }
            // Colorer la colonne numéro 9 en bleu ciel clair (RGB: 135, 206, 250)
            else if (column == column9Index) {
                painter.setBrush(QBrush(QColor(135, 206, 250)));  // Bleu ciel clair
            }
            else {
                painter.setBrush(QBrush(Qt::white));  // Autres colonnes en fond blanc
            }

            painter.drawRect(rect);  // Dessiner la bordure de la cellule
            painter.drawText(rect, Qt::AlignCenter, model->data(model->index(row, column)).toString());
        }
    }

    // Ajouter un titre ou un logo en haut du PDF
    painter.setPen(QPen(QColor(139, 69, 19)));  // Définir la couleur du texte en vert foncé (RGB: 0, 128, 0)
    font.setPointSize(24);  // Augmenter la taille du titre pour le haut du PDF
    painter.setFont(font);
    painter.drawText(960, 150, "Données Exportées:");  // Ajouter un titre

    // Ajouter un logo ou une image dans le coin supérieur droit
    QPixmap logo("C:/Users/youss/Downloads/Gmail/logo.png");
    painter.drawPixmap(3200, 0, 150, 150, logo);  // Dessiner l'image à une taille appropriée

    // Ajouter la "signature" en bas de la page (aligné à droite)
    QFont signatureFont("Bradley Hand ITC", 25);  // Utiliser une police cursive ou de signature
    painter.setFont(signatureFont);
    painter.setPen(QPen(QColor(0, 50, 0)));  // Une couleur de texte plus foncée pour la signature

    // Calculer la position de "Smart Conservation" en bas à droite de la page
    int signatureX = pdfWriter.width() - painter.fontMetrics().boundingRect("Smart Conservation").width() - 20;  // 20 pixels de marge à droite
    int signatureY = pdfWriter.height() - 50;  // Un peu au-dessus du bas de la page

    painter.drawText(signatureX, signatureY, "Smart Conservation");

    // Terminer l'impression
    painter.end();

    // Afficher un message de confirmation
    QMessageBox::information(this, "Exportation réussie", "Les données ont été exportées vers un fichier PDF avec succès.");
}
