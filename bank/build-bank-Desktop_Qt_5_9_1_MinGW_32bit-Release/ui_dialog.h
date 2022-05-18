/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *frame;
    QLabel *label;
    QWidget *gridWidget;
    QPushButton *cunkuan;
    QPushButton *chaxun;
    QPushButton *zhuxiao;
    QPushButton *qukuan;
    QPushButton *jisuan;
    QPushButton *tuika;
    QLabel *label_2;
    QToolButton *close;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(692, 610);
        frame = new QFrame(Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 661, 521));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 661, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"font: 16pt \"\351\273\221\344\275\223\";"));
        gridWidget = new QWidget(frame);
        gridWidget->setObjectName(QStringLiteral("gridWidget"));
        gridWidget->setGeometry(QRect(150, 130, 431, 291));
        gridWidget->setMinimumSize(QSize(15, 15));
        gridWidget->setStyleSheet(QLatin1String("QPushButton{\n"
"font:20px;\n"
"border-radius:10px;\n"
"border:1px solid black;}"));
        cunkuan = new QPushButton(gridWidget);
        cunkuan->setObjectName(QStringLiteral("cunkuan"));
        cunkuan->setGeometry(QRect(1, 60, 120, 60));
        cunkuan->setMinimumSize(QSize(120, 60));
        cunkuan->setMaximumSize(QSize(120, 60));
        chaxun = new QPushButton(gridWidget);
        chaxun->setObjectName(QStringLiteral("chaxun"));
        chaxun->setGeometry(QRect(1, 138, 120, 60));
        chaxun->setMinimumSize(QSize(120, 60));
        zhuxiao = new QPushButton(gridWidget);
        zhuxiao->setObjectName(QStringLiteral("zhuxiao"));
        zhuxiao->setGeometry(QRect(1, 216, 120, 60));
        zhuxiao->setMinimumSize(QSize(120, 60));
        qukuan = new QPushButton(gridWidget);
        qukuan->setObjectName(QStringLiteral("qukuan"));
        qukuan->setGeometry(QRect(218, 60, 120, 60));
        qukuan->setMinimumSize(QSize(120, 60));
        jisuan = new QPushButton(gridWidget);
        jisuan->setObjectName(QStringLiteral("jisuan"));
        jisuan->setGeometry(QRect(218, 138, 120, 60));
        jisuan->setMinimumSize(QSize(120, 60));
        tuika = new QPushButton(gridWidget);
        tuika->setObjectName(QStringLiteral("tuika"));
        tuika->setGeometry(QRect(218, 216, 120, 60));
        tuika->setMinimumSize(QSize(120, 60));
        tuika->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 100, 141, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 25 14pt \"\351\273\221\344\275\223\";"));
        close = new QToolButton(frame);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(590, 0, 41, 41));
        close->setStyleSheet(QStringLiteral("border:none"));
        gridWidget->raise();
        label->raise();
        label_2->raise();
        close->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "  \344\270\232\345\212\241\345\212\237\350\203\275", Q_NULLPTR));
        cunkuan->setText(QApplication::translate("Dialog", "\345\255\230\346\254\276", Q_NULLPTR));
        chaxun->setText(QApplication::translate("Dialog", "\344\275\231\351\242\235\346\237\245\350\257\242", Q_NULLPTR));
        zhuxiao->setText(QApplication::translate("Dialog", "\346\263\250\351\224\200", Q_NULLPTR));
        qukuan->setText(QApplication::translate("Dialog", "\345\217\226\346\254\276", Q_NULLPTR));
        jisuan->setText(QApplication::translate("Dialog", "\345\210\251\346\201\257\350\256\241\347\256\227", Q_NULLPTR));
        tuika->setText(QApplication::translate("Dialog", "\351\200\200\345\215\241", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "\350\257\267\351\200\211\346\213\251\344\270\232\345\212\241", Q_NULLPTR));
        close->setText(QApplication::translate("Dialog", "\303\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
