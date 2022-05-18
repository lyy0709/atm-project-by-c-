/********************************************************************************
** Form generated from reading UI file 'Chaxun.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAXUN_H
#define UI_CHAXUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chaxun
{
public:
    QFrame *frame;
    QLabel *label;
    QFrame *frame_2;
    QPushButton *signin;
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLineEdit *type;
    QLineEdit *rmb;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *name;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *gendr;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *phonenum;
    QToolButton *close;

    void setupUi(QDialog *Chaxun)
    {
        if (Chaxun->objectName().isEmpty())
            Chaxun->setObjectName(QStringLiteral("Chaxun"));
        Chaxun->resize(476, 408);
        Chaxun->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"border:none;\n"
"}\n"
"QLineEdit{\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:none;\n"
"}\n"
"QLabel{\n"
"font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        frame = new QFrame(Chaxun);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 461, 391));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 181, 41));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(20, 40, 421, 331));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        signin = new QPushButton(frame_2);
        signin->setObjectName(QStringLiteral("signin"));
        signin->setGeometry(QRect(170, 270, 111, 51));
        signin->setStyleSheet(QLatin1String("font:20px;\n"
"background-color: rgb(0, 170, 255);\n"
"border-radius:10px;\n"
"border:1px solid rgb(0, 170, 255);\n"
""));
        gridWidget = new QWidget(frame_2);
        gridWidget->setObjectName(QStringLiteral("gridWidget"));
        gridWidget->setGeometry(QRect(50, 30, 341, 231));
        gridWidget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(gridWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        type = new QLineEdit(gridWidget);
        type->setObjectName(QStringLiteral("type"));

        gridLayout->addWidget(type, 8, 1, 1, 1);

        rmb = new QLineEdit(gridWidget);
        rmb->setObjectName(QStringLiteral("rmb"));

        gridLayout->addWidget(rmb, 6, 1, 1, 1);

        label_5 = new QLabel(gridWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 7, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        name = new QLineEdit(gridWidget);
        name->setObjectName(QStringLiteral("name"));

        gridLayout->addWidget(name, 0, 1, 1, 1);

        label_3 = new QLabel(gridWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 1);

        gendr = new QLineEdit(gridWidget);
        gendr->setObjectName(QStringLiteral("gendr"));

        gridLayout->addWidget(gendr, 2, 1, 1, 1);

        label_6 = new QLabel(gridWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        label_2 = new QLabel(gridWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        phonenum = new QLineEdit(gridWidget);
        phonenum->setObjectName(QStringLiteral("phonenum"));

        gridLayout->addWidget(phonenum, 4, 1, 1, 1);

        close = new QToolButton(frame);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(410, 0, 32, 31));
        close->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        retranslateUi(Chaxun);

        QMetaObject::connectSlotsByName(Chaxun);
    } // setupUi

    void retranslateUi(QDialog *Chaxun)
    {
        Chaxun->setWindowTitle(QApplication::translate("Chaxun", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Chaxun", " \344\275\231\351\242\235\346\237\245\350\257\242", Q_NULLPTR));
        signin->setText(QApplication::translate("Chaxun", "\347\241\256\345\256\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Chaxun", "\347\224\265\350\257\235\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("Chaxun", "\344\275\231\351\242\235\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Chaxun", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("Chaxun", "\345\215\241\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Chaxun", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        close->setText(QApplication::translate("Chaxun", "\303\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Chaxun: public Ui_Chaxun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAXUN_H
