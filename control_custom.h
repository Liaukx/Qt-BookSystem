#ifndef CONTROL_CUSTOM_H
#define CONTROL_CUSTOM_H

#include <QWidget>
#include <QPushButton>
#include "borrow_book.h"
#include "return_book.h"
#include "through_allbook.h"
namespace Ui {
class Control_custom;
}

class Control_custom : public QWidget
{
    Q_OBJECT

public:
    explicit Control_custom(QWidget *parent = nullptr);
    ~Control_custom();
private slots:
    void on_Borrow_clicked();

    void on_Return_clicked();

    void on_Through_clicked();

//    void on_Query_clicked();

    void on_Exit_clicked();

private:
    Ui::Control_custom *ui;
    QPushButton * Borrow,*Return ,*Through,*Exit/*,*Query*/;
    Borrow_book * borrow_book;
    Return_book * return_book;
//    Query_book * query_book;
    Through_allBook * through_allBook;

};

#endif // CONTROL_CUSTOM_H
