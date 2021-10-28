//
// Created by 22942 on 2021/6/9.
//
#include "date.h"
#include <QMessageBox>
QTextStream & operator<< (QTextStream & fout,Date date){
    fout << date.getYear() <<"-" << date.getMonth() <<"-" << date.getDay() << "    ";
    return fout;
}
QTextStream & operator >> (QTextStream & fin, Date date){
    int year,month,day;
    char c1,c2;
    fin >> year >> c1 >> month >> c2 >> day;
    if(c1!='-' ||c2!= '-')
         QMessageBox::information(NULL, "提示", "输入格式错误");
    date = Date(year,month,day);
    return fin;
}
