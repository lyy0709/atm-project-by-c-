#include "Chaxun.h"
#include "ui_Chaxun.h"
#include "dialog.h"
#include <QPainter>
#include <QMouseEvent>
#include <QApplication>
#include <QDesktopWidget>
#include "data.h"
Chaxun::Chaxun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chaxun)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);
    AccountInfo user = *m_Data.m_iter_user;
    ui->name->setText(user.name);
    ui->gendr->setText(user.gendr);
    ui->phonenum->setText(user.phonenum);
    if(user.type=="debit")
    {
        ui->type->setText("储蓄卡");
    }
    else if(user.type=="credit")
    {
        ui->type->setText("信用卡");
    }
    else if(user.type=="compcard")
    {
        ui->type->setText("复合卡");
    }
    else
    {
        ui->type->setText("非法卡");
    }
    ui->rmb->setText(QString::number(user.balance));
}

Chaxun::~Chaxun()
{
    delete ui;
}

void Chaxun::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Chaxun::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}

void Chaxun::on_close_clicked()
{
    close();
    Dialog *d=new Dialog;
    QDesktopWidget *deskdop=QApplication::desktop();
    d->move((deskdop->width()-d->width())/2,(deskdop->height()-d->height())/2);//窗口保持在中心
    d->exec();
}

void Chaxun::on_signin_clicked()
{
    close();
    Dialog *d=new Dialog;
    QDesktopWidget *deskdop=QApplication::desktop();
    d->move((deskdop->width()-d->width())/2,(deskdop->height()-d->height())/2);//窗口保持在中心
    d->exec();
}

