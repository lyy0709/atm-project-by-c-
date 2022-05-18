#include "Jisuan.h"
#include "ui_Jisuan.h"
#include "dialog.h"
#include <QPainter>
#include <QMouseEvent>
#include <QApplication>
#include <QDesktopWidget>
#include <QMessageBox>
#include "data.h"
Jisuan::Jisuan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Jisuan)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);
    AccountInfo user = *m_Data.m_iter_user;
    flag=3;
    rmb=user.balance;
    if(user.type=="debit"||user.type=="compcard")
    {
        if(rmb>=0)
        {
            QMessageBox::information(NULL,tr("提示！"),tr("您可以进行利息计算"));
        }
        else
        {
            QMessageBox::information(NULL,tr("提示！"),tr("尊敬的复合卡用户您的余额不足请存款"));
            close();
            Dialog *d=new Dialog;
            QDesktopWidget *deskdop=QApplication::desktop();
            d->move((deskdop->width()-d->width())/2,(deskdop->height()-d->height())/2);//窗口保持在中心
            d->exec();
        }
    }
    else
    {
        QMessageBox::information(NULL,tr("提示！"),tr("尊敬的信用卡用户您不能进行利息存储"));
        close();
        Dialog *d=new Dialog;
        QDesktopWidget *deskdop=QApplication::desktop();
        d->move((deskdop->width()-d->width())/2,(deskdop->height()-d->height())/2);//窗口保持在中心
        d->exec();
    }
}

Jisuan::~Jisuan()
{
    delete ui;
}

void Jisuan::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Jisuan::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}

void Jisuan::on_close_clicked()
{
    close();
    Dialog *d=new Dialog;
    QDesktopWidget *deskdop=QApplication::desktop();
    d->move((deskdop->width()-d->width())/2,(deskdop->height()-d->height())/2);//窗口保持在中心
    d->exec();
}

double Jisuan::dingqi(double rmb,int flag)
{
    double sum;
    if(flag==3)
    {
        sum=rmb*pow((1+0.011),3);
    }
    if(flag==6)
    {
        sum=rmb*pow((1+0.013),6);
    }
    if(flag==12)
    {
        sum=rmb*pow((1+0.015),12);
    }
    if(flag==24)
    {
        sum=rmb*pow((1+0.021),24);
    }
    int t;double num;
    sum=sum*1000;
    t=(sum+5)/10;
    num=(double)t/100;
    return num;
}

double Jisuan::huoqi(double rmb, int yue)
{
    double sum,num;
    int t;
    sum=rmb*pow((1+0.003),yue);
    sum=sum*1000;
    t=(sum+5)/10;
    num=(double)t/100;
    return num;
}


void Jisuan::on_sany_pressed()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    flag=3;
   ui->jisuan->setText(QString::number(dingqi(rmb,flag)));
}

void Jisuan::on_liuy_pressed()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    flag=6;
    ui->jisuan->setText(QString::number(dingqi(rmb,flag)));
}

void Jisuan::on_yin_pressed()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    flag=12;
   ui->jisuan->setText(QString::number(dingqi(rmb,flag)));
}

void Jisuan::on_ern_pressed()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    flag=24;
   ui->jisuan->setText(QString::number(dingqi(rmb,flag)));
}

void Jisuan::on_sany_released()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}

void Jisuan::on_liuy_released()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}

void Jisuan::on_yin_released()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}

void Jisuan::on_ern_released()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}

void Jisuan::on_signin_pressed()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    int yue=ui->huoqi->text().toInt();
    ui->jisuan->setText(QString::number(huoqi(rmb,yue)));
}

void Jisuan::on_signin_released()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}
