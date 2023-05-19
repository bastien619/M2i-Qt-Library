//
// Created by Administrateur on 17/05/2023.
//

#include "UserDAO.h"
#include "../src/user.h"

UserDAO::UserDAO(QSqlDatabase& db): BaseDAO<User>(db) {};

void UserDAO::init(){
    db_.open();
    query = new QSqlQuery(db_);
    bool result = false;


    if (!db_.tables().contains("Users")) {
        result = query->exec("CREATE TABLE IF NOT EXISTS Users (id INTEGER PRIMARY KEY, firstname TEXT, lastname TEXT, email TEXT)");
        if (result) {
            qDebug() << "Table Users créée";
        } else {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
}

bool UserDAO::add(User& user) {
    db_.open();
    query = new QSqlQuery(db_);
    bool result = false;

    if (db_.tables().contains("Users")) {
        query->prepare("INSERT INTO Users VALUES (:firstname, :lastname, :email)");
        query->bindValue(":firstname", user.getFirstname());
        query->bindValue(":lastname", user.getLastname());
        query->bindValue(":email", user.getEmail());
        result = query->exec();
        if (result) {
            qDebug() << "Utilisateur ajouté";
        } else {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
    return result;
}

bool UserDAO::remove(const int id) {
    db_.open();
    query = new QSqlQuery(db_);
    bool result = false;

    if (db_.tables().contains("Users")) {
        query->prepare("DELETE FROM Users WHERE id = :id");
        query->bindValue(":id", id);
        result = query->exec();
        if (result) {
            qDebug() << "Utilisateur supprimé";
        } else {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
    return result;
}

QList<User> UserDAO::getAll() {
    db_.open();
    QList<User> users;
    query = new QSqlQuery(db_);
    bool result = false;

    if (db_.tables().contains("Users")) {
        result = query->exec("SELECT firstname,lastname,email FROM Users");
        if (result) {
            while(query->next()) {
                users.append(User(query->value("firstname").toString(),query->value("lastname").toString(),query->value("email").toString()));
            }
            qDebug() << "Utilisateurs récupérés";
        } else {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
    return users;
}

User UserDAO::get(const int id) {
    db_.open();
    User user;
    query = new QSqlQuery(db_);
    bool result = false;

    if (db_.tables().contains("Users")) {
        query->prepare("SELECT firstname,lastname,email FROM Users WHERE id = :id");
        query->bindValue(":id", id);
        result = query->exec();
        if (result) {
            while(query->next()) {
                user = User(query->value("firstname").toString(),query->value("lastname").toString(),query->value("email").toString());
            }
            qDebug() << "Utilisateur récupéré";
        } else {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
    return user;
}