//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_BORROWDAO_H
#define QTTP1_BORROWDAO_H

#include "BaseDAO.h"

// class Borrow(


class BorrowDAO : public BaseDAO<Borrow> {
public:
    BorrowDAO(QSqlDatabase& db);

    void init();
    bool add(Borrow& contact);
    bool remove(const int id);
    QList<Borrow> getAll();
    Borrow get(const int id);

    ~BorrowDAO() = default;
};

#endif //QTTP1_BORROWDAO_H
