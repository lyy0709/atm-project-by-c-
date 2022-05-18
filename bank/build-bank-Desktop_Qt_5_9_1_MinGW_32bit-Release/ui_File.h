/********************************************************************************
** Form generated from reading UI file 'File.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_File
{
public:
    QFrame *frame;
    QLabel *label;
    QTableWidget *zhlist;
    QToolButton *close;
    QPushButton *signin_2;

    void setupUi(QDialog *File)
    {
        if (File->objectName().isEmpty())
            File->setObjectName(QStringLiteral("File"));
        File->resize(541, 425);
        frame = new QFrame(File);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 521, 401));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 341, 41));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        zhlist = new QTableWidget(frame);
        zhlist->setObjectName(QStringLiteral("zhlist"));
        zhlist->setGeometry(QRect(5, 41, 511, 301));
        zhlist->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        close = new QToolButton(frame);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(460, 0, 32, 31));
        close->setStyleSheet(QLatin1String("border:none;\n"
"background-color: rgb(255, 255, 255);"));
        signin_2 = new QPushButton(frame);
        signin_2->setObjectName(QStringLiteral("signin_2"));
        signin_2->setGeometry(QRect(200, 350, 141, 41));
        signin_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:1px solid black;\n"
"border-radius:10px;\n"
"font:15px;"));

        retranslateUi(File);

        QMetaObject::connectSlotsByName(File);
    } // setupUi

    void retranslateUi(QDialog *File)
    {
        File->setWindowTitle(QApplication::translate("File", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("File", " \350\264\246\345\217\267\347\256\241\347\220\206", Q_NULLPTR));
        close->setText(QApplication::translate("File", "\303\227", Q_NULLPTR));
        signin_2->setText(QApplication::translate("File", "\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class File: public Ui_File {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H
