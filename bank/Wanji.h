#ifndef WANJI_H
#define WANJI_H

#include <QDialog>
#include "account.h"

namespace Ui {
class Wanji;
}

class Wanji : public QDialog
{
    Q_OBJECT

public:
    explicit Wanji(QWidget *parent = 0);
    ~Wanji();
    QString m_UserN;
protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:

    void on_close_clicked();

    void on_signin_pressed();

    void on_signin_released();

private:
    Ui::Wanji *ui;
    QPoint p;
};


#endif // WANJI_H
