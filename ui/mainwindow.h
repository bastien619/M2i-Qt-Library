//
// Created by Administrateur on 17/05/2023.
//

#ifndef QTTP1_MAINWINDOW_H
#define QTTP1_MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include "widget/booktab.h"
#include "widget/usertab.h"
#include "widget/borrowtab.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    void createContent(void);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
    QTabWidget *tabWidget;
    BookTab *bookTab;
    UserTab *userTab;
    BorrowTab *borrowTab;
};


#endif //QTTP1_MAINWINDOW_H


/*MainWindow
 *->TabWidget
 *  ->Widget Books
 *      ->Widget Form
 *          ->ISBN,Titre,Author
 *      ->Buttons
 *          ->Add, Delete, Submit(non fonctionnel)
 *      ->Table view
 *          ->ISBN,Titre,Author
 *  ->Widget User
 *      ->Widget Form
 *          -> Firstname, Lastname, Email
 *      ->Buttons
 *          ->Add, Delete
 *      ->Table view
 *          -> First name, Last name, email
 *   ->WidgetBorrow
 *      ->Combobox user
 *      ->combobox books
 *      ->borrow button
 *
 *      ->Table View
 *          -> return button
 *
 *
 *
 */