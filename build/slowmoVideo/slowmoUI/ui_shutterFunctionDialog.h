/********************************************************************************
** Form generated from reading UI file 'shutterFunctionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHUTTERFUNCTIONDIALOG_H
#define UI_SHUTTERFUNCTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "shutterFunctionFrame.h"

QT_BEGIN_NAMESPACE

class Ui_ShutterFunctionDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *bPrevSegment;
    QLabel *lblSegmentNumber;
    QToolButton *bNextSegment;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *cbFunction;
    QToolButton *bAdd;
    QToolButton *bRemove;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblUsage;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_code;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblcHeader;
    QSpacerItem *verticalSpacer;
    QPlainTextEdit *function;
    QLabel *lblcFooter;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    ShutterFunctionFrame *shutterCurve;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bClose;

    void setupUi(QDialog *ShutterFunctionDialog)
    {
        if (ShutterFunctionDialog->objectName().isEmpty())
            ShutterFunctionDialog->setObjectName(QStringLiteral("ShutterFunctionDialog"));
        ShutterFunctionDialog->resize(868, 575);
        verticalLayout_3 = new QVBoxLayout(ShutterFunctionDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        bPrevSegment = new QToolButton(ShutterFunctionDialog);
        bPrevSegment->setObjectName(QStringLiteral("bPrevSegment"));

        horizontalLayout_4->addWidget(bPrevSegment);

        lblSegmentNumber = new QLabel(ShutterFunctionDialog);
        lblSegmentNumber->setObjectName(QStringLiteral("lblSegmentNumber"));

        horizontalLayout_4->addWidget(lblSegmentNumber);

        bNextSegment = new QToolButton(ShutterFunctionDialog);
        bNextSegment->setObjectName(QStringLiteral("bNextSegment"));

        horizontalLayout_4->addWidget(bNextSegment);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cbFunction = new QComboBox(ShutterFunctionDialog);
        cbFunction->setObjectName(QStringLiteral("cbFunction"));
        cbFunction->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(cbFunction);

        bAdd = new QToolButton(ShutterFunctionDialog);
        bAdd->setObjectName(QStringLiteral("bAdd"));

        horizontalLayout_3->addWidget(bAdd);

        bRemove = new QToolButton(ShutterFunctionDialog);
        bRemove->setObjectName(QStringLiteral("bRemove"));

        horizontalLayout_3->addWidget(bRemove);

        lineEdit = new QLineEdit(ShutterFunctionDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setMinimumSize(QSize(200, 0));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setBold(false);
        font.setWeight(50);
        lineEdit->setFont(font);

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        lblUsage = new QLabel(ShutterFunctionDialog);
        lblUsage->setObjectName(QStringLiteral("lblUsage"));

        horizontalLayout_3->addWidget(lblUsage);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_code = new QVBoxLayout();
        verticalLayout_code->setObjectName(QStringLiteral("verticalLayout_code"));
        line = new QFrame(ShutterFunctionDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_code->addWidget(line);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lblcHeader = new QLabel(ShutterFunctionDialog);
        lblcHeader->setObjectName(QStringLiteral("lblcHeader"));
        QFont font1;
        font1.setFamily(QStringLiteral("Monospace"));
        font1.setPointSize(8);
        lblcHeader->setFont(font1);
        lblcHeader->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        lblcHeader->setWordWrap(true);

        horizontalLayout_5->addWidget(lblcHeader);

        verticalSpacer = new QSpacerItem(20, 130, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(verticalSpacer);


        verticalLayout_code->addLayout(horizontalLayout_5);

        function = new QPlainTextEdit(ShutterFunctionDialog);
        function->setObjectName(QStringLiteral("function"));
        QFont font2;
        font2.setFamily(QStringLiteral("Monospace"));
        font2.setKerning(true);
        function->setFont(font2);

        verticalLayout_code->addWidget(function);

        lblcFooter = new QLabel(ShutterFunctionDialog);
        lblcFooter->setObjectName(QStringLiteral("lblcFooter"));
        lblcFooter->setFont(font1);
        lblcFooter->setWordWrap(true);

        verticalLayout_code->addWidget(lblcFooter);


        horizontalLayout_2->addLayout(verticalLayout_code);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(ShutterFunctionDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);

        shutterCurve = new ShutterFunctionFrame(ShutterFunctionDialog);
        shutterCurve->setObjectName(QStringLiteral("shutterCurve"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(shutterCurve->sizePolicy().hasHeightForWidth());
        shutterCurve->setSizePolicy(sizePolicy);
        shutterCurve->setMinimumSize(QSize(200, 0));
        shutterCurve->setFrameShape(QFrame::StyledPanel);
        shutterCurve->setFrameShadow(QFrame::Plain);
        shutterCurve->setLineWidth(0);

        verticalLayout_2->addWidget(shutterCurve);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bClose = new QPushButton(ShutterFunctionDialog);
        bClose->setObjectName(QStringLiteral("bClose"));

        horizontalLayout->addWidget(bClose);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(ShutterFunctionDialog);

        QMetaObject::connectSlotsByName(ShutterFunctionDialog);
    } // setupUi

    void retranslateUi(QDialog *ShutterFunctionDialog)
    {
        ShutterFunctionDialog->setWindowTitle(QApplication::translate("ShutterFunctionDialog", "Shutter Functions", 0));
        bPrevSegment->setText(QApplication::translate("ShutterFunctionDialog", "<", 0));
        lblSegmentNumber->setText(QApplication::translate("ShutterFunctionDialog", "Segment %1", 0));
        bNextSegment->setText(QApplication::translate("ShutterFunctionDialog", ">", 0));
        bAdd->setText(QApplication::translate("ShutterFunctionDialog", "+", 0));
        bRemove->setText(QApplication::translate("ShutterFunctionDialog", "-", 0));
        lineEdit->setText(QApplication::translate("ShutterFunctionDialog", "shutterFunc1", 0));
        lblUsage->setText(QApplication::translate("ShutterFunctionDialog", "Used: %1 times", 0));
        lblcHeader->setText(QApplication::translate("ShutterFunctionDialog", "// header\n"
"(function foo(args...) {", 0));
        function->setPlainText(QApplication::translate("ShutterFunctionDialog", "return 0;", 0));
        lblcFooter->setText(QApplication::translate("ShutterFunctionDialog", "// footer\n"
"})", 0));
        label_3->setText(QApplication::translate("ShutterFunctionDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bitstream Vera Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Math functions are available in the Math namespace:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Monospace';\">Math.PI, Math.cos(...), Math.pow(base. exponent) etc.</span></p>\n"
"</body></html>", 0));
        bClose->setText(QApplication::translate("ShutterFunctionDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ShutterFunctionDialog: public Ui_ShutterFunctionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHUTTERFUNCTIONDIALOG_H
