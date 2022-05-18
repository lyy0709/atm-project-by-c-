/********************************************************************************
** Form generated from reading UI file 'Guanli.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUANLI_H
#define UI_GUANLI_H

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

class Ui_Guanli
{
public:
    QFrame *frame;
    QLabel *label;
    QToolButton *close;
    QLineEdit *account;
    QLineEdit *password;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *Guanli)
    {
        if (Guanli->objectName().isEmpty())
            Guanli->setObjectName(QStringLiteral("Guanli"));
        Guanli->resize(540, 432);
        frame = new QFrame(Guanli);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 521, 411));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 521, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        close = new QToolButton(frame);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(470, 0, 32, 31));
        close->setStyleSheet(QStringLiteral("border:none"));
        account = new QLineEdit(frame);
        account->setObjectName(QStringLiteral("account"));
        account->setGeometry(QRect(270, 150, 161, 31));
        account->setStyleSheet(QLatin1String("border:1px solid black;\n"
"border-radius:10px;"));
        password = new QLineEdit(frame);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(270, 210, 161, 31));
        password->setStyleSheet(QLatin1String("border:1px solid black;\n"
"border-radius:10px;"));
        password->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 150, 161, 31));
        label_2->setStyleSheet(QStringLiteral("font: 75 9pt \"Arial\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 210, 171, 31));
        label_3->setStyleSheet(QStringLiteral("font: 75 9pt \"Arial\";"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(229, 320, 121, 51));
        pushButton->setStyleSheet(QLatin1String("border:1px solid black;\n"
"border-radius:10px;\n"
"font:20px;"));

        retranslateUi(Guanli);

        QMetaObject::connectSlotsByName(Guanli);
    } // setupUi

    void retranslateUi(QDialog *Guanli)
    {
        Guanli->setWindowTitle(QApplication::translate("Guanli", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Guanli", " \347\256\241\347\220\206\345\221\230\347\263\273\347\273\237", Q_NULLPTR));
        close->setText(QApplication::translate("Guanli", "\303\227", Q_NULLPTR));
        label_2->setText(QApplication::translate("Guanli", "\347\256\241\347\220\206\345\221\230\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Guanli", "\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Guanli", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Guanli: public Ui_Guanli {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUANLI_H
