#ifndef KG_H
#define KG_H

#include <QMainWindow>

namespace Ui {
    class kg;
}

class kg : public QMainWindow
{
    Q_OBJECT

public:
    explicit kg(QWidget *parent = 0);
    ~kg();

private:
    Ui::kg *ui;
};

#endif // KG_H
