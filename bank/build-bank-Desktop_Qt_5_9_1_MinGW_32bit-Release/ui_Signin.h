/********************************************************************************
** Form generated from reading UI file 'Signin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signin
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QToolButton *mini;
    QToolButton *close;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *signin;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *zhucexx;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *wanji;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *gly;

    void setupUi(QWidget *Signin)
    {
        if (Signin->objectName().isEmpty())
            Signin->setObjectName(QStringLiteral("Signin"));
        Signin->setWindowModality(Qt::WindowModal);
        Signin->resize(664, 458);
        Signin->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(Signin);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(Signin);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 651, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(verticalLayoutWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        mini = new QToolButton(frame_2);
        mini->setObjectName(QStringLiteral("mini"));
        mini->setGeometry(QRect(520, 0, 41, 31));
        mini->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:none;"));
        close = new QToolButton(frame_2);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(580, 0, 41, 31));
        close->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:none;"));

        verticalLayout->addWidget(frame_2);

        username = new QLineEdit(frame);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(240, 140, 221, 51));
        username->setStyleSheet(QLatin1String("border-radius:10px;\n"
"font-size:16px;\n"
"background-color: rgb(209, 209, 209);\n"
"font: 20px;"));
        password = new QLineEdit(frame);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(240, 210, 221, 51));
        password->setStyleSheet(QLatin1String("border-radius:10px;\n"
"font-size:16px;\n"
"background-color: rgb(209, 209, 209);\n"
"font: 20px;"));
        password->setEchoMode(QLineEdit::Password);
        signin = new QPushButton(frame);
        signin->setObjectName(QStringLiteral("signin"));
        signin->setGeometry(QRect(280, 350, 141, 51));
        signin->setStyleSheet(QLatin1String("font: 20px;\n"
"border-radius:10px;\n"
"border:1px solid black;\n"
""));
        signin->setCheckable(false);
        signin->setChecked(false);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(110, 280, 481, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        zhucexx = new QPushButton(gridLayoutWidget);
        zhucexx->setObjectName(QStringLiteral("zhucexx"));
        zhucexx->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 9pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(zhucexx, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        wanji = new QPushButton(gridLayoutWidget);
        wanji->setObjectName(QStringLiteral("wanji"));
        wanji->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 9pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(wanji, 2, 4, 1, 1);

        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(240, 60, 211, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 87 26pt \"Arial Black\";"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        gly = new QPushButton(frame);
        gly->setObjectName(QStringLiteral("gly"));
        gly->setGeometry(QRect(90, 80, 80, 80));
        gly->setMinimumSize(QSize(80, 80));
        gly->setMaximumSize(QSize(80, 80));
        gly->setStyleSheet(QStringLiteral("border:none"));

        gridLayout_2->addWidget(frame, 0, 1, 1, 1);


        retranslateUi(Signin);

        QMetaObject::connectSlotsByName(Signin);
    } // setupUi

    void retranslateUi(QWidget *Signin)
    {
        Signin->setWindowTitle(QApplication::translate("Signin", "ATM", Q_NULLPTR));
        mini->setText(QApplication::translate("Signin", "-", Q_NULLPTR));
        close->setText(QApplication::translate("Signin", "\303\227", Q_NULLPTR));
        username->setText(QString());
        username->setPlaceholderText(QApplication::translate("Signin", " Username", Q_NULLPTR));
        password->setText(QString());
        password->setPlaceholderText(QApplication::translate("Signin", " Password", Q_NULLPTR));
        signin->setText(QApplication::translate("Signin", "\347\231\273\345\275\225", Q_NULLPTR));
        zhucexx->setText(QApplication::translate("Signin", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        wanji->setText(QApplication::translate("Signin", "\345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("Signin", "\351\223\266\350\241\214\347\263\273\347\273\237", Q_NULLPTR));
        gly->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Signin: public Ui_Signin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
