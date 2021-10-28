//
// Created by 22942 on 2021/6/9.
//

#ifndef BOOK_DEMO_ACCOUNT_H
#define BOOK_DEMO_ACCOUNT_H
#include "date.h"
#include <QString>
#include <iostream>
#include <map>
typedef std::ostream ostream;

class account;
class accountRecord{
private:
    Date date;
    const account* acc;
    QString desc;
public:
    accountRecord(const Date date,const account* Acc,const QString& desc):acc(Acc),desc(desc), date(date){}
    QString show()const;
};
typedef std::multimap<Date,accountRecord> RecordMap;

class account{
public:
    account(const QString& id):id(id){}
    void record(const Date& date,const QString& desc);
    QString getId() const{return id;}
//    QString query(const Date & begin,const Date& end)const;

//    ostream &operator <<(ostream& out) {
//        out << id;
//        return out;
//    }
private:
    QString id;
    RecordMap recordMap;
};

#endif //BOOK_DEMO_ACCOUNT_H
