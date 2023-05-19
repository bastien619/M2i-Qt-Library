//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_USERDAO_H
#define QTTP1_USERDAO_H

#include "BaseDAO.h"
#include "../src/user.h"


class UserDAO : public BaseDAO<User> {
public:
    UserDAO(QSqlDatabase& db);
    void init();
    bool add(User& contact);
    bool remove(const int id);
    QList<User> getAll();
    User get(const int id);

    ~UserDAO() = default;
};

#endif //QTTP1_USERDAO_H
