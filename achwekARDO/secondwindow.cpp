#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QDate>
#include "personel.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include<QVBoxLayout>
#include <QtDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QList>
#include <QStandardItem>
#include <QStandardItemModel>
#include "calendrierconge.h"

#include <QDebug>


#include <QDebug>
#include <QPdfWriter>
#include <QPainter>

MainWindow::MainWindow(const QString &email ,QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      useremail(email)
{
   // ui->setupUi(this);




    ui->setupUi(this);
    priviligae();

    // Initialisation de l'objet Arduino
    arduino = new Arduino(this);
    arduino->initArduino();  // Initialiser la communication série

       // Connexion du signal `poidsReceived` à un slot pour traiter le poids
     connect(arduino, &Arduino::poidsReceived, this, &MainWindow::onPoidsReceived);



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
    //ui->comboBox_6->addItem(icon6, "word");
    QIcon icon7(":/img/Screenshot_2024-10-09_093226-removebg-preview.png");
    iconAction->setIcon(icon7);
   // ui->comboBox_6->addItem(icon7, "pdf");
    QIcon icon8(":/img/Screenshot_2024-10-09_093052-removebg-preview.png");
    iconAction->setIcon(icon8);
///////////////////////////////////////////////////////////////////////////////////////////////
  //  ui->comboBox_6->addItem(icon8, "exel");
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
    QString role =ui->comboBox_6->currentText();
    int etat = 0;
    float poids = 0.0;

    // Instanciation d'un objet de la classe Client
    personel p(id, nom, prenom, date, poste, salaire, mail, telephone ,role,etat,poids);

    // Appel de la méthode ajouter() pour insérer l'objet dans la base de données
    bool test = p.ajouter();

    // Affichage d'une boîte de dialogue en fonction du résultat
    if (test)
    {

        //ui->tableView->setModel(p.afficher());
        ui->tableView->setModel(p.afficher());
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
    connect(ui->modifier_3, &QPushButton::clicked, this, &MainWindow::on_modifier_3_clicked);
}


void MainWindow::priviligae(){
    personel p;
    QString role =p.getUserRole(useremail);
    qDebug() << "role :" << role;

    if (role == "client"){
        ui->tabWidget->setCurrentIndex(0);
        ui->tabWidget->setTabEnabled(1, false);  // Index starts at 0, so 1 corresponds to tab 2
        ui->tabWidget->setTabEnabled(2, false);  // Disable tab 3
        ui->tabWidget->setTabEnabled(3, false);  // Disable tab 4
        ui->tabWidget->setTabEnabled(4, false);  // Disable tab 5
    }
    if (role == "personel"){
        ui->tabWidget->setCurrentIndex(1);
        ui->tabWidget->setTabEnabled(0, false);  // Index starts at 0, so 1 corresponds to tab 2
        ui->tabWidget->setTabEnabled(2, false);  // Disable tab 3
        ui->tabWidget->setTabEnabled(3, false);  // Disable tab 4
        ui->tabWidget->setTabEnabled(4, false);  // Disable tab 5
    }
    if (role == "stock"){
        ui->tabWidget->setCurrentIndex(2);
        ui->tabWidget->setTabEnabled(0, false);  // Index starts at 0, so 1 corresponds to tab 2
        ui->tabWidget->setTabEnabled(1, false);  // Disable tab 3
        ui->tabWidget->setTabEnabled(3, false);  // Disable tab 4
        ui->tabWidget->setTabEnabled(4, false);  // Disable tab 5
    }
    if (role == "commande"){
        ui->tabWidget->setCurrentIndex(3);
        ui->tabWidget->setTabEnabled(0, false);  // Index starts at 0, so 1 corresponds to tab 2
        ui->tabWidget->setTabEnabled(1, false);  // Disable tab 3
        ui->tabWidget->setTabEnabled(2, false);  // Disable tab 4
        ui->tabWidget->setTabEnabled(4, false);  // Disable tab 5
    }
    if (role == "equipement"){
        ui->tabWidget->setCurrentIndex(4);
        ui->tabWidget->setTabEnabled(0, false);  // Index starts at 0, so 1 corresponds to tab 2
        ui->tabWidget->setTabEnabled(1, false);  // Disable tab 3
        ui->tabWidget->setTabEnabled(2, false);  // Disable tab 4
        ui->tabWidget->setTabEnabled(3, false);  // Disable tab 5
    }


}


void MainWindow::on_supprimer_clicked()
{
    int id = ui->lineEdit_id->text().toInt(); // Récupérer l'ID de l'enregistrement

    if (id == 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir l'ID pour identifier l'enregistrement.");
        return;
    }

    QString attribut;
    QStringList attributs = {"nom", "prenom", "mail", "telephone", "poste", "salaire"};

    // Chercher quel champ est rempli
    for (const QString &attr : attributs) {
        QLineEdit *field = findChild<QLineEdit *>("lineEdit_" + attr);
        if (field && !field->text().isEmpty()) {
            attribut = attr;
            break;
        }
    }

    if (attribut.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir un champ pour identifier l'attribut à supprimer.");
        return;
    }

    // Appeler une méthode qui supprimera toute la ligne en fonction de l'attribut et de l'ID
    bool test = p.supprimer(id, attribut); // Méthode pour supprimer toute la ligne

    if (test) {
        ui->tableView->setModel(p.afficher()); // Rafraîchir la table
        QMessageBox::information(this, "Succès", "La ligne a été supprimée avec succès !");
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la suppression de la ligne.");
    }
}


void MainWindow::on_afficher_clicked()
{
    // Créez une instance de la classe personel
    personel p; // Assurez-vous que votre classe personel est correctement définie

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
    QString role=ui->comboBox_6->currentText();
    int etat = 0;
    float poids=0.0;


    personel p(id, nom, prenom, date, poste, salaire, mail, telephone,role,etat,poids);


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






// Fonction appelée lors du clic sur le bouton PDF
void MainWindow::on_pushButton_7_clicked() {
    personel p;

    // Demander à l'utilisateur de choisir l'ordre de tri
    QMessageBox msgBox;
    msgBox.setWindowTitle("Choisir l'ordre de tri");
    msgBox.setText("Veuillez choisir l'ordre de tri pour les ID:");
    QPushButton *ascButton = msgBox.addButton("Ascendant", QMessageBox::ActionRole);
    QPushButton *descButton = msgBox.addButton("Descendant", QMessageBox::ActionRole);
    msgBox.exec();

    bool ordreCroissant = (msgBox.clickedButton() == ascButton);

    QSqlQueryModel* model = p.afficherTrieParID(ordreCroissant);

    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer le PDF", "", "*.pdf");
    if (fileName.isEmpty())
        return;

    if (QFileInfo(fileName).suffix().isEmpty())
        fileName.append(".pdf");

    // Créer le QPdfWriter pour le fichier PDF
    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageOrientation(QPageLayout::Portrait);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    pdfWriter.setResolution(300);

    QPainter painter(&pdfWriter);

    if (!model) {
        QMessageBox::warning(this, "Erreur", "Aucune donnée à exporter.");
        return;
    }

    // Paramètres du tableau
    int x = 20;  // Position de départ sur l'axe X (marge gauche)
    int y = 150; // Position de départ sur l'axe Y (marge haute pour le tableau)
    int rowHeight = 60; // Hauteur des lignes augmentée
    int columnWidth = 300; // Largeur des colonnes augmentée

    // Appliquer des couleurs vertes
    QColor headerColor(34, 139, 34); // Vert foncé pour l'en-tête
    QColor altRowColor(144, 238, 144); // Vert clair pour les lignes alternées
    QColor textColor(0, 128, 0);      // Vert foncé pour le texte

    // Dessiner le titre "Liste des personnels"
    QFont titleFont("Arial", 25, QFont::Bold); // Police du titre
    painter.setFont(titleFont);
    painter.setPen(QPen(QColor(0, 128, 0))); // Couleur du texte en vert
    QString title = "Liste des personnels";
    int pageWidth = pdfWriter.width(); // Largeur de la page
    int textWidth = painter.fontMetrics().horizontalAdvance(title); // Largeur du texte
    int centeredX = (pageWidth - textWidth) / 2; // Position pour centrer le titre
    painter.drawText(centeredX, 100, title); // Dessiner le titre centré

    // Ajouter le logo plus haut, à côté du titre
    QPixmap logo(":/img/logo.png"); // Chemin vers le logo dans le dossier des ressources
    if (!logo.isNull()) {
        int logoWidth = 100;  // Largeur du logo
        int logoHeight = 120; // Hauteur du logo
        int logoX = pageWidth - logoWidth - 20; // Position à droite du titre
        int logoY = 20; // Position verticale ajustée pour le logo (plus haut)
        painter.drawPixmap(logoX, logoY, logoWidth, logoHeight, logo);
    }

    // Dessiner l'en-tête du tableau
    painter.setFont(QFont("Arial", 10));
    painter.setBrush(QBrush(headerColor)); // Couleur de fond pour l'en-tête
    painter.setPen(QPen(Qt::white)); // Texte en blanc pour l'en-tête

    for (int column = 0; column < model->columnCount(); ++column) {
        QRect rect(x + column * columnWidth, y, columnWidth, rowHeight);
        painter.drawRect(rect); // Dessiner la bordure de la cellule
        painter.drawText(rect, Qt::AlignCenter, model->headerData(column, Qt::Horizontal).toString()); // Dessiner l'en-tête
    }

    y += rowHeight; // Déplacer vers le bas après l'en-tête

    // Dessiner les données du tableau
    painter.setPen(QPen(textColor)); // Texte en vert foncé
    for (int row = 0; row < model->rowCount(); ++row) {
        QColor rowColor = (row % 2 == 0) ? Qt::white : altRowColor; // Alternance de couleur pour les lignes
        painter.setBrush(QBrush(rowColor));

        for (int column = 0; column < model->columnCount(); ++column) {
            QRect rect(x + column * columnWidth, y + row * rowHeight, columnWidth, rowHeight);
            painter.drawRect(rect); // Dessiner la bordure de la cellule
            painter.drawText(rect.adjusted(5, 0, -5, 0), Qt::AlignVCenter | Qt::AlignLeft, model->data(model->index(row, column)).toString()); // Remplir la cellule avec les données
        }
    }

    painter.end();

    QMessageBox::information(this, "Succès", "PDF généré avec succès !");
}




void MainWindow::on_pushButton_8_clicked() {
    static bool ordreCroissant = true;

    personel p;
    QSqlQueryModel *model = p.afficherTrieParID(ordreCroissant);

    ui->tableView->setModel(model);
    ordreCroissant = !ordreCroissant;
}



void MainWindow::on_modifier_2_clicked()//recherche
{
    QString id = ui->lineEdit->text();  // Récupère l'ID depuis le champ de saisie

    personel p;
    QSqlQueryModel *model = p.rechercher(id);  // Appelle la fonction de recherche par ID
    ui->tableView->setModel(model);  // Affiche le résultat dans le QTableView
}

void MainWindow::on_ajouter_2_clicked()//stat
{
    personel p;
    QMap<QString, double> stats = p.statistiquesPourcentageSalaire();

    // Créer une série de secteurs pour le graphique en camembert
    QPieSeries *series = new QPieSeries();

    // Définir quelques couleurs pour les secteurs
    QColor green1 = QColor(0, 128, 0); // Dark green
    QColor green2 = QColor(60, 179, 113); // Forest green
    QColor green3 = QColor(144, 238, 144); // Light green

    int index = 0;
    // Ajouter des secteurs pour chaque tranche de salaire
    for (auto it = stats.begin(); it != stats.end(); ++it) {
        QPieSlice *slice = series->append(it.key(), it.value());

        // Appliquer une couleur différente pour chaque secteur
        switch (index % 3) {
            case 0: slice->setColor(green1); break;
            case 1: slice->setColor(green2); break;
            case 2: slice->setColor(green3); break;
        }

        // Afficher le pourcentage sur le graphique
        slice->setLabelVisible(true);
        slice->setLabel(QString("%1: %2%").arg(slice->label()).arg(slice->percentage() * 100, 0, 'f', 1));

        index++;
    }

    // Créer un graphique et ajouter la série des secteurs
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition en pourcentage des employés par tranche de salaire");

    // S'assurer que le graphique est circulaire et centré
    chart->setAnimationOptions(QChart::SeriesAnimations);  // Animation pour adoucir les transitions

    // Créer une vue de graphique
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing); // Activer l'anticrénelage pour des visuels plus nets

    // Configurer la taille du graphique, mais s'assurer qu'il est bien circulaire
    chartView->setFixedSize(600, 600); // Taille fixée pour qu'il soit bien circulaire (carré)

    // Ajouter la vue à un layout et l'afficher dans le QGraphicsView
    ui->graphicsView->setScene(new QGraphicsScene());
    ui->graphicsView->scene()->addWidget(chartView);

    // Ajuster automatiquement le graphique pour qu'il soit bien centré et visible
    ui->graphicsView->fitInView(chartView->sceneRect(), Qt::KeepAspectRatio);

    // Rafraîchir l'affichage
    ui->graphicsView->scene()->update();
    ui->graphicsView->show();
}



void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    qDebug() << "Texte changé dans le QLineEdit:" << arg1;

    // Si le texte est vide, on vide le listWidget
    if (arg1.isEmpty()) {
        qDebug() << "Le texte est vide, on vide la liste.";
        ui->listWidget->clear();
        return;
    }

    // Appeler la méthode rechercher pour obtenir les résultats
    qDebug() << "Appel de la méthode rechercher avec la valeur:" << arg1;
    personel personel;
    QSqlQueryModel* model = personel.rechercher_sug(arg1);

    // Vider le listWidget avant d'ajouter les nouvelles suggestions
    ui->listWidget->clear();

    // Vérifier le nombre de résultats
    qDebug() << "Nombre de résultats trouvés:" << model->rowCount();

    // Ajouter les résultats au listWidget
    for (int row = 0; row < model->rowCount(); ++row) {
        QString id = model->data(model->index(row, 0)).toString(); // Première colonne = ID
        QString nom = model->data(model->index(row, 1)).toString(); // Deuxième colonne = NOM
        QString poste = model->data(model->index(row, 2)).toString(); // Troisième colonne = POSTE

        // Créer une suggestion combinée avec ID, NOM et POSTE
        QString suggestion = id + " - " + nom + " - " + poste;

        // Ajouter la suggestion au listWidget
        qDebug() << "Ajouter une suggestion:" << suggestion;
        ui->listWidget->addItem(suggestion);
    }
}










void MainWindow::on_modifier_3_clicked()//conge
{
    qDebug() << "on_modifier_3_clicked called";

      // Vérifier si la fenêtre de congé est déjà ouverte
      for (QObject *child : this->children()) {
          if (QWidget *widget = qobject_cast<QWidget *>(child)) {
              qDebug() << "Checking child widget: " << widget->objectName();
              if (widget->objectName() == "CalendrierConge") {
                  widget->show(); // Si déjà ouvert, simplement l'afficher
                  return;
              }
          }
      }

      // Si pas ouvert, créer et afficher la fenêtre CalendrierConge
      qDebug() << "Opening new CalendrierConge window";
      CalendrierConge *calendrierConge = new CalendrierConge(this);
      calendrierConge->setObjectName("CalendrierConge");  // Assurez-vous que le nom est attribué après la création de l'objet

      // Forcer la taille et la position
      calendrierConge->resize(500, 400);
      calendrierConge->move(100, 100); // Placer la fenêtre à une position visible sur l'écran
      calendrierConge->show();
}
void MainWindow::onPoidsReceived(float poids) {
    qDebug() << "Poids reçu dans onPoidsReceived : " << poids;

    // Créer une requête SQL pour mettre à jour l'état et le poids dans la base de données pour l'ID 3
    QSqlQuery query;

    if (poids > 0) {
        qDebug() << "Poids supérieur à 0, mise à jour de l'état à 1 et du poids : " << poids;
        query.prepare("UPDATE PERSONELL SET ETAT = 1, POIDS = :poids WHERE ID = 3");
        query.bindValue(":poids", poids);
    } else {
        qDebug() << "Poids égal ou inférieur à 0, mise à jour de l'état à 0 et du poids à 0.";
        query.prepare("UPDATE PERSONELL SET ETAT = 0, POIDS = 0 WHERE ID = 3");
    }

    // Exécuter la requête SQL
    if (query.exec()) {
        qDebug() << "Données mises à jour avec succès!";
    } else {
        qDebug() << "Erreur lors de la mise à jour des données : " << query.lastError();
    }

    // Rafraîchir l'affichage de la table pour refléter les nouvelles données
    ui->tableView->setModel(p.afficher());
    qDebug() << "Table view mise à jour.";
}
