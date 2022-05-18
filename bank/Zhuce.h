#ifndef ZHUCE_H
#define ZHUCE_H

#include <QDialog>
#include "Chuanjian.h"

namespace Ui {
class Zhuce;
}

class Zhuce : public QDialog
{
    Q_OBJECT

public:
    explicit Zhuce(QWidget *parent = 0);
    ~Zhuce();
    int load();
    int maxContinue(QString str);
    static QString kahao;
    QString ls_account;

protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:

    void on_close_clicked();

    void on_credit_pressed();

    void on_saving_pressed();

    void on_comp_pressed();

    void on_credit_released();

    void on_saving_released();

    void on_comp_released();

private:
    Ui::Zhuce *ui;
    Chuanjian *chuanjian;
    QPoint p;
};

#endif // ZHUCE_H
