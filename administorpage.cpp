#include "administorpage.h"
#include "ui_administorpage.h"

AdministorPage::AdministorPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdministorPage)
{
    ui->setupUi(this);
    in_adm = new QLineEdit ();
    adm_info = new QLabel();
    adm_info->setStyleSheet("color:#FFFFFF;font-size:16px;");
    adm_sure = new QPushButton();
    new_adm = nullptr;

    setAttribute(Qt::WidgetAttribute::WA_StyledBackground);
    connect(in_adm, SIGNAL(returnPressed()), this, SLOT(on_adm_sure_clicked));

}

AdministorPage::~AdministorPage()
{
    delete ui;
}

void AdministorPage::on_adm_sure_clicked()
{
    QString key = ui->in_adm ->text();
    if(key == ""){
        QMessageBox::information(NULL, "提示", "密码不能为空");
    }else if(key == "KeyOf"){
        this->hide();
        new_adm = new Control_adm();
        new_adm->setFixedSize(1000,700);
        new_adm -> show();
    }else{
         QMessageBox::information(NULL, "提示", "密码错误");
    }
}
