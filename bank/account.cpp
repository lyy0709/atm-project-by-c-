#include "account.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include <QApplication>
#include <QDir>

Account::Account(){}
Account::~Account(){}

// 加载（将文件中的数据加载到链表中）
int Account::load()
{
    ls_account=QApplication::applicationDirPath()+"/data";
    QString myaccount = ls_account+"/"+"account.txt";
    m_accounts.clear(); // 清空数据
    QFile file(myaccount);
    if(!file.open(QIODevice::ReadWrite/*Only*/|QIODevice::Text))
    {qDebug()<<"未打开文件";
        return -1;}
    QTextStream in(&file);
    while(!in.atEnd()) {
        AccountInfo user;   // 临时用户
        QString s = in.readLine();
        QStringList info = s.split(" ");

        // 把相关信息赋值给临时对象
        user.name = info[0];
        user.gendr = info[1];
        user.phonenum = info[2];
        user.address = info[3];
        user.sfid = info[4];
        user.account = info[5];
        user.passWord = info[6];
        user.type = info[7];
        user.balance = info[8].toDouble();

        // 将临时对象添加到链表尾端
        m_accounts.push_back(user);
    }
    file.close();
    return 0;
}

// 保存(将链表中的全部数据写入到文件中)
int Account::save()
{
    ls_account=QApplication::applicationDirPath()+"/data";
    QString myaccount = ls_account+"/"+"account.txt";
    QFile file(myaccount);
    if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
    { return -1; }
    QTextStream out(&file);
    for(AccountInfoList::iterator iter = m_accounts.begin();
        iter != m_accounts.end(); iter++)
    {
        AccountInfo& user = *iter;
        out <<user.name<<" "<<user.gendr<<" "<<user.phonenum<<" "<<user.address<<" "<<user.sfid<<" "<<user.account<<" "<<user.passWord<<" "<<user.type<<" "<< QString::number(user.balance) << endl;
    }

    return 0;
}

// 查找账户信息
bool Account::find(QString aim)
{
    for(AccountInfoList::iterator iter = m_accounts.begin();
        iter != m_accounts.end(); iter++)
    {
        AccountInfo& user = *iter;
        if(user.account == aim)
        {
            m_user = *iter;     // 保存登录的用户的信息
            m_iter_user = iter; // 将登陆的用户的信息在迭代器中的地址保存起来
            return true;
        }
    }
    return false;
}

bool Account::findmm(QString phone)
{
    for(AccountInfoList::iterator iter = m_accounts.begin();
        iter != m_accounts.end(); iter++)
    {
        AccountInfo& user = *iter;
        if(user.phonenum == phone)
        {
            m_user = *iter;     // 保存登录的用户的信息
            m_iter_user = iter; // 将登陆的用户的信息在迭代器中的地址保存起来
            return true;
        }
    }
    return false;
}
//储蓄卡存取钱
bool Account::changeBalance(double rmb,int flag)
{
    AccountInfo& user = *m_iter_user;
    if(flag==0){
    if(user.balance + rmb >= 0)
    {
        user.balance += rmb;
        save(); // 将更新后的信息写入到文件
        return true;
    }
    else
    {
        QMessageBox::warning(NULL, "警告！", "失败，余额不足！");
        return false;
    }}
    if(flag==1){
    if(user.balance + rmb >= -10000)
    {
        user.balance += rmb;
        save(); // 将更新后的信息写入到文件
        return true;
    }
    else
    {
        QMessageBox::warning(NULL, "警告！", "失败，余额不足！");
        return false;
    }}
    if(flag==2){
    if(user.balance + rmb >= -5000)
    {
        user.balance += rmb;
        save(); // 将更新后的信息写入到文件
        return true;
    }
    else
    {
        QMessageBox::warning(NULL, "警告！", "失败，余额不足！");
        return false;
    }}
}

// 修改密码
bool Account::changepw(QString passw1, QString passw2)
{
    AccountInfo& user = *m_iter_user;
    if(passw1 == passw2)
    {
        user.passWord = passw1;
        save(); // 将更新后的信息写入到文件
        QMessageBox::about(NULL, "消息！", "密码更改成功！");
        return true;
    }
    else
    {
        QMessageBox::critical(NULL, "密码错误！", "密码输入不一致");
        return false;
    }
}
//账户注销
bool Account::deletezh()
{
    int a;
    for(AccountInfoList::iterator iter = m_accounts.begin();
        iter != m_accounts.end();)
    {

        if(iter==m_iter_user)
        {
            iter=m_accounts.erase(iter);
        }
        else{
            iter++;
        }
    }
    a=save();
    if(a==0)
    {
         QMessageBox::information(NULL,"提示！","您的账户已注销！");
    }
}
