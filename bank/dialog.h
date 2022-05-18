#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:
    void on_close_clicked();

    void on_cunkuan_pressed();

    void on_qukuan_pressed();

    void on_chaxun_released();

    void on_jisuan_pressed();

    void on_zhuxiao_pressed();

    void on_tuika_clicked();

private:
    Ui::Dialog *ui;
    QPoint p;
};

#endif // DIALOG_H
