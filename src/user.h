//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_USER_H
#define QTTP1_USER_H

#include <QString>
#include <vector>
#include <QtSql>
#include "book.h"
class User
{
private:
    QString firstname;
    QString lastname;
    QString email;
    int id;
public:
    User(QString firstname, QString lastname, QString email);
    User(int id, QString firstname, QString lastname, QString email);
    ~User() = default;

    // getters
    QString getFirstname(void) const;
    QString getLastname(void) const;
    QString getEmail(void) const;
    int getId(void) const;

    //setter

    void setFirstname(QString firstname);
    void setLastname(QString lastname);
    void setEmail(QString email);

    // DAO Call
    int insert(QSqlDatabase db);
    int del(QSqlDatabase db);
    int borrow(Book b,QSqlDatabase db);
    int returnBook(int id,QSqlDatabase db);
    std::vector<Book> borrowed(,QSqlDatabase db);


};


#endif //QTTP1_USER_H
