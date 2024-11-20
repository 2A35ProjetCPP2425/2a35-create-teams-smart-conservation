#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "stock.h"
#include <QMessageBox>
#include <QSqlRecord>
#include <QFile>
#include <QTextStream>
#include <QSqlQuery>
#include <QFileDialog>
#include <QImage>
#include <QPainter>
#include <QPixmap>
#include <QLabel>
#include <QTimer>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include "../qrcodegen.hpp"
#include "../qrcodegen.cpp"
#include "notification.h"
   #include <windows.h>
#include <shellapi.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->tableView_3->setModel(Stmp.afficher());

    displayCategoryStatistics();
    // Lancer la vérification initiale des dates d'expiration
  //  checkExpirationDates();

    // Configurer le contrôle périodique
 //   startAutomaticExpirationCheck();
    QAction *iconAction1 = new QAction(this);
    QIcon icon1(":/img/Screenshot_2024-10-08_134640-removebg-preview.png");
    iconAction1->setIcon(icon1);
    ui->tabWidget->setTabIcon(0, icon1);
    ui->tabWidget->setTabText(0, "Personnel");
    QAction *iconAction2 = new QAction(this);
    QIcon icon2(":/img/Screenshot_2024-10-08_134706-removebg-preview.png");
    iconAction2->setIcon(icon2);
    ui->tabWidget->setTabIcon(1, icon2);
    ui->tabWidget->setTabText(1, "Client");
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
    ////personel////
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
    //////////***************///////////////////////
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
    ///////****************//////////////////////
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
    //////////////////////////////****///////////
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
    ////////*////////////////////////////////////////////
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
    ///

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_14_clicked()
{
//Récupération des informations saisies dans les 3 champs
int IDS=ui->id_stock->text().toInt();
int QUANTS=ui->quantite_disp->text().toInt();
QString NOMS=ui->nom1_3->text();

QString CATEGORIE = ui->categorie->text(); // Récupérer la valeur de 'categorie'
QString FOURNIS = ui->fournisseur->text();     // Récupérer la valeur de 'fournis'

QString CONDS = ui->condition_s->text();
QDate DATES = ui->date_ex2->date();   // Champ pour la date
QDate DATEAS  = ui->dateaq2->date(); // Champ pour dateas
int idStock=ui->IDR->text().toInt();

stock S(IDS, QUANTS, NOMS, CATEGORIE, FOURNIS, CONDS, DATES, DATEAS, idStock);
 // instancier un objet de la classe étudiant // en utilisant les informations saisies dans l'interface
bool test=S.ajouter(); // Insérer l'objet étudiant instancié dans la table étudiant // et récupérer la valeur de retour de query.exec()


if(test)
{
    //refreshh teb3aa affichage////////////////////////////////////////////////
    ui->tableView_3->setModel(Stmp.afficher());
    QMessageBox::information(nullptr,QObject::tr("ok"),
                             QObject::tr("ajout effectué\n" "Click Cancel to exit."), QMessageBox::Cancel);}
else{
     QMessageBox::critical(nullptr,QObject::tr("not ok"),
                           QObject::tr("ajout non effectué\n" "Click Cancel to exit."), QMessageBox::Cancel);
}


}




void MainWindow::on_pushButton_17_clicked() {
int IDS =ui->id_stock->text().toInt();
bool test=Stmp.supprimer(IDS);


if(test)
{
    QMessageBox::information(nullptr,QObject::tr("ok"),
                             QObject::tr("suppression effectue\n" "Click Cancel to exit."), QMessageBox::Cancel);}
else{
     QMessageBox::critical(nullptr,QObject::tr("not ok"),
                           QObject::tr("suppression non effectué\n" "Click Cancel to exit."), QMessageBox::Cancel);
}
ui->tableView_3->setModel(Stmp.afficher());
}


void MainWindow::on_pushButton_16_clicked() {
    // Get values from UI
    QString NOMS = ui->nom1_3->text();
    int QUANTS = ui->quantite_disp->text().toInt();
    QString CATEGORIE = ui->categorie->text();
    QString FOURNIS = ui->fournisseur->text();
    QDate DATES = ui->date_ex2->date();
    QDate DATEAS = ui->dateaq2->date();
    QString CONDS = ui->condition_s->text();

    // Get ID from UI (make sure this is valid)
    int idStock = ui->IDR->text().toInt();

    // Call the modifier function
    bool test = Stmp.modifier(NOMS, FOURNIS, CATEGORIE, QUANTS, DATES, DATEAS, idStock, CONDS);

    // Refresh display

    // Show message based on success or failure
    if (test) {
        QMessageBox::information(this, QObject::tr("OK"),
                                 QObject::tr("Modification effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
    } else {

        QMessageBox::critical(this, QObject::tr("Not OK"),
                             QObject::tr("Modification non effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
    ui->tableView_3->setModel(Stmp.afficher());

}



//rechercher////////////////////////////////////////////////////////////////


void MainWindow::on_IDR_textChanged() {
    stock Stmp; // Assurez-vous que `stock` est une classe correctement définie et accessible
       QString text = ui->IDR->text();
    // Appeler la méthode rechercher pour obtenir le modèle correspondant au texte saisi
    QSqlQueryModel* model = Stmp.rechercher(text);

    // Vérifier si le modèle est valide et mettre à jour la vue table
    if (model) {
        ui->tableView_3->setModel(model); // Définir le modèle sur le QTableView
    } else {
        QMessageBox::warning(this, "Erreur", "La recherche a échoué ou aucun résultat trouvé.");
    }
}






//bouton exporter//////////////////////////////////////////////////////////////////


void MainWindow::on_pushButton_15_clicked() {
    // Ouvrir une boîte de dialogue pour choisir l'emplacement de sauvegarde
    QString filePath = QFileDialog::getSaveFileName(this,
        "Enregistrer le fichier",
        QDir::homePath(),
        "Fichiers Excel (*.csv);;Tous les fichiers (*.*)"
    );

    // Vérifier si un chemin a été sélectionné
    if (filePath.isEmpty()) {
        qDebug() << "L'utilisateur a annulé la sauvegarde.";
        return;
    }

    // S'assurer que l'extension est correcte
    if (!filePath.endsWith(".csv", Qt::CaseInsensitive)) {
        filePath += ".csv";
    }

    // Ouvrir le fichier en mode écriture
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Erreur lors de l'ouverture du fichier pour écriture :" << file.errorString();
        return;
    }

    QTextStream out(&file);

    // Titre et description du fichier
    out << "Données exportées depuis la base STOCK\n";
    out << "-------------------------------------\n";

    // En-têtes organisés avec tabulation pour les colonnes
    out << QString("IDS").leftJustified(10)
        << QString("NOMS").leftJustified(20)
        << QString("QUANTS").leftJustified(10)
        << QString("FOURNIS").leftJustified(20)
        << QString("DATES").leftJustified(15)
        << QString("DATEAS").leftJustified(15)
        << QString("CONDS").leftJustified(20) << "\n";

    out << QString("-").repeated(100) << "\n";

    // Exécuter une requête SQL
    QSqlQuery query;
    query.prepare("SELECT IDS, CATEGORIE, QUANTS, FOURNIS, DATES, DATEAS, CONDS FROM STOCK");

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
        file.close();
        return;
    }

    // Parcourir les résultats et écrire les données avec un formatage clair
    while (query.next()) {
        out << QString::number(query.value("IDS").toInt()).leftJustified(10)
            << query.value("CATEGORIE").toString().leftJustified(20)
            << QString::number(query.value("QUANTS").toInt()).leftJustified(10)
            << query.value("FOURNIS").toString().leftJustified(20)
            << query.value("DATES").toDate().toString("yyyy-MM-dd").leftJustified(15)
            << query.value("DATEAS").toDate().toString("yyyy-MM-dd").leftJustified(15)
            << query.value("CONDS").toString().leftJustified(20) << "\n";
    }

    // Fermer le fichier
    file.close();

    // Message de confirmation
    qDebug() << "Les données ont été exportées avec succès dans" << filePath;
    QMessageBox::information(this, "Succès", "Les données ont été exportées avec succès dans un format clair et organisé !");
}



// generer qr code////////////////////////////////////////////////

void MainWindow::on_pushButton_32_clicked()
{
    // Récupérer l'identifiant saisi dans le QLineEdit
    QString idText = ui->lineEdit_6->text();
    bool ok;
    int id = idText.toInt(&ok); // Convertir en entier

    // Vérifier si la conversion a réussi
    if (!ok) {
        QMessageBox::warning(this, QObject::tr("Erreur"), QObject::tr("Veuillez entrer un identifiant valide."));
        return;
    }

    // Rechercher la ligne correspondant à l'identifiant dans le modèle de stock
    QModelIndexList indexList = ui->tableView_3->model()->match(
        ui->tableView_3->model()->index(0, 0), // Commencer à la première colonne
        Qt::DisplayRole,
        id,
        1, // Limiter à 1 résultat
        Qt::MatchExactly
    );

    if (indexList.isEmpty()) {
        QMessageBox::warning(this, QObject::tr("Erreur"), QObject::tr("Aucun article trouvé avec cet identifiant."));
        return;
    }

    // Récupérer les détails de l'article de stock à partir de la ligne trouvée
    QModelIndex stockIndex = indexList.first();
    QStringList stockDetails;

    // Supposons que les colonnes sont dans cet ordre : NOMS, CATEGORIE, QUANTS, FOURNIS, DATEAS, DATES, CONDS
    for (int col = 0; col <= 6; ++col) { // Ajustez les indices selon votre modèle
        stockDetails << ui->tableView_3->model()->data(ui->tableView_3->model()->index(stockIndex.row(), col)).toString();
    }

    // Construire le texte pour le QR code dans l'ordre souhaité
    QString text = QString("NOMS: %1\nCATEGORIE: %2\nQUANTS: %3\nFOURNIS: %4\nDATEAS: %5\nDATES: %6\nCONDS: %7")
                    .arg(stockDetails[0], stockDetails[1], stockDetails[2],
                         stockDetails[3], stockDetails[4], stockDetails[5], stockDetails[6]);

    using namespace qrcodegen;

    // Créer l'objet QR Code
    QrCode qr = QrCode::encodeText(text.toUtf8().data(), QrCode::Ecc::MEDIUM);
    qint32 sz = qr.getSize();

    // Créer une image pour le QR Code
    QImage im(sz, sz, QImage::Format_RGB32);
    QRgb black = qRgb(0, 0, 0);
    QRgb white = qRgb(255, 255, 255);

    // Remplir l'image avec les modules du QR Code
    for (int y = 0; y < sz; y++) {
        for (int x = 0; x < sz; x++) {
            im.setPixel(x, y, qr.getModule(x, y) ? black : white);
        }
    }

    // Afficher le QR Code dans le QLabel
    ui->labelQRCode->setPixmap(QPixmap::fromImage(im.scaled(256, 256, Qt::KeepAspectRatio, Qt::FastTransformation), Qt::MonoOnly));
}





/*void MainWindow::checkExpirationDates() {
    QSqlQuery query;

    // Préparer la requête pour récupérer les produits proches de la date d'expiration
    query.prepare("SELECT *  FROM STOCK WHERE DATES <= :thresholdDate");


    // Calculer la date seuil (5 jours avant expiration)
    QDate thresholdDate = QDate::currentDate().addDays(5);
    query.bindValue(":thresholdDate", thresholdDate);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
        return;
    }

    // Parcourir les résultats
    while (query.next()) {
        int id = query.value("IDS").toInt();
        QString nom = query.value("NOMS").toString();
        QDate dateExpiration = query.value("DATES").toDate();

        // Calculer le nombre de jours restants
        int daysRemaining = QDate::currentDate().daysTo(dateExpiration);

        QString message;


        if (daysRemaining == 5) {
            // Notification à 5 jours
            message = QString("⏳ Le produit '%1' (ID: %2) expire dans 5 jours, le %3.")
                      .arg(nom).arg(id).arg(dateExpiration.toString("dd/MM/yyyy"));

        } else if (daysRemaining == 4) {
            // Notification à 4 jours
            message = QString("⚠️ Rappel : Le produit '%1' (ID: %2) expire dans 4 jours, le %3.")
                      .arg(nom).arg(id).arg(dateExpiration.toString("dd/MM/yyyy"));

        } else if (daysRemaining <= 2 && daysRemaining >= 0) {
            // Notification critique pour 2 jours ou moins
            message = QString("❗ URGENT : Le produit '%1' (ID: %2) expire dans %3 jour(s), le %4.")
                      .arg(nom).arg(id).arg(daysRemaining).arg(dateExpiration.toString("dd/MM/yyyy"));

        }


        // Afficher la notification et jouer le son si applicable
        if (!message.isEmpty()) {
            QMessageBox::warning(this, "Alerte Expiration", message);



        }
    }
}


void MainWindow::startAutomaticExpirationCheck() {
    // Créer un QTimer pour vérifier les dates périodiquement
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::checkExpirationDates);
    timer->start(60000); // Vérification toutes les 60 secondes (1 minute)
}


*/

//statistique/////////////////////////////////////////////////////////


#include <QPainter>
#include <QMap>


/*void MainWindow::on_pushButton_stat_clicked() {
    stock s;

    // Appeler la méthode calculStat pour obtenir les pourcentages
    QMap<QString, double> statistiques = s.calculStat();

    // Vérifier si les données sont disponibles
    if (statistiques.isEmpty()) {
        QMessageBox::information(this, "Statistiques", "Aucune donnée disponible pour les statistiques.");
        return;
    }

    // Afficher les résultats sous forme d'un diagramme
    drawPieChart(statistiques);
}

*/



void MainWindow::on_comboBox_3_currentIndexChanged()
{
    stock Stmp;
    QString methode=ui->comboBox_3->currentText();
    QSqlQueryModel* model = Stmp.trier(methode);
    ui->tableView_3->setModel(model);

}




void MainWindow::displayCategoryStatistics()
{
    // Create a map to hold category names and their corresponding total quantities
    QMap<QString, int> categoryQuantities;

    // Query the database to get the total QUANTS for each CATEGORIE
    QSqlQuery query;
    query.prepare("SELECT CATEGORIE, SUM(QUANTS) AS TotalQuantity FROM STOCK GROUP BY CATEGORIE");

    if (!query.exec()) {
        qDebug() << "Database query error:" << query.lastError().text();
        return; // Exit if there's an error
    }

    // Debug: Log the number of rows returned
    qDebug() << "Number of rows returned: " << query.size();

    // Process the query results to populate the categoryQuantities map
    while (query.next()) {
        QString category = query.value("CATEGORIE").toString(); // Get category name
        int totalQuantity = query.value("TotalQuantity").toInt(); // Get total quantity for the category

        // Store the total quantity for the category in the map
        categoryQuantities[category] = totalQuantity;
    }

    // Debug: Log the contents of the categoryQuantities map
    for (auto it = categoryQuantities.constBegin(); it != categoryQuantities.constEnd(); ++it) {
        qDebug() << "Category:" << it.key() << "Quantity:" << it.value();
    }

    // Create the Pie Chart Series
    QPieSeries *series = new QPieSeries();

    // Append each category and its total quantity to the series
    for (auto it = categoryQuantities.constBegin(); it != categoryQuantities.constEnd(); ++it) {
        series->append(it.key(), it.value());
    }

    // Create a chart and add the series to it
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Product Quantity Distribution by Category");

    // Customize the slices to add labels
    for (QPieSlice *slice : series->slices()) {
        slice->setLabelVisible(true);
        slice->setLabel(QString("%1: %2%").arg(slice->label()).arg(slice->percentage() * 100, 0, 'f', 1));
    }

    // Create the QChartView for displaying the pie chart
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Set the QChartView size to fit inside the QGraphicsView named pie_2
    chartView->setFixedSize(ui->pie_2->size());

    // Clear the previous scene and set the new scene with the chart view
    ui->pie_2->setScene(new QGraphicsScene());
    ui->pie_2->scene()->addWidget(chartView);  // Add the chart view to the scene

    // Refresh the QGraphicsView
    ui->pie_2->scene()->update();
    ui->pie_2->show();  // Ensure the pie chart is displayed
}





void MainWindow::checkExpirationAndNotify() {
    QSqlQuery query;
    query.prepare("SELECT * FROM STOCK"); // Changez selon votre structure de base

    if (!query.exec()) {
        qDebug() << "Erreur lors de la récupération des produits:" << query.lastError().text();
        return;
    }

    QDate today = QDate::currentDate();

    while (query.next()) {
        QString NOMS = query.value(0).toString();
        QDate DATES = query.value(1).toDate();

        if (!DATES.isValid()) {
            qDebug() << "Date invalide pour le produit:" << NOMS;
            continue;
        }

        int daysToExpire = today.daysTo(DATES);

        if (daysToExpire <= 3 && daysToExpire >= 0) {
            // Créer les messages pour la notification
            std::wstring title = L"Produit à expiration";
            std::wstring message = L"Le produit '" + NOMS.toStdWString() +
                                   L"' expire dans " + std::to_wstring(daysToExpire) + L" jours.";

            // Envoyer une notification Windows
            NotificationWidget::sendWindowsNotification(title, message);
        }
    }
}





// catalogueeeeeeeee/////////////////////////////////////////


#include <QVBoxLayout>
#include <QSqlQuery>

#include <QFile>




/*
void MainWindow::on_genererImageButton_clicked()
{
    afficherImagesDesProduits();  // Fonction pour afficher les images des produits
}

void MainWindow::afficherImagesDesProduits()
{
    // Vider le layout avant d'ajouter de nouvelles images
    ui->imageLayout->clear();  // Assurez-vous que "imageLayout" est un QVBoxLayout ou QGridLayout dans votre fichier .ui

    // Requête pour récupérer les noms des produits dans la base de données
    QSqlQuery query("SELECT NOMS FROM STOCK");  // Vous pouvez ajuster le nom de la table et des colonnes si nécessaire

    if (!query.exec()) {
        qDebug() << "Erreur de requête SQL : " << query.lastError().text();
        return;
    }

    // Parcourir tous les produits et afficher leurs images
    while (query.next()) {
        QString productName = query.value(0).toString();

        // Appel à la fonction qui génère le chemin de l'image en fonction du nom du produit
        QString imagePath = getImagePathForProduct(productName);

        // Vérifier si l'image existe pour ce produit
        if (!imagePath.isEmpty() && QFile::exists(imagePath)) {
            // Créer un QLabel pour afficher l'image
            QLabel *imageLabel = new QLabel(this);
            QPixmap pixmap(imagePath);

            if (pixmap.isNull()) {
                qDebug() << "L'image est invalide ou non trouvée pour : " << imagePath;
                continue;
            }

            // Redimensionner l'image et l'ajouter au layout
            imageLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio));
            imageLabel->setToolTip(productName);  // Afficher le nom du produit en tooltip
            ui->imageLayout->addWidget(imageLabel);  // Ajouter à votre layout
        } else {
            qDebug() << "Image non trouvée pour le produit : " << productName;
        }
    }
}

QString MainWindow::getImagePathForProduct(const QString &productName)
{
    // Construire le chemin de l'image basé sur le nom du produit
    // Par exemple : images/salade.jpg, images/tiramissu.jpg, etc.
    QString imagePath = "images/" + productName + ".jpg";  // Assurez-vous que le répertoire et l'extension sont corrects

    // Si vous utilisez un autre format ou répertoire, ajustez le chemin ici

    return imagePath;
}

*
*/
