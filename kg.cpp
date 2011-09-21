#include "kg.h"
#include "ui_kg.h"

kg::kg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kg)
{
    ui->setupUi(this);
}

kg::~kg()
{
    ui->menuBar->acceptDrops();
    delete ui;
}
