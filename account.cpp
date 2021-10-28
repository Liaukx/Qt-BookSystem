//
// Created by 22942 on 2021/6/9.
//

#include "account.h"
#include <iostream>
using namespace std;
QString accountRecord::show() const {

    QString ans = date.showDate();
    return ans + QString::number( date.getYear())+ "-" +QString::number(date.getMonth()) +"-" +QString::number(date.getDay())+ "   "+ acc->getId() + "   " + desc+ "\n";
}

void account::record(const Date& date,const QString& desc){
    account::recordMap.insert(make_pair(date, accountRecord(date,this,desc)));
}

