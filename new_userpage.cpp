#include "new_userpage.h"
#include "ui_new_userpage.h"

new_Userpage::new_Userpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::new_Userpage)
{
    ui->setupUi(this);
}

new_Userpage::~new_Userpage()
{
    delete ui;
}

void new_Userpage::on_sure_clicked()
{
    Load::accounts.emplace_back(id);
    Load::Accounts_num += 1;
    close();
}

void new_Userpage::on_in_id_editingFinished()
{
    id = in_id ->text();
}
