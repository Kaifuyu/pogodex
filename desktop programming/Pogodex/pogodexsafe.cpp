#include "pogodexsafe.h"
#include "ui_pogodexsafe.h"

pogodexsafe::pogodexsafe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pogodexsafe)
{
    ui->setupUi(this);
}

pogodexsafe::~pogodexsafe()
{
    delete ui;
}
