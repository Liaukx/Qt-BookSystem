#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "homepage.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Exit = new QPushButton();
    Login = new QPushButton();
    new_win = new homePage();
    info = new QLabel();
    info->setStyleSheet("color:#FFFFFF;font-size:16px;");
    setAttribute(Qt::WidgetAttribute::WA_StyledBackground);
}

MainWindow::~MainWindow()
{
    delete Exit;
    delete Login;
    delete ui;
}

void MainWindow::on_Login_clicked()
{

    new_win = new homePage();
    new_win->setFixedSize(1000,700);
    new_win ->show();
}

void MainWindow::on_Exit_clicked()
{
    close();
}

