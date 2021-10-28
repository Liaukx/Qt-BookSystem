#ifndef DELETE_BOOK_H
#define DELETE_BOOK_H

#include <QWidget>
#include <QString>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include "Control.h"
namespace Ui {
class Delete_book;
}

class Delete_book : public QWidget,public Control
{
    Q_OBJECT

public:
    explicit Delete_book(QWidget *parent = nullptr);
    ~Delete_book();

private slots:
    void on_sure_clicked();

    void on_Exit_clicked();

private:
    Ui::Delete_book *ui;
    QString ISBN;
    QLineEdit * in_ISBN;
    QLabel * ISBN_info;
    QPushButton * sure,*Exit;
};

#endif // DELETE_BOOK_H
