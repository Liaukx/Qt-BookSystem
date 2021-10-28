#include "homepage.h"
#include "ui_homepage.h"

homePage::homePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::homePage)
{
    ui->setupUi(this);
    Adm = new QPushButton();
    custom = new QPushButton();
    Exit = new QPushButton();
    administor_win = nullptr;
    custom_win = nullptr;
    infor = new QLabel();
    infor->setStyleSheet("color:#FFFFFF;font-size:16px;");
    setAttribute(Qt::WidgetAttribute::WA_StyledBackground);
}
homePage::~homePage()
{
    delete Adm;
    delete custom;
    delete Exit;
    delete ui;
}

void homePage::on_Adm_clicked()
{
    this->hide();
    administor_win = new AdministorPage();
    administor_win->setFixedSize(1000,700);
    administor_win -> show();
}

void homePage::on_custom_clicked()
{
    this->hide();
    custom_win = new Custompage();
    custom_win->setFixedSize(1000,700);
    custom_win -> show();
}

void homePage::on_Exit_clicked()
{
    this->show();
    close();
}
