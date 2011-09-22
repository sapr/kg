#ifndef KG_H
#define KG_H

#include <QMainWindow>
#include <QtWebKit/QtWebKit>
#include <QtWebKit/QWebPage>
#include <QtWebKit/QWebView>

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
    QWebView page;
    QWebPage showP;
    Ui::kg *ui;
};

#endif // KG_H
