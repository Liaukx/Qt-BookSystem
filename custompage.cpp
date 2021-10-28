#include "custompage.h"
#include "ui_custompage.h"

Custompage::Custompage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Custompage)
{
    ui->setupUi(this);
    id_info = new QLabel();
//    user_info = new QLabel();

    id_info->setStyleSheet("color:#FFFFFF;font-size:16px;");
//    user_info->setStyleSheet("color:#FFFFFF;font-size:16px;");

    in_id = new QLineEdit();
    sure = new QPushButton();

    control_custom = nullptr;
    setAttribute(Qt::WidgetAttribute::WA_StyledBackground);
}

Custompage::~Custompage()
{
    delete ui;
}

void Custompage::custom_login(){
    id = ui->in_id ->text();
    bool flag = false;
    for (int i = 0; i < Accounts_num; ++i) {
        if (accounts[i].getId() == id) {
            this_user = i;
            flag = true;
            control_custom = new Control_custom();
            control_custom -> show();
            close();
        }
    }
    if(!flag){
        QMessageBox::information(NULL, "提示", "未注册");
    }
}


void Custompage::on_sure_clicked()
{
    custom_login();
}
