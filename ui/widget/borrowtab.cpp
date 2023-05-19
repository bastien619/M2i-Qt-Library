//
// Created by Administrateur on 17/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_BorrowTab.h" resolved

#include "borrowtab.h"
#include "ui_BorrowTab.h"


BorrowTab::BorrowTab(QWidget *parent) :
        QWidget(parent), ui(new Ui::BorrowTab) {
    ui->setupUi(this);
}

BorrowTab::~BorrowTab() {
    delete ui;
}
