#include "Zhuce.h"
#include "Chuanjian.h"
#include "ui_Zhuce.h"
#include "Signin.h"
#include <QDateTime>
#include <QPainter>
#include <QMouseEvent>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QMessageBox>
#include "data.h"
#pragma execution_character_set("utf-8")

Zhuce::Zhuce(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Zhuce)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);
}

Zhuce::~Zhuce()
{
    delete ui;
}

void Zhuce::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Zhuce::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}

void Zhuce::on_close_clicked()
{
    QMessageBox::warning(this,tr("警告！"),tr("此时不能退出系统，否则会引起系统故障"));
}

QString Zhuce::kahao=0;
int Zhuce::load()
{
    ls_account=QApplication::applicationDirPath()+"/data";
    QString filename = ls_account+"/"+"account.txt";
    QFile file(filename);
    file.open(QIODevice::ReadWrite|QIODevice::Append);
    QTextStream out(&file);
    QDateTime datetime(QDateTime::currentDateTime());
    kahao =datetime.toString("yyyyMMddhhmmsszzz");
    out<<"7"<<kahao<<" ";
    out.flush();
    file.close();
    return 0;
}

void Zhuce::on_credit_pressed()
{
    ui->credit->setStyleSheet("QPushButton{border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    QString pas1=ui->password1->text();
    QString pas2=ui->password2->text();
    if(pas1==pas2&&pas2.size()==6&&maxContinue(pas2)<6)
    {
        this->load();
        ls_account=QApplication::applicationDirPath()+"/data";
        QString filename = ls_account+"/"+"account.txt";
        QFile file(filename);
        file.open(QIODevice::ReadWrite|QIODevice::Append);
        QTextStream out(&file);
        out<<pas1<<" "<<"credit"<<" "<<"0.00\n";
        out.flush();
        file.close();
        close();
        Chuanjian *c=new Chuanjian;
        c->exec();
    }
    else
    {
        if(pas1!=pas2)
        {
            QMessageBox::warning(this,tr("警告！"),tr("两次密码输入不一致！"));
            ui->password1->clear();
            ui->password2->clear();
        }
        else if(pas2.size()!=6)
        {
            QMessageBox::warning(this,tr("警告！"),tr("密码必须为六位！"));
            ui->password1->clear();
            ui->password2->clear();
        }
        else
        {
            QMessageBox::warning(this,tr("警告！"),tr("密码不能出现连续6位相同！"));
            ui->password1->clear();
            ui->password2->clear();
        }
    }
}

void Zhuce::on_saving_pressed()
{
    ui->saving->setStyleSheet("QPushButton{border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    QString pas1=ui->password1->text();
    QString pas2=ui->password2->text();
    if(pas1==pas2&&pas2.size()==6&&maxContinue(pas2)<6)
    {
        this->load();
        ls_account=QApplication::applicationDirPath()+"/data";
        QString filename = ls_account+"/"+"account.txt";
        QFile file(filename);
        file.open(QIODevice::ReadWrite|QIODevice::Append);
        QTextStream out(&file);
        out<<pas1<<" "<<"debit"<<" "<<"0.00\n";
        out.flush();
        file.close();
        close();
        Chuanjian *c=new Chuanjian;
        c->exec();
    }
    else
    {
        if(pas1!=pas2)
        {
            QMessageBox::warning(this,tr("警告！"),tr("两次密码输入不一致！"));
            ui->password1->clear();
            ui->password2->clear();
        }
        else if(pas2.size()!=6)
        {
            QMessageBox::warning(this,tr("警告！"),tr("密码必须为六位！"));
            ui->password1->clear();
            ui->password2->clear();
        }
        else
        {
            QMessageBox::warning(this,tr("警告！"),tr("密码不能出现连续6位相同！"));
            ui->password1->clear();
            ui->password2->clear();
        }
    }
}

void Zhuce::on_comp_pressed()
{
    ui->saving->setStyleSheet("QPushButton{border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    QString pas1=ui->password1->text();
    QString pas2=ui->password2->text();
    if(pas1==pas2&&pas2.size()==6&&maxContinue(pas2)<6)
    {
        this->load();
        ls_account=QApplication::applicationDirPath()+"/data";
        QString filename = ls_account+"/"+"account.txt";
        QFile file(filename);
        file.open(QIODevice::ReadWrite|QIODevice::Append);
        QTextStream out(&file);
        out<<pas1<<" "<<"compcard"<<" "<<"0.00\n";
        out.flush();
        file.close();
        close();
        Chuanjian *c=new Chuanjian;
        c->exec();
    }
    else
    {
        if(pas1!=pas2)
        {
            QMessageBox::warning(this,tr("警告！"),tr("两次密码输入不一致！"));
            ui->password1->clear();
            ui->password2->clear();
        }
        else if(pas2.size()!=6)
        {
            QMessageBox::warning(this,tr("警告！"),tr("密码必须为六位！"));
            ui->password1->clear();
            ui->password2->clear();
        }
        else
        {
            QMessageBox::warning(this,tr("警告！"),tr("密码不能出现连续6位相同！"));
            ui->password1->clear();
            ui->password2->clear();
        }
    }
}

int Zhuce::maxContinue(QString str)
{
    int max = 0, sum = 0;
    std::string str_2 = str.toStdString();  // 先转换为标准字符串
    char t = str_2[0];
    for(int i = 0; i < str_2.size(); i++)
    {
        if(str_2[i] == t)
        {
            sum++;
            if(sum > max) max = sum;
        }
        else
        {
            t = str_2[i];
            sum = 0;
        }
    }
    return max;
}

void Zhuce::on_credit_released()
{
    ui->saving->setStyleSheet("QPushButton{border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}

void Zhuce::on_saving_released()
{
    ui->saving->setStyleSheet("QPushButton{border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}

void Zhuce::on_comp_released()
{
    ui->saving->setStyleSheet("QPushButton{border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}
