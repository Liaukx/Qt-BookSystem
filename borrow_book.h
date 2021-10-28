#ifndef BORROW_BOOK_H
#define BORROW_BOOK_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QString>

#include "Control.h"
namespace Ui {
class Borrow_book;
}

class Borrow_book : public QWidget,public Control
{
    Q_OBJECT

public:
    explicit Borrow_book(QWidget *parent = nullptr);
    ~Borrow_book();
private slots:
    void on_sure_clicked();
    void on_Exit_clicked();

private:
    Ui::Borrow_book *ui;
    QLabel * year_info , * month_info , * day_info, * name_info, * num_info;
    QLineEdit * in_year , * in_month , * in_day, *in_name , * in_num;
    QPushButton * Sure,*Exit;

};

#endif // BORROW_BOOK_H
