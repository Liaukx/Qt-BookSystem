//
// Created by 22942 on 2021/10/13.
//
#include <QDataStream>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include "Control.h"
#include <QDebug>

Control::Control(){
    Control::Accounts_num = -1;
    logLoad();
    loadAccounts();
    loadBook();
    KEY =  "KeyOf";
}

void Control::logLoad() {
    QString fileName = "D:\\language\\hello_Qt\\log.txt";
    QFile file(fileName);

    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(NULL, "错误", "log文件无法打开");
    }
    else{
//        QTextCodec *codec = QTextCodec::codecForName("GBK");
        QTextStream fin(&file);
        QString line;
        int year,month,day;
        QString id;
        QString cmd,title;
        QString ISBN;
        while(!fin.atEnd()){
            fin >>year>>month >> day >> id >> cmd >>title>> ISBN;

            for(int i = 0;i<Accounts_num;++i){
                if(accounts[i].getId() == id){
                    QString msg = id;
                    msg+=" ";
                    msg+=cmd;
                    msg+= " ";
                    msg += title;
                    msg+= " ";
                    msg+=ISBN;
                    accounts[i].record(Date(year,month,day),msg);
                    qDebug() <<msg ;
                }
            }
            ++Log_num;
        }
        file.close();
    }
}

void Control::FileLog(Date &date, QString &msg) {

    QString fileName = "D:/language/hello_Qt/log.txt";
    QFile file(fileName);

    if(!file.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text)){
        QMessageBox::information(NULL, "错误", "log文件无法打开");
    }

    QTextStream fout(&file);
    fout << QString::number(date.getYear()) <<" "<< QString::number(date.getMonth())<<" "<<QString::number(date.getDay())<<" "<<msg << endl;
}
void Control::loadAccounts() {

    QString fileName = "D:/language/hello_Qt/accounts.txt";
    QFile file(fileName);

    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(NULL, "错误", "account文件无法打开");
    }
    QTextStream fin(&file);
    QString id;
    while(!fin.atEnd()){
        fin >> id;
        accounts.emplace_back(id);
        ++Accounts_num;
    }
    file.close();
}
void Control::loadBook() {

    QString fileName = "D:/language/hello_Qt/Book.txt";
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(NULL, "错误", "Book文件无法打开");
    }

    QTextStream fin(&file);
    QString title,writer,ISBN,price,num;
     while(!fin.atEnd()){
        fin >> title >> writer >> ISBN >> price >> num;
        bool ok ;
        double pri = price.toDouble();
        double n = num.toInt(&ok,10);
        Books.emplace_back(Book(title,writer,ISBN,pri,n));
     }
        //cout << Book_num;
     file.close();
}


//QTextStream &operator<<(QTextStream &out, Book &book){

//    qDebug() << book.getTitle() << " " << book.getWriter()<< " " << book.getISBN() << " " << book.getSPrice() <<" " <<  book.getSNum() << "\n";

//    out << book.getTitle() << " " << book.getWriter()<< " " << book.getISBN() << " " << book.getSPrice() <<" " <<  book.getSNum() << endl;
//    return out;
//}



void Control::UsersLoad_return(int year,int month,int day,QString Title,int num) {
    Date date(year,month,day);
    bool flag = false;
    for(int i = 0;i<Books.size();++i){
        if (Books[i].getTitle() == Title){
            schedule(Books[i]).Return(num);
            QMessageBox::information(NULL, "提示", "还书成功");
            QString msg = accounts[this_user].getId()+QString(" R ")+Title+" "+Books[i].getISBN();
            accounts[this_user].record(date,msg);
            FileLog(date,msg);
            ++Log_num;
            flag = true;
            break;
        }
    }
    if(!flag){
        QMessageBox::information(NULL, "提示", "还书失败");
    }
}
QString Control::Load_Through() {
    QString ans;
    for(int i = 0;i<Books.size();++i){
      ans +=  Books[i].show();
    }
    return ans;
}
//QString Control::UsersLoad_query(Date&date1,Date& date2) {
//    return accounts[this_user].query(date1,date2);
//}
void Control::UsersLoad_Exit(){

//    QString fileName = "Book.txt",fileName2 = "accounts.txt";
//    QFile file (fileName),file2(fileName2);

//    if(!file.open(QIODevice::ReadWrite |  QIODevice::Text)){
//        QMessageBox::information(NULL, "错误", "Book文件无法打开");
//    }
//    if(!file2.open(QIODevice::ReadWrite | QIODevice::Text)){
//        QMessageBox::information(NULL, "错误", "accounts文件无法打开");
//    }

//    QTextStream fout(&file), fout2(&file2);
//    for(int i = 0;i<Books.size();++i){
//        fout << Books[i] << endl;
//    }
//    for(int i = 0;i<Accounts_num;++i){
//        fout2 << accounts[i].getId()<<endl;
//    }
//    QMessageBox::information(NULL, "提示", "系统即将退出");
    AdmLoad_Exit();
}

void Control::UsersLoad_borrow(int year,int month,int day, QString Title,int num) {
    Date date(year,month,day);
    bool flag = false;
    for(int i = 0;i<Books.size();++i){
        if (Books[i].getTitle() == Title){
            flag = true;
            if(schedule(Books[i]).Borrow(num)){
                QMessageBox::information(NULL, "提示", "借书成功");
                QString msg = accounts[this_user].getId()+QString(" B ")+Title+" "+Books[i].getISBN();
                accounts[this_user].record(date,msg);
                FileLog(date,msg);
                ++Log_num;
                break;
            } else{
                QMessageBox::information(NULL, "提示", "库存不足");
            }
        }
    }
    if(!flag){
        QMessageBox::information(NULL, "错误", "查无此书");
    }
}
void Control::AdmLoad_Delete(QString ISBN){

    bool flag = false;

    vector<Book>::iterator itor;
        for(itor=Books.begin();itor!=Books.end();itor++)
        {
            if(itor->getISBN() == ISBN){
                itor = Books.erase(itor);
                flag = true;
                break;
            }
        }
        if (flag){
            QMessageBox::information(NULL, "提示", "删除成功");
        }else{
            QMessageBox::information(NULL, "提示", "找不到这本书");
        }

}
void Control::AdmLoad_Exit(){

    QString fileName2 = "Book.txt";
    QFile file (fileName2);
    if(!file.open(QIODevice::ReadWrite| QIODevice::Truncate|QIODevice::Text)){
         QMessageBox::information(NULL, "错误", "Book文件无法打开");
    }

    QTextStream fout(&file);
    vector<Book>::iterator itor;
    for(itor=Books.begin();itor!=Books.end();itor++)
    {
        qDebug() << itor->getTitle() << " " <<itor->getWriter()<< " " << itor->getISBN() << " " << itor->getSPrice() <<" " << itor->getSNum() << endl;
        fout << itor->getTitle() << " " <<itor->getWriter()<< " " << itor->getISBN() << " " << itor->getSPrice() <<" " << itor->getSNum() << endl;
    }
    file.close();
}
void Control::AdmLoad_Add( QString Title,QString writer,QString ISBN, double price,int num){

      Books.emplace_back(Book(Title,writer,ISBN,price,num));
      QMessageBox::information(NULL, "提示", "添加图书成功");

}

