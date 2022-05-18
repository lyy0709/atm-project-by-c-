#ifndef XIUGAIMM_H
#define XIUGAIMM_H

#include <QDialog>
#include "account.h"

namespace Ui {
class Xiugaimm;
}

class Xiugaimm : public QDialog
{
    Q_OBJECT

public:
    explicit Xiugaimm(QWidget *parent = 0);
    ~Xiugaimm();
    int maxContinue(QString str);
protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:
    void on_signin_pressed();

    void on_signin_released();

    void on_toolButton_2_clicked();

private:
    Ui::Xiugaimm *ui;
    QPoint p;
};

#endif // XIUGAIMM_H
