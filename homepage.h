#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include <QPushButton>
#include "Control.h"
#include "administorpage.h"
#include "custompage.h"
#include "mainwindow.h"
namespace Ui {
class homePage;
}
class Custompage;
class homePage : public QWidget
{
    Q_OBJECT

public:
    explicit homePage(QWidget *parent = nullptr);
    ~homePage();
private slots:
    void on_Adm_clicked();

    void on_custom_clicked();

    void on_Exit_clicked();

private:
    Ui::homePage *ui;
    QPushButton * Adm,*custom, * Exit;
    QLabel * infor;
    AdministorPage * administor_win;
    Custompage *custom_win;
};

#endif // HOMEPAGE_H
