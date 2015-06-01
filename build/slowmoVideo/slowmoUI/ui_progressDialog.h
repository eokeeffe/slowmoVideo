/********************************************************************************
** Form generated from reading UI file 'progressDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSDIALOG_H
#define UI_PROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProgressDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblTaskDesc;
    QProgressBar *progress;
    QLabel *lblTaskItemDesc;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bAbort;
    QPushButton *bOk;

    void setupUi(QDialog *ProgressDialog)
    {
        if (ProgressDialog->objectName().isEmpty())
            ProgressDialog->setObjectName(QStringLiteral("ProgressDialog"));
        ProgressDialog->resize(562, 140);
        verticalLayout_2 = new QVBoxLayout(ProgressDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblTaskDesc = new QLabel(ProgressDialog);
        lblTaskDesc->setObjectName(QStringLiteral("lblTaskDesc"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTaskDesc->setFont(font);

        verticalLayout->addWidget(lblTaskDesc);

        progress = new QProgressBar(ProgressDialog);
        progress->setObjectName(QStringLiteral("progress"));
        progress->setValue(0);

        verticalLayout->addWidget(progress);

        lblTaskItemDesc = new QLabel(ProgressDialog);
        lblTaskItemDesc->setObjectName(QStringLiteral("lblTaskItemDesc"));
        lblTaskItemDesc->setWordWrap(true);

        verticalLayout->addWidget(lblTaskItemDesc);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bAbort = new QPushButton(ProgressDialog);
        bAbort->setObjectName(QStringLiteral("bAbort"));

        horizontalLayout->addWidget(bAbort);

        bOk = new QPushButton(ProgressDialog);
        bOk->setObjectName(QStringLiteral("bOk"));

        horizontalLayout->addWidget(bOk);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ProgressDialog);

        QMetaObject::connectSlotsByName(ProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *ProgressDialog)
    {
        ProgressDialog->setWindowTitle(QApplication::translate("ProgressDialog", "Progress", 0));
        lblTaskDesc->setText(QApplication::translate("ProgressDialog", "Current Task", 0));
        lblTaskItemDesc->setText(QApplication::translate("ProgressDialog", "Task Description", 0));
        bAbort->setText(QApplication::translate("ProgressDialog", "Abort", 0));
        bOk->setText(QApplication::translate("ProgressDialog", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class ProgressDialog: public Ui_ProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSDIALOG_H
