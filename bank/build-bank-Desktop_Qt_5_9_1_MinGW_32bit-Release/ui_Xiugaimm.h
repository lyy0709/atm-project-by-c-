/********************************************************************************
** Form generated from reading UI file 'Xiugaimm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XIUGAIMM_H
#define UI_XIUGAIMM_H

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

class Ui_Xiugaimm
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *passw1;
    QLineEdit *passw2;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QToolButton *toolButton_2;
    QPushButton *signin;

    void setupUi(QDialog *Xiugaimm)
    {
        if (Xiugaimm->objectName().isEmpty())
            Xiugaimm->setObjectName(QStringLiteral("Xiugaimm"));
        Xiugaimm->resize(496, 406);
        frame = new QFrame(Xiugaimm);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 481, 391));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 481, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"font: 14pt \"\351\273\221\344\275\223\";"));
        passw1 = new QLineEdit(frame);
        passw1->setObjectName(QStringLiteral("passw1"));
        passw1->setGeometry(QRect(150, 140, 181, 41));
        passw1->setLayoutDirection(Qt::LeftToRight);
        passw1->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        passw1->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhPreferNumbers|Qt::ImhSensitiveData);
        passw1->setMaxLength(16);
        passw1->setEchoMode(QLineEdit::Password);
        passw1->setAlignment(Qt::AlignCenter);
        passw1->setClearButtonEnabled(false);
        passw2 = new QLineEdit(frame);
        passw2->setObjectName(QStringLiteral("passw2"));
        passw2->setGeometry(QRect(150, 210, 181, 41));
        passw2->setLayoutDirection(Qt::LeftToRight);
        passw2->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(80, 80, 80);\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border:2px groove gray;\n"
"border-radius:10px;\n"
"padding:2px 4px;"));
        passw2->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhPreferNumbers|Qt::ImhSensitiveData);
        passw2->setMaxLength(16);
        passw2->setEchoMode(QLineEdit::Password);
        passw2->setAlignment(Qt::AlignCenter);
        passw2->setClearButtonEnabled(false);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(340, 80, 121, 231));
        label_6->setStyleSheet(QLatin1String("font: 75 8pt \"Arial\";\n"
""));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 130, 101, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 200, 111, 51));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label_5->setAlignment(Qt::AlignCenter);
        toolButton_2 = new QToolButton(frame);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(430, 0, 32, 31));
        toolButton_2->setStyleSheet(QLatin1String("border:none\n"
""));
        signin = new QPushButton(frame);
        signin->setObjectName(QStringLiteral("signin"));
        signin->setGeometry(QRect(180, 300, 121, 51));
        signin->setStyleSheet(QLatin1String("border:1px solid black;\n"
"border-radius:10px;\n"
"font:20px;"));

        retranslateUi(Xiugaimm);

        QMetaObject::connectSlotsByName(Xiugaimm);
    } // setupUi

    void retranslateUi(QDialog *Xiugaimm)
    {
        Xiugaimm->setWindowTitle(QApplication::translate("Xiugaimm", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Xiugaimm", " \345\257\206\347\240\201\344\277\256\346\224\271", Q_NULLPTR));
        label_6->setText(QApplication::translate("Xiugaimm", "<html><head/><body><p><span style=\" font-family:'\345\256\213\344\275\223'; font-size:7pt;\">1\343\200\201\346\226\260\345\257\206\347\240\201\351\225\277\345\272\246\347\255\211\344\272\216</span><span style=\" font-family:'Times New Roman,serif'; font-size:7pt;\">6</span><span style=\" font-family:'\345\256\213\344\275\223'; font-size:7pt;\">\344\275\215</span></p><p><span style=\" font-family:'\345\256\213\344\275\223'; font-size:7pt;\">2\343\200\201\344\270\215\345\205\201\350\256\270\345\207\272\347\216\260</span><span style=\" font-family:'Times New Roman,serif'; font-size:7pt;\">6</span><span style=\" font-family:'\345\256\213\344\275\223'; font-size:7pt;\">\344\275\215\345\256\214\345\205\250</span></p><p><span style=\" font-family:'\345\256\213\344\275\223'; font-size:7pt;\">\347\233\270\345\220\214\347\232\204\346\203\205\345\206\265</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("Xiugaimm", "<html><head/><body><p>\346\226\260\345\257\206\347\240\201\357\274\232</p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("Xiugaimm", "<html><head/><body><p>\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201\357\274\232</p></body></html>", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("Xiugaimm", "\303\227", Q_NULLPTR));
        signin->setText(QApplication::translate("Xiugaimm", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Xiugaimm: public Ui_Xiugaimm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XIUGAIMM_H
