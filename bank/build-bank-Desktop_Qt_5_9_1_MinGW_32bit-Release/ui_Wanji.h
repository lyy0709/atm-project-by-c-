/********************************************************************************
** Form generated from reading UI file 'Wanji.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WANJI_H
#define UI_WANJI_H

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

class Ui_Wanji
{
public:
    QFrame *frame;
    QLabel *label;
    QToolButton *close;
    QLabel *label_4;
    QPushButton *signin;
    QLineEdit *phnumber1;
    QLineEdit *sfid1;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Wanji)
    {
        if (Wanji->objectName().isEmpty())
            Wanji->setObjectName(QStringLiteral("Wanji"));
        Wanji->resize(593, 384);
        frame = new QFrame(Wanji);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 571, 361));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 571, 41));
        label->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(0, 170, 255);"));
        close = new QToolButton(frame);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(520, 0, 31, 31));
        close->setStyleSheet(QStringLiteral("border:none"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 60, 61, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        signin = new QPushButton(frame);
        signin->setObjectName(QStringLiteral("signin"));
        signin->setGeometry(QRect(270, 270, 101, 41));
        signin->setStyleSheet(QLatin1String("font: 20px;\n"
"border-radius:10px;\n"
"border:1px solid black;"));
        phnumber1 = new QLineEdit(frame);
        phnumber1->setObjectName(QStringLiteral("phnumber1"));
        phnumber1->setGeometry(QRect(251, 121, 241, 41));
        phnumber1->setStyleSheet(QLatin1String("border-radius:10px;\n"
"border:1px solid black;"));
        sfid1 = new QLineEdit(frame);
        sfid1->setObjectName(QStringLiteral("sfid1"));
        sfid1->setGeometry(QRect(251, 179, 241, 41));
        sfid1->setStyleSheet(QLatin1String("border-radius:10px;\n"
"border:1px solid black;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 120, 141, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(81, 181, 161, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        retranslateUi(Wanji);

        QMetaObject::connectSlotsByName(Wanji);
    } // setupUi

    void retranslateUi(QDialog *Wanji)
    {
        Wanji->setWindowTitle(QApplication::translate("Wanji", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Wanji", "  \345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
        close->setText(QApplication::translate("Wanji", "\303\227", Q_NULLPTR));
        label_4->setText(QApplication::translate("Wanji", "\351\252\214\350\257\201", Q_NULLPTR));
        signin->setText(QApplication::translate("Wanji", "\347\241\256\345\256\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Wanji", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Wanji", "\350\257\267\350\276\223\345\205\245\350\272\253\344\273\275\345\217\267\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Wanji: public Ui_Wanji {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WANJI_H
