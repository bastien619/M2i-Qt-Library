//
// Created by Administrateur on 17/05/2023.
//

#include "BookDAO.h"

BookDAO::BookDAO(QSqlDatabase& db): BaseDAO<Book>(db) {};

void BookDAO::init() {
    db_.open();
    query = new QSqlQuery(db_);
    bool result = false;


    if (!db_.tables().contains("Books")) {
        result = query->exec("CREATE TABLE IF NOT EXISTS Books (id INTEGER PRIMARY KEY, title TEXT, author TEXT, isbn TEXT)");
        if (result) {
            qDebug() << "Table Books créée";
        } else {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
}

bool BookDAO::add(Book& book) {
    db_.open();
    query = new QSqlQuery(db_);
    bool result = false;

    if (db_.tables().contains("Books")) {
        query->prepare("INSERT INTO Books VALUES (:title, :author, :isbn)");
        query->bindValue(":title", book.getTitle());
        query->bindValue(":author", book.getAuthor());
        query->bindValue(":isbn", book.getISBN());
        result = query->exec();
        if (result) {
            qDebug() << "Livre ajouté";
        } else {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
    return result;
}

bool BookDAO::remove(const int id) {
    db_.open();
    query = new QSqlQuery(db_);
    bool result = false;

    if (db_.tables().contains("Books")) {
        query->prepare("DELETE FROM Books WHERE id = :id");
        query->bindValue(":id", id);
        result = query->exec();
        if (result) {
            qDebug() << "Livre supprimé";
        } else {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
    return result;
}

QList<Book> BookDAO::getAll() {
    db_.open();
    QList<Book> books;
    query = new QSqlQuery(db_);
    bool result = false;

    if (db_.tables().contains("Books")) {
        result = query->exec("SELECT title,author,isbn FROM Books");
        if (result) {
            while(query->next()) {
                books.append(Book(query->value("title").toString(),query->value("author").toString(),query->value("isbn").toString()));
            }
            qDebug() << "Livres récupérés";
        } else {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
    return books;
}

Book BookDAO::get(const int id) {
    db_.open();
    Book book;
    query = new QSqlQuery(db_);
    bool result = false;

    if (db_.tables().contains("Books")) {
        query->prepare("SELECT title,author,isbn FROM Books WHERE id = :id");
        query->bindValue(":id", id);
        result = query->exec();
        if (result) {
            while(query->next()) {
                book = Book(query->value("title").toString(),query->value("author").toString(),query->value("isbn").toString());
            }
            qDebug() << "Livre récupéré";
        } else {
            error = query->lastError();
            qDebug() << error.text();
        }
    }
    db_.close();
    return book;
}