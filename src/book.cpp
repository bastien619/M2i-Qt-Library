//
// Created by Administrateur on 17/05/2023.
//

#include "book.h"

Book::Book(QString title,QString author,QString isbn): title(title), author(author), isbn(isbn) {};
Book::Book(int id, QString title,QString author,QString isbn): id(id), title(title), author(author), isbn(isbn) {};

QString Book::getTitle() const {
    return title;
}

QString Book::getAuthor() const {
    return author;
}

QString Book::getISBN() const {
    return isbn;
}

int Book::getId() const {
    return id;
}

void Book::setTitle(QString title) {
    this->title = title;
}

void Book::setAuthor(QString author) {
    this->author = author;
}

void Book::setISBN(QString author) {
    this->isbn = isbn;
}

// DAO Call
void insert();
void del();
bool isFree(); // true if the book is in the library, false if borrowed
User borrower(); // NULLif not isFree();