/********************************************************************************
** Form generated from reading UI file 'Jisuan.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JISUAN_H
#define UI_JISUAN_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Jisuan
{
public:
    QFrame *frame;
    QLabel *label;
    QToolButton *close;
    QWidget *gridWidget;
    QPushButton *liuy;
    QPushButton *sany;
    QPushButton *yin;
    QPushButton *ern;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *jisuan;
    QLabel *label_4;
    QPushButton *signin;
    QLabel *label_5;
    QLineEdit *huoqi;
    QLabel *label_6;

    void setupUi(QDialog *Jisuan)
    {
        if (Jisuan->objectName().isEmpty())
            Jisuan->setObjectName(QStringLiteral("Jisuan"));
        Jisuan->resize(500, 412);
        Jisuan->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(Jisuan);
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
        close = new QToolButton(frame);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(430, 0, 32, 31));
        close->setStyleSheet(QStringLiteral("border:none"));
        gridWidget = new QWidget(frame);
        gridWidget->setObjectName(QStringLiteral("gridWidget"));
        gridWidget->setGeometry(QRect(10, 50, 461, 331));
        liuy = new QPushButton(gridWidget);
        liuy->setObjectName(QStringLiteral("liuy"));
        liuy->setGeometry(QRect(309, 76, 111, 41));
        liuy->setStyleSheet(QLatin1String("border:1px solid black;\n"
"border-radius:10px;\n"
"font:20px;"));
        sany = new QPushButton(gridWidget);
        sany->setObjectName(QStringLiteral("sany"));
        sany->setGeometry(QRect(50, 80, 121, 41));
        sany->setStyleSheet(QLatin1String("border:1px solid black;\n"
"border-radius:10px;\n"
"font:20px;"));
        yin = new QPushButton(gridWidget);
        yin->setObjectName(QStringLiteral("yin"));
        yin->setGeometry(QRect(51, 157, 121, 41));
        yin->setStyleSheet(QLatin1String("border:1px solid black;\n"
"border-radius:10px;\n"
"font:20px;"));
        ern = new QPushButton(gridWidget);
        ern->setObjectName(QStringLiteral("ern"));
        ern->setGeometry(QRect(309, 157, 111, 41));
        ern->setStyleSheet(QLatin1String("border:1px solid black;\n"
"border-radius:10px;\n"
"font:20px;"));
        label_2 = new QLabel(gridWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 30, 181, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(gridWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 60, 101, 141));
        jisuan = new QLineEdit(gridWidget);
        jisuan->setObjectName(QStringLiteral("jisuan"));
        jisuan->setGeometry(QRect(190, 260, 181, 21));
        jisuan->setStyleSheet(QLatin1String("border:none\n"
""));
        label_4 = new QLabel(gridWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 260, 111, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";"));
        signin = new QPushButton(gridWidget);
        signin->setObjectName(QStringLiteral("signin"));
        signin->setGeometry(QRect(170, 290, 131, 31));
        signin->setStyleSheet(QLatin1String("border:1px solid black;\n"
"border-radius:10px;\n"
"font:20px;"));
        label_5 = new QLabel(gridWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 230, 121, 20));
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";"));
        huoqi = new QLineEdit(gridWidget);
        huoqi->setObjectName(QStringLiteral("huoqi"));
        huoqi->setGeometry(QRect(190, 219, 71, 31));
        huoqi->setStyleSheet(QLatin1String("border:1px solid black;\n"
"border-radius:10px;"));
        label_6 = new QLabel(gridWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 230, 41, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";"));

        retranslateUi(Jisuan);

        QMetaObject::connectSlotsByName(Jisuan);
    } // setupUi

    void retranslateUi(QDialog *Jisuan)
    {
        Jisuan->setWindowTitle(QApplication::translate("Jisuan", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Jisuan", " \345\210\251\346\201\257\350\256\241\347\256\227", Q_NULLPTR));
        close->setText(QApplication::translate("Jisuan", "\303\227", Q_NULLPTR));
        liuy->setText(QApplication::translate("Jisuan", "6\344\270\252\346\234\210", Q_NULLPTR));
        sany->setText(QApplication::translate("Jisuan", "3\344\270\252\346\234\210", Q_NULLPTR));
        yin->setText(QApplication::translate("Jisuan", "\344\270\200\345\271\264", Q_NULLPTR));
        ern->setText(QApplication::translate("Jisuan", "\344\270\244\345\271\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("Jisuan", "\345\256\232\346\234\237\345\255\230\346\254\276\346\227\266\351\227\264", Q_NULLPTR));
        label_3->setText(QApplication::translate("Jisuan", "<html><head/><body><p align=\"center\"><span style=\" font-size:6pt;\">3\344\270\252\346\234\210\345\210\251\347\216\2071.1%</span></p><p align=\"center\"><span style=\" font-size:6pt;\">6\344\270\252\346\234\210\345\210\251\347\216\2071.3%</span></p><p align=\"center\"><span style=\" font-size:6pt;\">\344\270\200\345\271\264\345\210\251\347\216\2071.5%</span></p><p align=\"center\"><span style=\" font-size:6pt;\">\344\270\244\345\271\264\345\210\251\347\216\2072.1%</span></p><p align=\"center\"><span style=\" font-size:6pt;\">\346\264\273\346\234\237\345\210\251\347\216\2070.3%</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("Jisuan", "\346\202\250\347\232\204\346\234\254\346\201\257\345\205\261\344\270\272\357\274\232", Q_NULLPTR));
        signin->setText(QApplication::translate("Jisuan", "\347\241\256\345\256\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("Jisuan", "\346\264\273\346\234\237\345\255\230\346\254\276\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("Jisuan", "\344\270\252\346\234\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Jisuan: public Ui_Jisuan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JISUAN_H
