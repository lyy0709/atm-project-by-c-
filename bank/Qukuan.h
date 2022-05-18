#ifndef QUKUAN_H
#define QUKUAN_H

#include <QDialog>

namespace Ui {
class Qukuan;
}

class Qukuan : public QDialog
{
    Q_OBJECT

public:
    explicit Qukuan(QWidget *parent = 0);
    ~Qukuan();
    int flag;
protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:

    void on_close_clicked();

    void on_signin_pressed();

private:
    Ui::Qukuan *ui;
    QPoint p;
};

#endif // QUKUAN_H
