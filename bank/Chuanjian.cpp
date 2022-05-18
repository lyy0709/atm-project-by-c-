#include "Chuanjian.h"
#include "ui_Chuanjian.h"
#include "Zhuce.h"
#include "Signin.h"
#include "data.h"
#include <QPainter>
#include <QMouseEvent>
#include <QApplication>
#include <QDesktopWidget>
Chuanjian::Chuanjian(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chuanjian)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);
    ui->kahao->setText("7"+Zhuce::kahao);
}

Chuanjian::~Chuanjian()
{
    delete ui;
}

void Chuanjian::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Chuanjian::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}


void Chuanjian::on_signin_pressed()
{
    this->close();
    Signin *s=new Signin;
    QDesktopWidget *deskdop=QApplication::desktop();
    s->move((deskdop->width()-s->width())/2,(deskdop->height()-s->height())/2);//窗口保持在中心
    s->exec();
}

void Chuanjian::on_close_clicked()
{
    this->close();
    Signin *s=new Signin;
    QDesktopWidget *deskdop=QApplication::desktop();
    s->move((deskdop->width()-s->width())/2,(deskdop->height()-s->height())/2);//窗口保持在中心
    s->exec();
}
