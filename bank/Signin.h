#ifndef SIGHIN_H
#define SIGHIN_H

#include <QDialog>
#include "account.h"


namespace Ui {
class Signin;
}

class Signin : public QDialog
{
    Q_OBJECT

public:
    explicit Signin(QWidget *parent = 0);
    ~Signin();
    QString m_UserN;    // 登陆成功的用户名
protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void closeEvent(QCloseEvent*ev);

private slots:
    void on_mini_clicked();

    void on_close_clicked();

    void on_zhucexx_clicked();

    void on_wanji_clicked();

    void on_signin_pressed();

    void on_signin_released();

    void on_gly_clicked();

private:
    Ui::Signin *ui;
    QPoint p;

};

#endif //SIGHIN_H
