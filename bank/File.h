#ifndef FILE_H
#define FILE_H

#include <QDialog>

namespace Ui {
class File;
}

class File : public QDialog
{
    Q_OBJECT

public:
    explicit File(QWidget *parent = 0);
    ~File();
    QString ls_account;
protected:

    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
private slots:

    void on_close_clicked();

    void on_signin_2_pressed();

private:
    Ui::File *ui;
    QPoint p;
};

#endif // FILE_H
