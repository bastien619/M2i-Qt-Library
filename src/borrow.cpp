//
// Created by Administrateur on 17/05/2023.
//

#include "borrow.h"

Borrow::Borrow(int book_id,int user_id,QString date): book_id(book_id), user_id(user_id), date(date) {};
Borrow::Borrow(int id,int book_id,int user_id,QString date): id(id), book_id(book_id), user_id(user_id), date(date) {};

QString Borrow::getDate() const{
    return date;
}

int Borrow::getBookId() const {
    return book_id;
}

int Borrow::getUserId() const {
    return user_id;
}

int Borrow::getId() const {
    return id;
}
