#ifndef CHAXUN_H
#define CHAXUN_H

#include <QDialog>

namespace Ui {
class Chaxun;
}

class Chaxun : public QDialog
{
    Q_OBJECT

public:
    explicit Chaxun(QWidget *parent = 0);
    ~Chaxun();

protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:

    void on_close_clicked();

    void on_signin_clicked();

private:
    Ui::Chaxun *ui;
    QPoint p;
};

#endif // CHAXUN_H
