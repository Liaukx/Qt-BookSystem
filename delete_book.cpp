#include "delete_book.h"
#include "ui_delete_book.h"

Delete_book::Delete_book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Delete_book)
{
    in_ISBN = new QLineEdit();
    ISBN_info = new QLabel();
    sure = new QPushButton();
    Exit = new QPushButton();
    ui->setupUi(this);
    setAttribute(Qt::WidgetAttribute::WA_StyledBackground);
}

Delete_book::~Delete_book()
{
    delete in_ISBN;
    delete ISBN_info;
    delete sure;
    delete Exit;
    delete ui;
}

void Delete_book::on_sure_clicked()
{
   QString isbn =  ui->in_ISBN ->text();
   AdmLoad_Delete(isbn);
}

void Delete_book::on_Exit_clicked()
{
    AdmLoad_Exit();
    close();
}
