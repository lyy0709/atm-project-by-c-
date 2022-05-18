#ifndef GUANLI_H
#define GUANLI_H

#include <QDialog>

namespace Ui {
class Guanli;
}

class Guanli : public QDialog
{
    Q_OBJECT

public:
    explicit Guanli(QWidget *parent = 0);
    ~Guanli();
protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
private slots:

    void on_close_clicked();

    void on_pushButton_clicked();

private:
    Ui::Guanli *ui;
    QPoint p;
};

#endif // GUANLI_H
