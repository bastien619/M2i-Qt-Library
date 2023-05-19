#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
}



/*
 * Système de Gestion de Bibliothèque
        Votre mission est de créer une application de gestion de bibliothèque simple. Cette application doit être capable degérer des livres et des utilisateurs.
Spécifications de base :
Les livres doivent avoir un titre, un auteur et un identifiant unique.
Les utilisateurs doivent avoir un nom, un email et un identifiant unique.
Les utilisateurs peuvent emprunter et rendre des livres.
Un livre ne peut être emprunté que par un seul utilisateur à la fois.
L'application doit garder une trace de qui a emprunté quel livre et quand.
Spécifications techniques :
Utilisez Qt et C++ pour l'interface utilisateur de l'application.
Utilisez SQLite pour stocker les données de l'application.
Utilisez le modèle DAO pour gérer l'accès aux données.
 */