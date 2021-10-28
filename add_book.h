#ifndef ADD_BOOK_H
#define ADD_BOOK_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QString>
#include "Control.h"
namespace Ui {
class Add_book;
}

class Add_book : public QWidget,public Control
{
    Q_OBJECT

public:
    explicit Add_book(QWidget *parent = nullptr);
    ~Add_book();

private slots:
    void on_sure_clicked();

    void on_Exit_clicked();

private:
    Ui::Add_book *ui;
//    QString Title , writer,ISBN ;
//    double price ;
//    int num;
    QLabel * Title_info , * writer_info,* ISBN_info ,* price_info ,* num_info;
    QPushButton * sure,*Exit;
    QLineEdit * in_title , * in_writer, * in_ISBN , * in_price , * in_num;

};

#endif // ADD_BOOK_H
