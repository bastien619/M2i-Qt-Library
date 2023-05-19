//
// Created by Administrateur on 17/05/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_UserTab.h" resolved

#include "usertab.h"
#include "ui_UserTab.h"


UserTab::UserTab(QWidget *parent) :
        QWidget(parent), ui(new Ui::UserTab) {
    ui->setupUi(this);
}

UserTab::~UserTab() {
    delete ui;
}
