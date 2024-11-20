#include "login.h"
#include "secondwindow.h"  // Assurez-vous que SecondWindow est correctement importé
#include "connexion.h"     // Pour la gestion de la connexion à la base de données
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Connection c;
    bool test = c.createconnection();  // Crée la connexion à la base de données

    // Crée une fenêtre de connexion modale
    login loginWindow;
    MainWindow w;

    // Utilise exec() pour rendre la fenêtre modale
    if (loginWindow.exec() == QDialog::Accepted) {
        // Si l'utilisateur se connecte avec succès, établir la connexion à la base de données

        // Vérifie si la connexion est réussie
        if (test) {
            // Crée et affiche la fenêtre principale
            w.show();

            // Affiche un message de succès de connexion
            QMessageBox::information(nullptr, QObject::tr("Database is open"),
                                     QObject::tr("Connection successful.\nClick OK to continue."),
                                     QMessageBox::Ok);
        } else {
            // En cas d'échec de la connexion à la base de données
            QMessageBox::critical(nullptr, QObject::tr("Database is not open"),
                                  QObject::tr("Connection failed.\nPlease check your connection and try again."),
                                  QMessageBox::Ok);

            // Si la connexion échoue, on peut afficher une fenêtre ou une action alternative
        }
    }

    // Démarre la boucle principale de l'application
    return a.exec();
}
