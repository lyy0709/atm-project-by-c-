#include "File.h"
#include "ui_File.h"
#include "Guanli.h"
#include <QPainter>
#include <QMouseEvent>
#include <QApplication>
#include<QFile>
#include<QTextStream>
#include<QDebug>
#pragma execution_character_set("utf-8")
File::File(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::File)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,true);
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint|Qt::WindowSystemMenuHint);//去除标题和透明化
    setAttribute(Qt::WA_TranslucentBackground);
    ui->zhlist->setColumnCount(9);
    QStringList header;
    header<<"姓名"<<"性别"<<"电话号码"<<"地址"<<"身份证号"<<"账号"<<"密码"<<"卡类型"<<"余额";
    ui->zhlist->setHorizontalHeaderLabels(header);
    ui->zhlist->resizeColumnsToContents();
    ui->zhlist->resizeRowsToContents();
    ui->zhlist->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
    ls_account=QApplication::applicationDirPath()+"/data";
    QString myaccount = ls_account+"/"+"account.txt";
    QFile filename(myaccount);
    filename.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream out(&filename);
    QHash<QString,QString> varHash;
    QString linestr;
    QStringList lineList;
    varHash.clear();
    lineList.clear();
    while(!out.atEnd())
    {
        linestr = out.readLine();
        if(linestr.isEmpty())
        {
            continue;
        }
        lineList = linestr.split(' ',QString::SkipEmptyParts);
        int rowCount = ui->zhlist->rowCount();
        int colCount = ui->zhlist->columnCount();
        ui->zhlist->insertRow(rowCount);
        for(int i=0;i<colCount;i++)
        {
//            if(i%2==0){
//            ui->zhlist->setItem(rowCount,i,new QTableWidgetItem(lineList.at(i)));
//            }
//            else
//            {
//                continue;
//            }
            ui->zhlist->setItem(rowCount,i,new QTableWidgetItem(lineList.at(i)));
        }
        filename.close();
    }
}

File::~File()
{
    delete ui;
}
void File::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        p=e->globalPos() - this->frameGeometry().topLeft();
    }
}

void File::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()& Qt::LeftButton)
    {
        move(e->globalPos()-p);
    }
}


void File::on_close_clicked()
{
    close();
    Guanli *g=new Guanli;
    g->exec();
}

void File::on_signin_2_pressed()
{
    ls_account=QApplication::applicationDirPath()+"/data";
    QString myaccount = ls_account+"/"+"account.txt";
    QFile filename(myaccount);
    filename.open(QIODevice::ReadWrite|QIODevice::Text);
    QTextStream out(&filename);
    int rowCount = ui->zhlist->rowCount();
    int colCount = ui->zhlist->columnCount();
    for(int row=0;row<rowCount;row++)
    {
        for(int col=0;col<colCount;col++)
        {
            QString text=ui->zhlist->item(row,col)->text();
            if(col==colCount-1)
            {
                out<<text.toDouble();
                continue;
            }
            out<<text<<" ";
        }
        out<<"\n";
    }
    filename.close();
}
