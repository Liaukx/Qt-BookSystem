 //
// Created by 22942 on 2021/10/13.
//

#ifndef TEST_CONTROL_H
#define TEST_CONTROL_H
#include "account.h"
#include "Book.h"
#include <vector>
#include <QString>
#include "schedule.h"
#include<QMessageBox>
#include <QTextEdit>
//#include "through_allbook.h"
using namespace std;
class Control{
public:
    Control();
    vector<account> accounts;
    vector<Book> Books;
    int Accounts_num;
    int Log_num = -1;
    QString KEY ;
    void FileLog(Date& date,QString& msg);
    void logLoad();
    void loadAccounts();
    void loadBook();

    int this_user = 0;

    void login(QString id);
    void UsersLoad_borrow(int year,int month,int day, QString Title,int num);
    void UsersLoad_return(int year,int month,int day,QString Title,int num);
    QString Load_Through();
    QString UsersLoad_query(Date & date1,Date& date2);
    void UsersLoad_Exit();
    void AdmLoad_Delete(QString ISBN);
    void AdmLoad_Exit();
    void AdmLoad_Add( QString Title,QString writer,QString ISBN, double price,int num);
};

#endif //TEST_CONTROL_H
