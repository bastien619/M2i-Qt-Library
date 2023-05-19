//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_BOOKDAO_H
#define QTTP1_BOOKDAO_H

#include "BaseDAO.h"
#include "../src/book.h"


class BookDAO : public BaseDAO<Book> {
public:
    BookDAO(QSqlDatabase& db);

    void init();
    bool add(Book& contact);
    bool remove(const int id);
    QList<Book> getAll();
    Book get(const int id);

    ~BookDAO() = default;
};


#endif //QTTP1_BOOKDAO_H
