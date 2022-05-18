#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<Qdialog>
#include"accountinfo.h"

class Account{
public:
    QString account;
    QString password;
    QString name;
    QString gendr;
    QString address;
    QString phonenum;
    QString sfid;
    double balance;
    Account();
    ~Account();

    // 加载（将文件中的数据加载到链表中）
    int load();

    // 保存(将链表中的全部数据写入到文件中)
    int save();

    // 查找账户信息
    bool find(QString aim);

    //密码忘记时查找账户密码
    bool findmm(QString phone);

    //银行卡存取款
    bool changeBalance(double rmb,int flag);

    //密码修改
    bool changepw(QString passw1, QString passw2);

    //注销账户
    bool deletezh();

public:
    QString ls_account;
    AccountInfoList m_accounts; // 所有账户保存在一个链表中
    AccountInfo m_user;         // 登录的用户
    AccountInfoList::iterator m_iter_user;   // 登陆用户在链表中的表示
};

#endif // ACCOUNT_H
