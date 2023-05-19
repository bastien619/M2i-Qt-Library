//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_USERTAB_H
#define QTTP1_USERTAB_H

#include <QWidget>
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class UserTab; }
QT_END_NAMESPACE

class UserTab : public QWidget {
Q_OBJECT

public:
    explicit UserTab(QWidget *parent = nullptr);

    void createContent(void);

    ~UserTab() override;

private:
    Ui::UserTab *ui;
    QLabel *userFormLabel;
    QFormLayout *userFormLayout;
    QLineEdit *firstnameLineEdit, *lastnameLineEdit, *emailLineEdit;
    QPushButton *userAddButton, *userRemoveButton;
    QTableWidget *userTable;
};


#endif //QTTP1_USERTAB_H
/*
* ->Widget User
*      ->Widget Form
*          -> Firstname, Lastname, Email
*      ->Buttons
*          ->Add, Delete
*      ->Table view
*          -> First name, Last name, email
 */