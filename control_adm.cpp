#include "control_adm.h"
#include "ui_control_adm.h"

Control_adm::Control_adm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Control_adm)
{
    ui->setupUi(this);
    Add = new QPushButton();
    Delete = new QPushButton();
    Through = new QPushButton();
    Exit = new QPushButton();
    add_book = nullptr;
    delete_book = nullptr;
    through_allBook = nullptr;
    setAttribute(Qt::WidgetAttribute::WA_StyledBackground);
}

Control_adm::~Control_adm()
{

    delete Through;
    delete Exit;
    delete Delete;
    delete Add;
    delete Exit;
    delete ui;
}

void Control_adm::on_Add_clicked()
{
    this ->hide();
    add_book = new Add_book();
    add_book->setFixedSize(1000,700);
    add_book ->show();
}

void Control_adm::on_Delete_clicked()
{
    this ->hide();
    delete_book = new Delete_book();
    delete_book->setFixedSize(1000,700);
    delete_book -> show();
}

void Control_adm::on_Through_clicked()
{
    this ->hide();
    through_allBook = new Through_allBook();
    through_allBook->setFixedSize(1000,700);
//    through_allBook->setFixedSize(700,400);
    through_allBook -> show();
}

void Control_adm::on_Exit_clicked()
{
//    this->hide();
    close();
//    this->show();
}


void Control_adm::receiveLogin()
{
  this->show();
}

