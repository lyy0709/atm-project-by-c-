#include "Signin.h"
#include <QApplication>
#include<QDesktopWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Signin *s=new Signin;
    QDesktopWidget *deskdop=QApplication::desktop();
    s->move((deskdop->width()-s->width())/2,(deskdop->height()-s->height())/2);//窗口保持在中心
    s->show();
    return a.exec();
}
