//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_BORROWTAB_H
#define QTTP1_BORROWTAB_H

#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QTableWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class BorrowTab; }
QT_END_NAMESPACE

class BorrowTab : public QWidget {
Q_OBJECT

public:
    explicit BorrowTab(QWidget *parent = nullptr);

    void createContent(void);

    ~BorrowTab() override;

private:
    Ui::BorrowTab *ui;
    QComboBox *userComboBox, *bookComboBox;
    QPushButton *borrowButton, *returnButton;
    QTableWidget *borrowTable;

};


#endif //QTTP1_BORROWTAB_H

/*
 * ->WidgetBorrow
 *      ->Combobox user
 *      ->combobox books
 *      ->borrow button
 *
 *      ->Table View
 *          -> return button
 */