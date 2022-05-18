#ifndef CUNKUAN_H
#define CUNKUAN_H

#include <QDialog>

namespace Ui {
class Cunkuan;
}

class Cunkuan : public QDialog
{
    Q_OBJECT

public:
    explicit Cunkuan(QWidget *parent = 0);
    ~Cunkuan();

protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:

    void on_close_clicked();

    void on_signin_pressed();

    void on_signin_released();

private:
    Ui::Cunkuan *ui;
    QPoint p;
};

#endif // CUNKUAN_H
