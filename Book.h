//
// Created by 22942 on 2021/6/5.
//

#ifndef BOOK_H
#define BOOK_H
#include <QString>
#include <iostream>
#include <fstream>
#include <QLineEdit>
#include <QTextEdit>
#include <QByteArray>
#include <QDebug>
class Book {
public:
    Book(QString &title,QString& writer,QString& IsBN,double price,int num):title(title),writer(writer),ISBN(IsBN),price(price),num(num){}
    QString getTitle() const{return title;}
    QString getWriter()const{return writer;}
    QString getISBN()const{return ISBN;}
    int getNum() const{return num;}
    QString getSNum(){return QString::number(num);}
    double getPrice()const{return price;}
    QString getSPrice(){return QString::number(price);}
    void setNum(int n){num = n;}
    QString show(){
//       qDebug() << title+ " " + writer + " " + ISBN + " " + getPrice() + "  "+ getNum() + "\n";
        return  title+ " " + writer + " " + ISBN + " " + getSPrice() + "  "+ getSNum() + "\n";
    };


private:
    QString title;
    QString writer;
    QString ISBN;
    double price;
    int num;
};

#endif //BOOKSYSETM_BOOK_H
