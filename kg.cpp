#include "kg.h"
#include "ui_kg.h"

kg::kg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kg)
{
    QUrl url;
    url=QUrl("http://html5game.ru/index.php?menu=catalog&id=7");
    page.load(url);
    page.show();

}

kg::~kg()
{
    delete ui;
}
