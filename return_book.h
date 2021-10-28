#ifndef RETURN_BOOK_H
#define RETURN_BOOK_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QString>
#include "Control.h"
namespace Ui {
class Return_book;
}

class Return_book : public QWidget,public Control
{
    Q_OBJECT

public:
    explicit Return_book(QWidget *parent = nullptr);
    ~Return_book();
private slots:
    void on_Sure_clicked();

    void on_Quit_clicked();

private:
    Ui::Return_book *ui;
    QLabel * year_infor, * month_infor, * day_infor, * name_infor,*num_infor;
    QTextEdit * in_year, *in_month, *in_day, *in_name,*in_num;
    QPushButton * Sure , *Quit;
};


#endif // RETURN_BOOK_H
