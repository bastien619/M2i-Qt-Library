//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_BOOK_H
#define QTTP1_BOOK_H

#include <QString>
#include <QtSql>
#include "user.h"

class Book {
private:
    QString title, author, isbn;
    int id;
public:
    Book();
    Book(QString,QString,QString);
    Book(int,QString,QString,QString);
    ~Book() = default;

    // getters
    QString getTitle(void) const;
    QString getAuthor(void) const;
    QString getISBN(void) const;
    int getId(void) const;

    //setters
    void setTitle(QString title);
    void setAuthor(QString author);
    void setISBN(QString isbn);


    // DAO Call
    void insert(QSqlDatabase db);
    void del(QSqlDatabase db);
    bool isFree(QSqlDatabase db); // true if the book is in the library, false if borrowed
    User borrower(QSqlDatabase db): // NULLif not isFree();

};


#endif //QTTP1_BOOK_H
