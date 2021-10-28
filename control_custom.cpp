#include "control_custom.h"
#include "ui_control_custom.h"

Control_custom::Control_custom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Control_custom)
{
    ui->setupUi(this);
    Borrow = new QPushButton();
    Return = new QPushButton();
    Through = new QPushButton();
    Exit = new QPushButton();
//    Query = new QPushButton();
    borrow_book = nullptr;
    return_book = nullptr;
//    query_book = nullptr;
    through_allBook = nullptr;
    setAttribute(Qt::WidgetAttribute::WA_StyledBackground);
}

Control_custom::~Control_custom()
{
    delete Borrow;
    delete Return;
//    delete Query;
    delete Through;
    delete Exit;
    delete ui;
}

void Control_custom::on_Borrow_clicked()
{
    this ->hide();
    borrow_book = new Borrow_book();
    borrow_book->setFixedSize(1000,700);
    borrow_book -> show();
}

void Control_custom::on_Return_clicked()
{
    this ->hide();
    return_book = new Return_book();
    return_book->setFixedSize(1000,700);
    return_book -> show();
}

void Control_custom::on_Through_clicked()
{
    this ->hide();
    through_allBook = new Through_allBook();
    through_allBook->setFixedSize(1000,700);
    through_allBook -> show();
}

void Control_custom::on_Exit_clicked()
{
//    this->hide();
    close();
//    this->show();
}
