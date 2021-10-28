#include "return_book.h"
#include "ui_return_book.h"

Return_book::Return_book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Return_book)
{
    year_infor = new QLabel();
    month_infor = new QLabel();
    day_infor = new QLabel();
    name_infor = new QLabel();
    num_infor = new QLabel();

    year_infor->setStyleSheet("color:#FFFFFF;font-size:16px;");
    month_infor->setStyleSheet("color:#FFFFFF;font-size:16px;");
    day_infor->setStyleSheet("color:#FFFFFF;font-size:16px;");
    name_infor->setStyleSheet("color:#FFFFFF;font-size:16px;");
    num_infor->setStyleSheet("color:#FFFFFF;font-size:16px;");


    in_year = new QTextEdit();
    in_month = new QTextEdit();
    in_name = new QTextEdit();
    in_day = new QTextEdit();
    in_num = new QTextEdit();

    Sure = new QPushButton();
    Quit = new QPushButton();
    setAttribute(Qt::WidgetAttribute::WA_StyledBackground);
    ui->setupUi(this);
}
Return_book::~Return_book()
{
    delete year_infor;
    delete month_infor;
    delete day_infor;
    delete  name_infor;
    delete num_infor;

    delete in_year;
    delete in_month;
    delete in_day;

    delete Quit;
    delete Sure;
    delete ui;
}

void Return_book::on_Sure_clicked()
{
    int month = ui->in_month ->text().toInt();
    int year = ui->in_year ->text().toInt();
    int day = ui->in_day ->text().toInt();
    int num = ui->in_num ->text().toInt();
    QString name = ui->in_name -> text();
    if(name != ""){
        UsersLoad_return(year,month,day,name,num);
    }
}

void Return_book::on_Quit_clicked()
{
    AdmLoad_Exit();
    close();
}
