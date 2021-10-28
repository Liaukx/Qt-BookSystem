#include"Homepage.h"
#include<QWidget>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include<QDesktopServices>
#include<QUrl>
#include"administorpage.h"





//构造，初始化背景，初始化按钮
Homepage::Homepage(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(1000,600);
    //ifSlience = false;
    InitButton();

}
void Homepage::InitButton(){
    Homepage::custom ->setText("custom");
    Homepage::administor->setText("administor");
    connect(custom,&QPushButton::clicked,this,SLOT(on_custom_click));
    connect(administor,&QPushButton::clicked,this,SLOT(on_administor_clicked));
}
void Homepage::on_custom_clicked(){
    customPage = new CustomPage();
}
void Homepage::on_administor_clicked(){
    administorPage = new AdministorPage();
}
Homepage::~Homepage(){
    delete administor;
    delete custom;
}



