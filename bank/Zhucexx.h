#ifndef ZHUCEXX_H
#define ZHUCEXX_H

#include <QDialog>


namespace Ui {
class Zhucexx;
}

class Zhucexx : public QDialog
{
    Q_OBJECT

public:
    explicit Zhucexx(QWidget *parent = 0);
    ~Zhucexx();

    int load();

    QString ls_account;

    bool sjhjy(QString phonenum);

    bool sfzjy(QString sfid);
protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:

    void on_close_clicked();

    void on_signin_released();

    void on_signin_pressed();

private:
    Ui::Zhucexx *ui;
    QPoint p;
};

#endif // ZHUCEXX_H
