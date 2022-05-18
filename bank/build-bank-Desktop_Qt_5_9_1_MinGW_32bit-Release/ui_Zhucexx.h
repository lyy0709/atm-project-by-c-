/********************************************************************************
** Form generated from reading UI file 'Zhucexx.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUCEXX_H
#define UI_ZHUCEXX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Zhucexx
{
public:
    QFrame *frame;
    QLabel *label;
    QWidget *widget;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QWidget *verticalWidget_1;
    QLineEdit *name;
    QLineEdit *phonenum;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *nan;
    QSpacerItem *horizontalSpacer;
    QRadioButton *nv;
    QSpacerItem *horizontalSpacer_2;
    QWidget *verticalWidget1;
    QLineEdit *address;
    QLineEdit *sfid;
    QWidget *verticalWidget_2;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *signin;
    QToolButton *close;

    void setupUi(QDialog *Zhucexx)
    {
        if (Zhucexx->objectName().isEmpty())
            Zhucexx->setObjectName(QStringLiteral("Zhucexx"));
        Zhucexx->resize(522, 404);
        Zhucexx->setStyleSheet(QLatin1String("QLineEdit{\n"
"border-radius:10px;\n"
"border:1px solid black;}"));
        frame = new QFrame(Zhucexx);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 501, 381));
        frame->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 501, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 50, 101, 121));
        widget->setStyleSheet(QStringLiteral("image: url(:/image/tx.jpg);"));
        verticalWidget = new QWidget(frame);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(180, 60, 111, 111));
        verticalWidget->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";"));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(verticalWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_3 = new QLabel(verticalWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_4 = new QLabel(verticalWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        verticalWidget_1 = new QWidget(frame);
        verticalWidget_1->setObjectName(QStringLiteral("verticalWidget_1"));
        verticalWidget_1->setGeometry(QRect(290, 70, 160, 101));
        name = new QLineEdit(verticalWidget_1);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(6, 6, 141, 21));
        phonenum = new QLineEdit(verticalWidget_1);
        phonenum->setObjectName(QStringLiteral("phonenum"));
        phonenum->setGeometry(QRect(6, 74, 141, 21));
        layoutWidget = new QWidget(verticalWidget_1);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 148, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nan = new QRadioButton(layoutWidget);
        nan->setObjectName(QStringLiteral("nan"));
        nan->setChecked(true);

        horizontalLayout->addWidget(nan);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        nv = new QRadioButton(layoutWidget);
        nv->setObjectName(QStringLiteral("nv"));

        horizontalLayout->addWidget(nv);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalWidget1 = new QWidget(frame);
        verticalWidget1->setObjectName(QStringLiteral("verticalWidget1"));
        verticalWidget1->setGeometry(QRect(210, 200, 241, 71));
        address = new QLineEdit(verticalWidget1);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(1, 1, 231, 31));
        sfid = new QLineEdit(verticalWidget1);
        sfid->setObjectName(QStringLiteral("sfid"));
        sfid->setGeometry(QRect(1, 39, 231, 31));
        verticalWidget_2 = new QWidget(frame);
        verticalWidget_2->setObjectName(QStringLiteral("verticalWidget_2"));
        verticalWidget_2->setGeometry(QRect(60, 190, 151, 91));
        verticalWidget_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";"));
        label_5 = new QLabel(verticalWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 10, 101, 31));
        label_6 = new QLabel(verticalWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 55, 111, 21));
        signin = new QPushButton(frame);
        signin->setObjectName(QStringLiteral("signin"));
        signin->setGeometry(QRect(200, 310, 161, 41));
        signin->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:10px;\n"
"border:1px solid black;"));
        close = new QToolButton(frame);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(450, 0, 32, 31));
        close->setStyleSheet(QStringLiteral("border:none"));
        close->setCheckable(true);

        retranslateUi(Zhucexx);

        QMetaObject::connectSlotsByName(Zhucexx);
    } // setupUi

    void retranslateUi(QDialog *Zhucexx)
    {
        Zhucexx->setWindowTitle(QApplication::translate("Zhucexx", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Zhucexx", " \346\263\250\345\206\214\344\277\241\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("Zhucexx", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Zhucexx", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Zhucexx", "\347\224\265\350\257\235\345\217\267\347\240\201\357\274\232", Q_NULLPTR));
        nan->setText(QApplication::translate("Zhucexx", "\347\224\267", Q_NULLPTR));
        nv->setText(QApplication::translate("Zhucexx", "\345\245\263", Q_NULLPTR));
        label_5->setText(QApplication::translate("Zhucexx", "\345\256\266\345\272\255\344\275\217\345\235\200\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("Zhucexx", "\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", Q_NULLPTR));
        signin->setText(QApplication::translate("Zhucexx", "\347\241\256\345\256\232", Q_NULLPTR));
        close->setText(QApplication::translate("Zhucexx", "\303\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Zhucexx: public Ui_Zhucexx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUCEXX_H
