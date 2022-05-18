/********************************************************************************
** Form generated from reading UI file 'Zhuce.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUCE_H
#define UI_ZHUCE_H

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

class Ui_Zhuce
{
public:
    QFrame *frame;
    QLabel *label;
    QToolButton *close;
    QPushButton *credit;
    QPushButton *saving;
    QPushButton *comp;
    QLineEdit *password1;
    QLineEdit *password2;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Zhuce)
    {
        if (Zhuce->objectName().isEmpty())
            Zhuce->setObjectName(QStringLiteral("Zhuce"));
        Zhuce->resize(548, 392);
        frame = new QFrame(Zhuce);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 531, 361));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 531, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        close = new QToolButton(frame);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(470, 0, 32, 31));
        close->setStyleSheet(QStringLiteral("border:none"));
        credit = new QPushButton(frame);
        credit->setObjectName(QStringLiteral("credit"));
        credit->setGeometry(QRect(80, 230, 111, 41));
        credit->setStyleSheet(QLatin1String("border-radius:10px;\n"
"border:1px solid black;"));
        saving = new QPushButton(frame);
        saving->setObjectName(QStringLiteral("saving"));
        saving->setGeometry(QRect(220, 230, 101, 41));
        saving->setStyleSheet(QLatin1String("border-radius:10px;\n"
"border:1px solid black;"));
        comp = new QPushButton(frame);
        comp->setObjectName(QStringLiteral("comp"));
        comp->setGeometry(QRect(350, 230, 111, 41));
        comp->setStyleSheet(QLatin1String("border-radius:10px;\n"
"border:1px solid black;"));
        password1 = new QLineEdit(frame);
        password1->setObjectName(QStringLiteral("password1"));
        password1->setGeometry(QRect(210, 90, 191, 41));
        password1->setStyleSheet(QLatin1String("border-radius:10px;\n"
"border:1px solid black;"));
        password1->setEchoMode(QLineEdit::Password);
        password2 = new QLineEdit(frame);
        password2->setObjectName(QStringLiteral("password2"));
        password2->setGeometry(QRect(211, 156, 191, 41));
        password2->setStyleSheet(QLatin1String("border-radius:10px;\n"
"border:1px solid black;"));
        password2->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(91, 75, 81, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(91, 157, 91, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(Zhuce);

        QMetaObject::connectSlotsByName(Zhuce);
    } // setupUi

    void retranslateUi(QDialog *Zhuce)
    {
        Zhuce->setWindowTitle(QApplication::translate("Zhuce", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Zhuce", "  \351\223\266\350\241\214\350\264\246\346\210\267\346\263\250\345\206\214", Q_NULLPTR));
        close->setText(QApplication::translate("Zhuce", "\303\227", Q_NULLPTR));
        credit->setText(QApplication::translate("Zhuce", "\344\277\241\347\224\250\345\215\241\346\263\250\345\206\214", Q_NULLPTR));
        saving->setText(QApplication::translate("Zhuce", "\345\202\250\350\223\204\345\215\241\346\263\250\345\206\214", Q_NULLPTR));
        comp->setText(QApplication::translate("Zhuce", "\345\244\215\345\220\210\345\215\241\346\263\250\345\206\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("Zhuce", "\345\210\233\345\273\272\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Zhuce", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Zhuce: public Ui_Zhuce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUCE_H
