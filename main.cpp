//#include "ui_hompage.h"
#include"mainwindow.h"
#include<QDebug>
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(1000,700);
    w.show();
    return a.exec();
    return 0;
}
