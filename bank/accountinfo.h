#ifndef ACCOUNTINFO_H
#define ACCOUNTINFO_H

#include <list>
using namespace std;

// 一个账户
class AccountInfo {
public:
    QString account;
    QString passWord;
    QString phonenum;
    QString sfid;
    QString gendr;
    QString address;
    QString type;
    QString name;
    double balance;
};

// 列表
typedef list<AccountInfo> AccountInfoList;

#endif // ACCOUNTINFO_H
