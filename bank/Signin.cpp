#include "Signin.h"
#include "ui_signin.h"
#include "Zhucexx.h"
#include "Wanji.h"
#include "dialog.h"
#include "Guanli.h"
#include <QPainter>
#include <QMouseEvent>
#include <QMessageBox>
#include <QDebug>
#include <QDialog>
#include <QApplication>
#include "data.h"
Signin::Signin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signin)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint|Qt::WindowMinimizeButtonHint|Qt::WindowMaximizeButtonHint);//任务栏使程序最小化
    setAttribute(Qt::WA_TranslucentBackground);
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/image/1000.jpg"),QSize(),QIcon::Normal,QIcon::Off);
    ui->gly->setIcon(icon);
    ui->gly->setIconSize(QSize(80,80));
}

Signin::~Signin()
{
    delete ui;
}

void Signin::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Signin::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}

void Signin::closeEvent(QCloseEvent *ev)
{
    int choose;
    choose=QMessageBox::question(this,tr("退出程序"),QString(tr("确认退出程序？")),QMessageBox::Yes|QMessageBox::No);
        if(choose==QMessageBox::Yes)
        {
            ev->accept();
              QApplication *app;
              app->quit();
        }
        else
        {
             ev->ignore();
        }

}

void Signin::on_mini_clicked()
{
    showMinimized();
}

void Signin::on_close_clicked()
{
    close();

}

void Signin::on_signin_pressed()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    QString user = ui->username->text();
    QString passw = ui->password->text();

    // 加载数据
    m_Data.load();

    if(user == "" || passw == "") {
        QMessageBox::information(this, tr("警告！"), tr("请输入正确的用户名和密码！"), QMessageBox::Yes);
    }
    else
    {

        if(m_Data.find(user))
        {   // 若能查找到输入的用户名，则要判断密码是否正确
            AccountInfo user = *m_Data.m_iter_user; // 将登陆用户在链表迭代器中的值取出来
            if(user.passWord == passw)
            {
                QMessageBox::information(this, tr("登陆成功！"), tr("欢迎进入ATM系统"));
                m_Data.save();
                this->hide();
                Dialog *d=new Dialog;
                d->exec();
            }
            else {
                QMessageBox::information(this, tr("警告！"), tr("请输入正确的用户名和密码！"));
            }
        }
        else {
            QMessageBox::information(this, tr("警告！"), tr("未找到该用户，请重新输入！"));
        }
    }
}

void Signin::on_signin_released()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}

void Signin::on_zhucexx_clicked()
{
    this->hide();
    Zhucexx *z=new Zhucexx(this);
    z->exec();
}

void Signin::on_wanji_clicked()
{
    this->hide();
    Wanji *w=new Wanji(this);
    w->exec();
}


void Signin::on_gly_clicked()
{
    this->hide();
    Guanli *g=new Guanli(this);
    g->exec();
}
