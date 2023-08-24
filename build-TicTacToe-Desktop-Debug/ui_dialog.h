/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_15;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QPushButton *pushButton_1;
    QPushButton *pushButton_16;
    QPushButton *pushButton_5;
    QPushButton *pushButton_14;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_13;
    QLabel *label;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber_X;
    QLCDNumber *lcdNumber_O;
    QLabel *label_X;
    QLabel *label_O;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_17;
    QFrame *line;
    QFrame *line_3;
    QFrame *line_2;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(725, 429);
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 40, 401, 349));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setEnabled(false);
        pushButton_11->setMinimumSize(QSize(60, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans Mono"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        pushButton_11->setFont(font);

        gridLayout_2->addWidget(pushButton_11, 2, 2, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setEnabled(false);
        pushButton_8->setMinimumSize(QSize(60, 80));
        pushButton_8->setFont(font);

        gridLayout_2->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setEnabled(false);
        pushButton_10->setMinimumSize(QSize(60, 80));
        pushButton_10->setFont(font);

        gridLayout_2->addWidget(pushButton_10, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setMinimumSize(QSize(60, 80));
        pushButton_3->setFont(font);

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setEnabled(false);
        pushButton_6->setMinimumSize(QSize(60, 80));
        pushButton_6->setFont(font);

        gridLayout_2->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setEnabled(false);
        pushButton_15->setMinimumSize(QSize(60, 80));
        pushButton_15->setFont(font);

        gridLayout_2->addWidget(pushButton_15, 2, 3, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setEnabled(false);
        pushButton_9->setMinimumSize(QSize(60, 80));
        pushButton_9->setFont(font);

        gridLayout_2->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setEnabled(false);
        pushButton_12->setMinimumSize(QSize(60, 80));
        pushButton_12->setFont(font);

        gridLayout_2->addWidget(pushButton_12, 3, 2, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setEnabled(false);
        pushButton_1->setMinimumSize(QSize(60, 80));
        pushButton_1->setFont(font);

        gridLayout_2->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_16 = new QPushButton(gridLayoutWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setEnabled(false);
        pushButton_16->setMinimumSize(QSize(60, 80));
        pushButton_16->setFont(font);

        gridLayout_2->addWidget(pushButton_16, 3, 3, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(false);
        pushButton_5->setMinimumSize(QSize(60, 80));
        pushButton_5->setFont(font);

        gridLayout_2->addWidget(pushButton_5, 0, 1, 1, 1);

        pushButton_14 = new QPushButton(gridLayoutWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setEnabled(false);
        pushButton_14->setMinimumSize(QSize(60, 80));
        pushButton_14->setFont(font);

        gridLayout_2->addWidget(pushButton_14, 1, 3, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setMinimumSize(QSize(60, 80));
        pushButton_2->setFont(font);

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(false);
        pushButton_4->setMinimumSize(QSize(60, 80));
        pushButton_4->setFont(font);

        gridLayout_2->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setEnabled(false);
        pushButton_7->setMinimumSize(QSize(60, 80));
        pushButton_7->setFont(font);

        gridLayout_2->addWidget(pushButton_7, 2, 1, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setEnabled(false);
        pushButton_13->setMinimumSize(QSize(60, 80));
        pushButton_13->setFont(font);

        gridLayout_2->addWidget(pushButton_13, 0, 3, 1, 1);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 210, 281, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_2 = new QWidget(Dialog);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(460, 40, 246, 101));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber_X = new QLCDNumber(gridLayoutWidget_2);
        lcdNumber_X->setObjectName(QString::fromUtf8("lcdNumber_X"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        lcdNumber_X->setFont(font2);
        lcdNumber_X->setFrameShape(QFrame::Box);
        lcdNumber_X->setSmallDecimalPoint(false);
        lcdNumber_X->setDigitCount(1);
        lcdNumber_X->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber_X, 0, 2, 1, 1);

        lcdNumber_O = new QLCDNumber(gridLayoutWidget_2);
        lcdNumber_O->setObjectName(QString::fromUtf8("lcdNumber_O"));
        lcdNumber_O->setFont(font2);
        lcdNumber_O->setDigitCount(1);
        lcdNumber_O->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber_O, 1, 2, 1, 1);

        label_X = new QLabel(gridLayoutWidget_2);
        label_X->setObjectName(QString::fromUtf8("label_X"));
        label_X->setFont(font2);

        gridLayout->addWidget(label_X, 0, 0, 1, 1);

        label_O = new QLabel(gridLayoutWidget_2);
        label_O->setObjectName(QString::fromUtf8("label_O"));
        label_O->setFont(font2);

        gridLayout->addWidget(label_O, 1, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(460, 310, 221, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        pushButton->setFont(font3);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_17 = new QPushButton(horizontalLayoutWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_2->addWidget(pushButton_17);

        line = new QFrame(Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(119, 20, 20, 380));
        line->setFont(font2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(Dialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(322, 20, 20, 380));
        line_3->setFont(font2);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Dialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(221, 20, 20, 380));
        line_2->setFont(font2);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(Dialog);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(10, 202, 434, 20));
        line_6->setFont(font2);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(Dialog);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(10, 290, 434, 20));
        line_7->setFont(font2);
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(Dialog);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(10, 116, 434, 20));
        line_8->setFont(font2);
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_11->setText(QString());
        pushButton_8->setText(QString());
        pushButton_10->setText(QString());
        pushButton_3->setText(QString());
        pushButton_6->setText(QString());
        pushButton_15->setText(QString());
        pushButton_9->setText(QString());
        pushButton_12->setText(QString());
        pushButton_1->setText(QString());
        pushButton_16->setText(QString());
        pushButton_5->setText(QString());
        pushButton_14->setText(QString());
        pushButton_2->setText(QString());
        pushButton_4->setText(QString());
        pushButton_7->setText(QString());
        pushButton_13->setText(QString());
        label->setText(QString());
        label_X->setText(QCoreApplication::translate("Dialog", "Player \"X\" ->", nullptr));
        label_O->setText(QCoreApplication::translate("Dialog", "Player \"O\" ->", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "CLEAR TABLE", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Dialog", "RESET GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
