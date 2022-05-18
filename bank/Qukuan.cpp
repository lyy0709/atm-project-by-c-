#include "Qukuan.h"
#include "ui_Qukuan.h"
#include "dialog.h"
#include <QPainter>
#include <QMouseEvent>
#include <QApplication>
#include <QDesktopWidget>
#include <QMessageBox>
#include "data.h"
Qukuan::Qukuan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Qukuan)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);
    QRegExp regx("[1-9][0-9]+$");
    QValidator *validator = new QRegExpValidator(regx, ui->rmb);
    ui->rmb->setValidator(validator);
    // rmb 的第一个数是1-9的，第二个数和之后的是0-9的
    flag=0;
    AccountInfo user = *m_Data.m_iter_user;
    if(user.type=="credit"||user.type=="compcard")
    {
        if(user.balance>=5000)
        {
            flag=1;
            QMessageBox::information(NULL,tr("恭喜！"),tr("您是尊贵的vip用户，可透支一万元！"));
        }
        else
        {
            flag=2;
            QMessageBox::information(NULL,tr("恭喜！"),tr("您是普通卡用户，可透支五千元！"));
        }
    }
}

Qukuan::~Qukuan()
{
    delete ui;
}

void Qukuan::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Qukuan::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}

void Qukuan::on_close_clicked()
{
    close();
    Dialog *d=new Dialog;
    QDesktopWidget *deskdop=QApplication::desktop();
    d->move((deskdop->width()-d->width())/2,(deskdop->height()-d->height())/2);//窗口保持在中心
    d->exec();
}

void Qukuan::on_signin_pressed()
{
    double rmb = ui->rmb->text().toDouble(); // 获取输入的取款金额
    if(rmb > 0 && rmb <= 20000 && (int)rmb % 100 == 0)
    {
        if(m_Data.changeBalance(-rmb,flag))
        {
            QMessageBox::information(this, tr("消息！"), tr("取款成功！"));
            ui->rmb->clear();
        }
    }
    else
    {
         QMessageBox::warning(this, tr("错误！"), tr("取款必须为一百的整数！"));
    }
}
