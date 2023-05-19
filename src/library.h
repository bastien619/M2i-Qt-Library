//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_LIBRARY_H
#define QTTP1_LIBRARY_H

#endif //QTTP1_LIBRARY_H
#include <QtSql>
#include <QWidget>
#include <Qobject>
#include "book.h"
#include "user.h"

class Library
{
private:
    QSqlDatabase db;

public:
    Library(QString path);
    ~Library();

    Book * getBook(int id);
    User * getUser(int id);

    signals:
    int addUser(QString firstname, QString lastname, QString email);
    int addBook(QString title, QString author);


    int borrow(int authorId, int BookId);
    int returnBook(int authorId, int bookId);

    int delBook(int BookId);
    int delUser(int userId);


};