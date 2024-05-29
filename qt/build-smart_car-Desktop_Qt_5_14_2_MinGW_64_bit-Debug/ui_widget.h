/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *turn_left;
    QPushButton *buck;
    QPushButton *turn_right;
    QPushButton *go;
    QLabel *label_1;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_ip;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_port;
    QPushButton *pushButton;
    QLineEdit *lineEdit_net;
    QLabel *label;
    QLabel *label_pic;
    QPushButton *pushButton_star;
    QPushButton *pushButton_top;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(937, 627);
        Widget->setWindowOpacity(1.000000000000000);
        Widget->setLayoutDirection(Qt::LeftToRight);
        turn_left = new QPushButton(Widget);
        turn_left->setObjectName(QString::fromUtf8("turn_left"));
        turn_left->setGeometry(QRect(480, 490, 93, 28));
        buck = new QPushButton(Widget);
        buck->setObjectName(QString::fromUtf8("buck"));
        buck->setGeometry(QRect(640, 590, 93, 28));
        turn_right = new QPushButton(Widget);
        turn_right->setObjectName(QString::fromUtf8("turn_right"));
        turn_right->setGeometry(QRect(810, 490, 93, 28));
        go = new QPushButton(Widget);
        go->setObjectName(QString::fromUtf8("go"));
        go->setGeometry(QRect(650, 390, 93, 28));
        label_1 = new QLabel(Widget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(590, 440, 201, 131));
        label_1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        label_1->setTextFormat(Qt::AutoText);
        label_1->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 470, 213, 115));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        lineEdit_ip = new QLineEdit(layoutWidget);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));

        horizontalLayout->addWidget(lineEdit_ip);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        lineEdit_port = new QLineEdit(layoutWidget);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));

        horizontalLayout_2->addWidget(lineEdit_port);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        lineEdit_net = new QLineEdit(layoutWidget);
        lineEdit_net->setObjectName(QString::fromUtf8("lineEdit_net"));

        verticalLayout->addWidget(lineEdit_net);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, -40, 951, 711));
        label_pic = new QLabel(Widget);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(130, 10, 661, 361));
        label_pic->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_star = new QPushButton(Widget);
        pushButton_star->setObjectName(QString::fromUtf8("pushButton_star"));
        pushButton_star->setGeometry(QRect(70, 440, 75, 23));
        pushButton_top = new QPushButton(Widget);
        pushButton_top->setObjectName(QString::fromUtf8("pushButton_top"));
        pushButton_top->setGeometry(QRect(210, 440, 75, 23));
        label->raise();
        turn_left->raise();
        buck->raise();
        turn_right->raise();
        go->raise();
        label_1->raise();
        layoutWidget->raise();
        label_pic->raise();
        pushButton_star->raise();
        pushButton_top->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        turn_left->setText(QCoreApplication::translate("Widget", "\345\267\246\350\275\254", nullptr));
        buck->setText(QCoreApplication::translate("Widget", "\345\220\216\351\200\200", nullptr));
        turn_right->setText(QCoreApplication::translate("Widget", "\345\217\263\350\275\254", nullptr));
        go->setText(QCoreApplication::translate("Widget", "\345\211\215\350\277\233", nullptr));
        label_1->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", " ip ", nullptr));
        lineEdit_ip->setText(QCoreApplication::translate("Widget", "192.168.1.1", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "port", nullptr));
        lineEdit_port->setText(QCoreApplication::translate("Widget", "10005", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
        label->setText(QString());
        label_pic->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        pushButton_star->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\347\233\221\346\216\247", nullptr));
        pushButton_top->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\347\233\221\346\216\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
