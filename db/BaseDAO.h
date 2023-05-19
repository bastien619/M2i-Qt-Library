//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_BASEDAO_H
#define QTTP1_BASEDAO_H


#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

template <typename T>
class BaseDAO {

public:
    BaseDAO(QSqlDatabase& db):db_(db) {};
    virtual void init()  = 0;
    virtual bool add(T& contact) = 0;
    virtual bool remove(const int id) = 0;
    virtual QList<T> getAll() = 0;
    virtual T get(const int id) = 0;

    virtual ~BaseDAO() = default;

protected:
    QSqlDatabase& db_;
    QSqlQuery* query;
    QSqlError error;
};

#endif //QTTP1_BASEDAO_H
