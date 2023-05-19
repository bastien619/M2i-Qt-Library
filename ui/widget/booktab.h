//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_BOOKTAB_H
#define QTTP1_BOOKTAB_H

#include <QWidget>
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>



QT_BEGIN_NAMESPACE
namespace Ui { class BookTab; }
QT_END_NAMESPACE

class BookTab : public QWidget {
Q_OBJECT

public:
    explicit BookTab(QWidget *parent = nullptr);

    void createContent(void);

    ~BookTab() override;

private:
    Ui::BookTab *ui;
    QLabel *bookFormLabel;
    QFormLayout *bookFormLayout;
    QLineEdit *isbnLineEdit, *titleLineEdit, *authorLineEdit;
    QPushButton *bookAddButton, *bookRemoveButton, *bookSubmitButton;
    QTableWidget *bookTable;

};


#endif //QTTP1_BOOKTAB_H
/*
*  ->Widget Books
*      ->Widget Form
*          ->ISBN,Titre,Author
*      ->Buttons
*          ->Add, Delete, Submit(non fonctionnel)
*      ->Table view
*          ->ISBN,Titre,Author
*/