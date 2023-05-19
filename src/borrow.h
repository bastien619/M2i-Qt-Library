//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_BORROW_H
#define QTTP1_BORROW_H

#include <QString>

class Borrow {
private :
    int book_id, user_id, id;
    QString date;
public:
    Borrow() = default;
    Borrow(int,int,QString);
    Borrow(int,int,int,QString);
    ~Borrow() = default;

    QString getDate(void) const;
    int getBookId(void) const;
    int getUserId(void) const;
    int getId(void) const;

};

#endif //QTTP1_BORROW_H
