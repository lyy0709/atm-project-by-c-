#include "Wanji.h"
#include "ui_Wanji.h"
#include "Signin.h"
#include "Xiugaimm.h"
#include <QPainter>
#include <QMouseEvent>
#include <QMessageBox>
#include "data.h"
Wanji::Wanji(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wanji)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);

}

Wanji::~Wanji()
{
    delete ui;
}

void Wanji::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Wanji::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}


void Wanji::on_close_clicked()
{
     close();
     Signin *s=new Signin;
     s->exec();
}

void Wanji::on_signin_pressed()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    QString phone=ui->phnumber1->text();
    QString id=ui->sfid1->text();

    m_Data.load();

    if(phone == "" || id == "") {
        QMessageBox::information(this, tr("警告！"), tr("请输入正确的手机号和身份证号！"), QMessageBox::Yes);
    }
    else
    {
        if(m_Data.findmm(phone))
        {
             AccountInfo user = *m_Data.m_iter_user;
             if(user.sfid==id)
             {
                 close();
                 Xiugaimm *x=new Xiugaimm;
                 x->exec();
             }
             else
             {
                 QMessageBox::warning(this,tr("警告！"),tr("身份证输入错误！"));
             }
        }
        else
        {
            QMessageBox::warning(this,tr("警告！"),tr("未找到该用户"));
        }
    }
}

void Wanji::on_signin_released()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}
