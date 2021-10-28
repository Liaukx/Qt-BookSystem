#include "through_allbook.h"
#include "ui_through_allbook.h"
#include <QDebug>
Through_allBook::Through_allBook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Through_allBook)
{

    ui->setupUi(this);
    win = new QTextEdit();
    setAttribute(Qt::WidgetAttribute::WA_StyledBackground);
//    qDebug("%s",qPrintable( Load_Through()));

    win ->setReadOnly(true);
    ui->win->setText(Load_Through());
}
Through_allBook::~Through_allBook()
{
    delete win;
    delete ui;
}

void Through_allBook::on_Quit_clicked()
{

    UsersLoad_Exit();
//    this->hide();
    close();
}
