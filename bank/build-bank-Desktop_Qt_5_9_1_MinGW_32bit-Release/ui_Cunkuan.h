/********************************************************************************
** Form generated from reading UI file 'Cunkuan.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUNKUAN_H
#define UI_CUNKUAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Cunkuan
{
public:
    QFrame *frame;
    QLabel *label;
    QToolButton *close;
    QLineEdit *rmb;
    QLabel *label_2;
    QPushButton *signin;

    void setupUi(QDialog *Cunkuan)
    {
        if (Cunkuan->objectName().isEmpty())
            Cunkuan->setObjectName(QStringLiteral("Cunkuan"));
        Cunkuan->resize(518, 422);
        Cunkuan->setStyleSheet(QLatin1String("QToolButton{\n"
"border:none;\n"
"}"));
        frame = new QFrame(Cunkuan);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 501, 401));
        frame->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 501, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        close = new QToolButton(frame);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(441, 0, 31, 31));
        rmb = new QLineEdit(frame);
        rmb->setObjectName(QStringLiteral("rmb"));
        rmb->setGeometry(QRect(100, 200, 291, 41));
        rmb->setStyleSheet(QLatin1String("border-radius:10px;\n"
"border:1px solid black;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 120, 451, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        signin = new QPushButton(frame);
        signin->setObjectName(QStringLiteral("signin"));
        signin->setGeometry(QRect(170, 300, 151, 41));
        signin->setStyleSheet(QLatin1String("border-radius:10px;\n"
"border:1px solid black;\n"
"font:20px;"));

        retranslateUi(Cunkuan);

        QMetaObject::connectSlotsByName(Cunkuan);
    } // setupUi

    void retranslateUi(QDialog *Cunkuan)
    {
        Cunkuan->setWindowTitle(QApplication::translate("Cunkuan", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Cunkuan", "  \345\255\230\346\254\276", Q_NULLPTR));
        close->setText(QApplication::translate("Cunkuan", "\303\227", Q_NULLPTR));
        label_2->setText(QApplication::translate("Cunkuan", "\350\257\267\350\276\223\345\205\245\345\255\230\345\205\245\347\232\204\351\207\221\351\242\235\357\274\214\344\270\272\346\225\264\347\231\276", Q_NULLPTR));
        signin->setText(QApplication::translate("Cunkuan", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cunkuan: public Ui_Cunkuan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUNKUAN_H
