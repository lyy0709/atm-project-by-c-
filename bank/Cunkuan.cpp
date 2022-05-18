#include "Cunkuan.h"
#include "ui_Cunkuan.h"
#include "dialog.h"
#include <QPainter>
#include <QMouseEvent>
#include <QMessageBox>
#include <QApplication>
#include <QDesktopWidget>
#include "data.h"
Cunkuan::Cunkuan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cunkuan)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);

}

Cunkuan::~Cunkuan()
{
    delete ui;
}

void Cunkuan::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void Cunkuan::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}

void Cunkuan::on_close_clicked()
{
    close();
    Dialog *d=new Dialog;
    QDesktopWidget *deskdop=QApplication::desktop();
    d->move((deskdop->width()-d->width())/2,(deskdop->height()-d->height())/2);//窗口保持在中心
    d->exec();
}

void Cunkuan::on_signin_pressed()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(0, 170, 255)}");
    double rmb = ui->rmb->text().toDouble(); // 获取输入的存款金额
    if(rmb > 0 && (int)rmb % 100 == 0)
    {
        if(m_Data.changeBalance(rmb,0)) {
            QMessageBox::information(this, tr("消息！"), tr("存款成功！"));
            ui->rmb->clear();
        }
        else {
            QMessageBox::information(this, tr("消息！"), tr("存款失败！"));
        }
    }
    else {
        QMessageBox::warning(this, tr("消息！"), tr("存款金额必须为100的整数倍！"));
    }

}

void Cunkuan::on_signin_released()
{
    ui->signin->setStyleSheet("QPushButton{font: 20px;border-radius:10px;border:1px solid black;background-color: rgb(255, 255, 255)}");
}
