/********************************************************************************
** Form generated from reading UI file 'tagAddDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGADDDIALOG_H
#define UI_TAGADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TagAddDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *lblTag;
    QVBoxLayout *verticalLayout;
    QSpacerItem *dummySpacer_1;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QSpacerItem *dummySpacer_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalUpperSpacer;
    QLineEdit *tag;
    QSpacerItem *verticalLowerSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bAbort;
    QPushButton *bOk;

    void setupUi(QDialog *TagAddDialog)
    {
        if (TagAddDialog->objectName().isEmpty())
            TagAddDialog->setObjectName(QStringLiteral("TagAddDialog"));
        TagAddDialog->resize(691, 145);
        gridLayout = new QGridLayout(TagAddDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblTag = new QLabel(TagAddDialog);
        lblTag->setObjectName(QStringLiteral("lblTag"));

        gridLayout->addWidget(lblTag, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dummySpacer_1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(dummySpacer_1);

        label = new QLabel(TagAddDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_2 = new QLabel(TagAddDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        dummySpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(dummySpacer_2);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalUpperSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalUpperSpacer);

        tag = new QLineEdit(TagAddDialog);
        tag->setObjectName(QStringLiteral("tag"));

        verticalLayout_2->addWidget(tag);

        verticalLowerSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalLowerSpacer);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bAbort = new QPushButton(TagAddDialog);
        bAbort->setObjectName(QStringLiteral("bAbort"));

        horizontalLayout->addWidget(bAbort);

        bOk = new QPushButton(TagAddDialog);
        bOk->setObjectName(QStringLiteral("bOk"));

        horizontalLayout->addWidget(bOk);


        gridLayout->addLayout(horizontalLayout, 3, 2, 1, 1);


        retranslateUi(TagAddDialog);

        QMetaObject::connectSlotsByName(TagAddDialog);
    } // setupUi

    void retranslateUi(QDialog *TagAddDialog)
    {
        TagAddDialog->setWindowTitle(QApplication::translate("TagAddDialog", "Add tag", 0));
        lblTag->setText(QApplication::translate("TagAddDialog", "Change the tag type with Arrows up/down.", 0));
        label->setText(QApplication::translate("TagAddDialog", "Source Tag", 0));
        label_2->setText(QApplication::translate("TagAddDialog", "Output Tag", 0));
        bAbort->setText(QApplication::translate("TagAddDialog", "Abort", 0));
        bOk->setText(QApplication::translate("TagAddDialog", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class TagAddDialog: public Ui_TagAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGADDDIALOG_H
