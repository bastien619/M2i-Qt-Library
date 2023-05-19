//
// Created by Administrateur on 17/05/2023.
//

#include "library.h"
#include "user.h"
#include "book.h"


Library::Library(QString path)
{
 this->db = QSqlDatabase::addDatabase("QSQLITE");
 this->db.setDatabaseName(path);
 this->db.open();
}

Library::~Library()
{
    this->db.close();
}

int Library::addUser(QString firstname, QString lastname, QString email)
{
    User * u = new User(firstname,lastname,email);
    u->insert(this->db);
}


int Library::addBook(QString title, QString author)
{
    Book * b = new Book(title,author);
    b->insert(this->db);
}

int Library::borrow(int userId, int bookId)
{
    Book * b = getBook(bookId);
    User * u = getUser(userId);

    u->borrow(b);

}
int Library::returnBook(int authorId, int bookId);

int Library::delBook(Book b);
int Library::delUser(User u);
