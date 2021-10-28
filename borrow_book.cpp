#include "borrow_book.h"
#include "ui_borrow_book.h"

Borrow_book::Borrow_book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Borrow_book)
{
    year_info = new QLabel();
    month_info = new QLabel();
    day_info = new QLabel();
    num_info = new QLabel();

    year_info->setStyleSheet("color:#FFFFFF;font-size:16px;");
    month_info->setStyleSheet("color:#FFFFFF;font-size:16px;");
    day_info->setStyleSheet("color:#FFFFFF;font-size:16px;");
    num_info->setStyleSheet("color:#FFFFFF;font-size:16px;");

    in_year = new QLineEdit();
    in_month = new QLineEdit();
    in_day = new QLineEdit();
    in_num = new QLineEdit();
    in_name = new QLineEdit();
    Sure = new QPushButton();
    Exit = new QPushButton();
    ui->setupUi(this);
    setAttribute(Qt::WidgetAttribute::WA_StyledBackground);
}

Borrow_book::~Borrow_book()
{
    delete year_info;
    delete month_info;
    delete day_info;
    delete num_info;
    delete in_year;
    delete in_month;
    delete in_day;
    delete in_num;
    delete in_name;
    delete Exit;
    delete Sure;
    delete ui;
}

void Borrow_book::on_sure_clicked()
{
    //执行借书程序
    int month = ui->in_month ->text().toInt();
    int year = ui->in_year ->text().toInt();
    int day = ui->in_day ->text().toInt();
    int num = ui->in_num ->text().toInt();
    QString Title = ui->in_name -> text();

    if(Title != ""){
        UsersLoad_borrow(year,month,day,Title,num);
    }

}

void Borrow_book::on_Exit_clicked()
{
    AdmLoad_Exit();
    close();
//    this->hide();
}
