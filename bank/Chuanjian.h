#ifndef CHUANJIAN_H
#define CHUANJIAN_H

#include <QDialog>

namespace Ui {
class Chuanjian;
}

class Chuanjian :public QDialog
{
    Q_OBJECT

public:
    explicit Chuanjian(QWidget *parent = 0);
    ~Chuanjian();

protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:

    void on_signin_pressed();

    void on_close_clicked();

private:
    Ui::Chuanjian *ui;
    QPoint p;
};

#endif // CHUANJIAN_H
