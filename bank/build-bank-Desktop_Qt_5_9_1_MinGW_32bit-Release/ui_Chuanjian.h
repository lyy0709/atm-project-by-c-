/********************************************************************************
** Form generated from reading UI file 'Chuanjian.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHUANJIAN_H
#define UI_CHUANJIAN_H

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

class Ui_Chuanjian
{
public:
    QFrame *frame;
    QLabel *label;
    QToolButton *close;
    QLabel *label_2;
    QPushButton *signin;
    QLineEdit *kahao;
    QLabel *label_3;

    void setupUi(QDialog *Chuanjian)
    {
        if (Chuanjian->objectName().isEmpty())
            Chuanjian->setObjectName(QStringLiteral("Chuanjian"));
        Chuanjian->resize(526, 418);
        frame = new QFrame(Chuanjian);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 511, 401));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 511, 41));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(0, 170, 255);"));
        close = new QToolButton(frame);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(460, 0, 32, 31));
        close->setStyleSheet(QLatin1String("border:none;\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 90, 341, 71));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        signin = new QPushButton(frame);
        signin->setObjectName(QStringLiteral("signin"));
        signin->setGeometry(QRect(180, 230, 181, 61));
        signin->setStyleSheet(QLatin1String("font: 20px;\n"
"border-radius:10px;\n"
"border:1px solid black;\n"
""));
        kahao = new QLineEdit(frame);
        kahao->setObjectName(QStringLiteral("kahao"));
        kahao->setGeometry(QRect(200, 160, 231, 41));
        kahao->setStyleSheet(QLatin1String("border:none;\n"
"font: 8pt \"Arial\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 170, 91, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        retranslateUi(Chuanjian);

        QMetaObject::connectSlotsByName(Chuanjian);
    } // setupUi

    void retranslateUi(QDialog *Chuanjian)
    {
        Chuanjian->setWindowTitle(QApplication::translate("Chuanjian", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Chuanjian", "\350\264\246\346\210\267\345\210\233\345\273\272\346\210\220\345\212\237", Q_NULLPTR));
        close->setText(QApplication::translate("Chuanjian", "\303\227", Q_NULLPTR));
        label_2->setText(QApplication::translate("Chuanjian", "\346\202\250\347\232\204\351\223\266\350\241\214\345\215\241\345\267\262\345\210\233\345\273\272\346\210\220\345\212\237", Q_NULLPTR));
        signin->setText(QApplication::translate("Chuanjian", "\347\231\273\345\275\225", Q_NULLPTR));
        label_3->setText(QApplication::translate("Chuanjian", "\345\215\241\345\217\267\344\270\272\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Chuanjian: public Ui_Chuanjian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHUANJIAN_H
