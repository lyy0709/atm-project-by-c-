#include "Xiugaimm.h"
#include "ui_Xiugaimm.h"
#include "data.h"
#include "Signin.h"
#include <QMessageBox>
#include <QPainter>
#include <QMouseEvent>
#include <QApplication>
#include <QDesktopWidget>
Xiugaimm::Xiugaimm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Xiugaimm)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);

}

Xiugaimm::~Xiugaimm()
{
    delete ui;
}

void Xiugaimm::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Xiugaimm::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}

void Xiugaimm::on_signin_pressed()
{
     ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
     QString passw1=ui->passw1->text();
     QString passw2=ui->passw2->text();
     if(passw1.size()==6&&maxContinue(passw2)<6)
     {
         if(m_Data.changepw(passw1,passw2))
         {
             ui->passw1->clear();
             ui->passw2->clear();
              close();
              Signin *s=new Signin;
             QDesktopWidget *deskdop=QApplication::desktop();
             s->move((deskdop->width()-s->width())/2,(deskdop->height()-s->height())/2);//窗口保持在中心
              s->exec();
         }
     }
     else {
         if(passw1 != passw2) {
             QMessageBox::warning(NULL, tr("警告！"), tr("两次输入的密码不一致！"));
             ui->passw1->clear();
             ui->passw2->clear();
         }
         else if(passw2.size() < 6){
             QMessageBox::warning(NULL, tr("警告！"), tr("密码必须为六位！"));
             ui->passw1->clear();
             ui->passw2->clear();
         }
         else {
             QMessageBox::warning(NULL, tr("警告！"), tr("密码不能出现连续6位相同！"));
             ui->passw1->clear();
             ui->passw2->clear();
         }
     }
}

void Xiugaimm::on_signin_released()
{
     ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}

// 计算一个字符串中出现的连续字符的最大个数
int Xiugaimm::maxContinue(QString str)
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

void Xiugaimm::on_toolButton_2_clicked()
{
    close();
     Signin *s=new Signin;
    QDesktopWidget *deskdop=QApplication::desktop();
    s->move((deskdop->width()-s->width())/2,(deskdop->height()-s->height())/2);//窗口保持在中心
     s->exec();
}
