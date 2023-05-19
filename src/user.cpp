//
// Created by Administrateur on 17/05/2023.
//

#include "user.h"

User::User(QString firstname, QString lastname, QString email) : firstname(firstname), lastname(lastname), email(email) {};
User::User(int id, QString firstname, QString lastname, QString email) : id(id), firstname(firstname), lastname(lastname), email(email) {};

// getters
QString User::getFirstname() const {
    return firstname;
};

QString User::getLastname() const {
    return lastname;
};

QString User::getEmail() const {
    return email;
};

int User::getId() const {
    return id;
};


//setter

void User::setFirstname(QString firstname) {
    this->firstname = firstname;
}

void User::setLastname(QString lastname) {
    this->lastname = lastname;
}

void User::setEmail(QString email) {
    this->firstname = firstname;
}
