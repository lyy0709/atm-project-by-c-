#include "Zhucexx.h"
#include "ui_Zhucexx.h"
#include "Signin.h"
#include "Zhuce.h"
#include <QPainter>
#include <QMouseEvent>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include "data.h"
#pragma execution_character_set("utf-8")

Zhucexx::Zhucexx(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Zhucexx)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);
    ui->phonenum->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
    ui->sfid->setValidator(new QRegExpValidator(QRegExp("[a-zA-Z0-9]+$")));

}

Zhucexx::~Zhucexx()
{
    delete ui;
}

void Zhucexx::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Zhucexx::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}

int Zhucexx::load()
{
    ls_account=QApplication::applicationDirPath()+"/data";
    QDir dir(ls_account);
    if(!dir.exists())
    {
        dir.mkdir(ls_account);
    }
    QString filename = ls_account+"/"+"account.txt";
    QFile file(filename);
    if(!file.exists())
    {
        file.open(QIODevice::ReadWrite|QIODevice::Text);
    }
    file.open(QIODevice::ReadWrite|QIODevice::Append);
    QTextStream out(&file);
    out<<ui->name->text()<<" ";
    if(ui->nan->isChecked())
    {
        out<<tr("男")<<" ";
    }
    else
    {
        out<<tr("女")<<" ";
    }
    out<<ui->phonenum->text()<<" "<<ui->address->text()<<" "<<ui->sfid->text()<<" ";
    out.flush();
    file.close();
    return 0;
}

void Zhucexx::on_signin_released()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}

void Zhucexx::on_close_clicked()
{
     this->close();
     Signin *s=new Signin;
     s->exec();
}

void Zhucexx::on_signin_pressed()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    QString phonenum = ui->phonenum->text();
    QString sfid = ui->sfid->text();
        if(!ui->name->text().isEmpty()&&!ui->address->text().isEmpty()&&sjhjy(phonenum)&&sfzjy(sfid))
        {
            load();
            close();
            Zhuce *z=new Zhuce;
            z->exec();
        }
        else if(ui->name->text().isEmpty())
        {
            QMessageBox::warning(this,tr("警告"),tr("姓名不全无法注册！"));
        }
        else if(ui->address->text().isEmpty())
        {
            QMessageBox::warning(this,tr("警告"),tr("地址不全无法注册！"));
        }
}

bool Zhucexx::sjhjy(QString phonenum)
{
    if(phonenum == NULL)
    {
        QMessageBox::warning(this,tr("警告！"),tr("请输入手机号！"));
    }
    else if(phonenum.size()!=11)
    {
        QMessageBox::warning(this,tr("警告！"),tr("手机号必须为11位！"));
        ui->phonenum->clear();
    }
    else if(phonenum.size()==11)
    {
        return true;
    }
    return false;
}

bool Zhucexx::sfzjy(QString sfid)
{
    if(sfid==NULL)
    {
        QMessageBox::warning(this,tr("警告！"),tr("请输入身份证号！"));
    }
    else if(sfid.size()<16||sfid.size()>18)
    {
        QMessageBox::warning(this,tr("警告！"),tr("身份证输入错误！需为16-18位"));
        ui->sfid->clear();
    }
    else if(sfid.size()>=16&&sfid.size()<=18)
    {
        return true;
    }
    return false;
}
