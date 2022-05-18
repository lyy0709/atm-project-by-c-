/********************************************************************************
** Form generated from reading UI file 'Qukuan.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUKUAN_H
#define UI_QUKUAN_H

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

class Ui_Qukuan
{
public:
    QFrame *frame;
    QLabel *label;
    QToolButton *close;
    QLineEdit *rmb;
    QLabel *label_2;
    QPushButton *signin;

    void setupUi(QDialog *Qukuan)
    {
        if (Qukuan->objectName().isEmpty())
            Qukuan->setObjectName(QStringLiteral("Qukuan"));
        Qukuan->resize(532, 418);
        frame = new QFrame(Qukuan);
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
        close->setStyleSheet(QStringLiteral("border:none"));
        rmb = new QLineEdit(frame);
        rmb->setObjectName(QStringLiteral("rmb"));
        rmb->setGeometry(QRect(100, 200, 291, 41));
        rmb->setStyleSheet(QLatin1String("border-radius:10px;\n"
"border:1px solid black;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 120, 381, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        signin = new QPushButton(frame);
        signin->setObjectName(QStringLiteral("signin"));
        signin->setGeometry(QRect(170, 300, 151, 41));
        signin->setStyleSheet(QLatin1String("border-radius:10px;\n"
"border:1px solid black;\n"
"font:20px;"));

        retranslateUi(Qukuan);

        QMetaObject::connectSlotsByName(Qukuan);
    } // setupUi

    void retranslateUi(QDialog *Qukuan)
    {
        Qukuan->setWindowTitle(QApplication::translate("Qukuan", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Qukuan", "  \345\217\226\346\254\276", Q_NULLPTR));
        close->setText(QApplication::translate("Qukuan", "\303\227", Q_NULLPTR));
        label_2->setText(QApplication::translate("Qukuan", "\350\257\267\350\276\223\345\205\245\345\217\226\345\207\272\347\232\204\351\207\221\351\242\235\357\274\214\344\270\272\346\225\264\347\231\276", Q_NULLPTR));
        signin->setText(QApplication::translate("Qukuan", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Qukuan: public Ui_Qukuan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUKUAN_H
