#include "Guanli.h"
#include "ui_Guanli.h"
#include "Signin.h"
#include "File.h"
#include <QPainter>
#include <QMouseEvent>
#include <QMessageBox>
#include <QApplication>
#include <QDesktopWidget>
#include "data.h"
Guanli::Guanli(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Guanli)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);
}

Guanli::~Guanli()
{
    delete ui;
}

void Guanli::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Guanli::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}

void Guanli::on_close_clicked()
{
    close();
    Signin *s=new Signin;
    s->exec();
}

void Guanli::on_pushButton_clicked()
{
    QString accout=ui->account->text();
    QString password=ui->password->text();
    if(accout=="lyy0709")
    {
        if(password=="qlyy0103")
        {
            QMessageBox::information(this,tr("提示！"),tr("密码正确，登录成功！"));
            close();
            File *f=new File;
            f->exec();
        }
        else
        {
             QMessageBox::warning(this,tr("警告！"),tr("密码错误！"));
             close();
             Signin *s=new Signin;
             QDesktopWidget *deskdop=QApplication::desktop();
             s->move((deskdop->width()-s->width())/2,(deskdop->height()-s->height())/2);//窗口保持在中心
             s->exec();
        }
    }
    else
    {
        QMessageBox::warning(this,tr("警告！"),tr("未找到管理员账号！"));
    }
}
