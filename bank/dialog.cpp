#include "dialog.h"
#include "ui_dialog.h"
#include "Signin.h"
#include "Cunkuan.h"
#include "Qukuan.h"
#include "Chaxun.h"
#include "Jisuan.h"
#include <QPainter>
#include <QMouseEvent>
#include <QMessageBox>
#include <QDebug>
#include "data.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Dialog::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}

void Dialog::on_close_clicked()
{
    close();
    Signin *s=new Signin;
    s->exec();
}

void Dialog::on_cunkuan_pressed()
{
    close();
    Cunkuan *c=new Cunkuan;
    c->exec();
}

void Dialog::on_qukuan_pressed()
{
    close();
    Qukuan *q=new Qukuan;
    q->exec();
}

void Dialog::on_chaxun_released()
{
    close();
    Chaxun *c=new Chaxun;
    c->exec();
}

void Dialog::on_jisuan_pressed()
{
    close();
    Jisuan *j=new Jisuan;
    j->exec();
}

void Dialog::on_zhuxiao_pressed()
{
    m_Data.deletezh();
    close();
    Signin *s=new Signin;
    s->exec();
}

void Dialog::on_tuika_clicked()
{
    close();
    Signin *s=new Signin;
    s->exec();
}
