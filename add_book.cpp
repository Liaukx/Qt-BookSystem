#include "add_book.h"
#include "ui_add_book.h"

Add_book::Add_book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add_book)
{
    Title_info = new QLabel();
    writer_info = new QLabel();
    ISBN_info = new QLabel();
    price_info = new QLabel();
    num_info = new QLabel();


    Title_info->setStyleSheet("color:#FFFFFF;font-size:16px;");
    writer_info->setStyleSheet("color:#FFFFFF;font-size:16px;");
    ISBN_info->setStyleSheet("color:#FFFFFF;font-size:16px;");
    price_info->setStyleSheet("color:#FFFFFF;font-size:16px;");
    price_info->setStyleSheet("color:#FFFFFF;font-size:16px;");
    num_info->setStyleSheet("color:#FFFFFF;font-size:16px;");


    in_title = new QLineEdit();
    in_writer = new QLineEdit();
    in_ISBN = new QLineEdit();
    in_price = new QLineEdit();
    in_num = new QLineEdit();

    sure = new QPushButton();
    Exit = new QPushButton();

    ui->setupUi(this);
    this->setFocusPolicy(Qt::ClickFocus);
    setAttribute(Qt::WidgetAttribute::WA_StyledBackground);
}

Add_book::~Add_book()
{
    delete Title_info;
    delete writer_info;
    delete ISBN_info;
    delete price_info;
    delete num_info;
    delete sure;
    delete in_title;
    delete in_writer;
    delete in_ISBN;
    delete in_price;
    delete in_num;
    delete Exit;
    delete ui;
}

void Add_book::on_sure_clicked()
{
    //执行添加新书，返回对话框
    QString Title = ui->in_title -> text();
    QString writer = ui->in_writer -> text();
    QString ISBN = ui->in_ISBN -> text();
    double price = ui->in_price -> text().toDouble();
    int num = ui->in_num -> text().toInt();
    if(Title != "" && writer != "" && ISBN != "" ){

        AdmLoad_Add(Title,writer,ISBN,price,num);
    }
}


void Add_book::on_Exit_clicked()
{
    AdmLoad_Exit();
//    this->hide();
    close();
}
