//
// Created by Administrateur on 17/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_BookTab.h" resolved

#include "booktab.h"
#include "ui_BookTab.h"


BookTab::BookTab(QWidget *parent) :
        QWidget(parent), ui(new Ui::BookTab) {
    ui->setupUi(this);
}

BookTab::~BookTab() {
    delete ui;
}
