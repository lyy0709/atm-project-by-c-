#ifndef JISUAN_H
#define JISUAN_H

#include <QDialog>

namespace Ui {
class Jisuan;
}

class Jisuan : public QDialog
{
    Q_OBJECT

public:
    explicit Jisuan(QWidget *parent = 0);
    ~Jisuan();
    int flag;
    double rmb;
    double dingqi(double rmb, int flag);
    double huoqi(double rmb, int yue);

protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:

    void on_close_clicked();

    void on_sany_pressed();

    void on_liuy_pressed();

    void on_yin_pressed();

    void on_ern_pressed();

    void on_sany_released();

    void on_liuy_released();

    void on_yin_released();

    void on_ern_released();

    void on_signin_pressed();

    void on_signin_released();

private:
    Ui::Jisuan *ui;
    QPoint p;
};

#endif // JISUAN_H
