/********************************************************************************
** Form generated from reading UI file 'shortcutListDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTLISTDIALOG_H
#define UI_SHORTCUTLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShortcutListDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *shortcuts;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ShortcutListDialog)
    {
        if (ShortcutListDialog->objectName().isEmpty())
            ShortcutListDialog->setObjectName(QStringLiteral("ShortcutListDialog"));
        ShortcutListDialog->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShortcutListDialog->sizePolicy().hasHeightForWidth());
        ShortcutListDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ShortcutListDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        shortcuts = new QLabel(ShortcutListDialog);
        shortcuts->setObjectName(QStringLiteral("shortcuts"));
        shortcuts->setText(QStringLiteral("TextLabel"));

        verticalLayout->addWidget(shortcuts);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ShortcutListDialog);

        QMetaObject::connectSlotsByName(ShortcutListDialog);
    } // setupUi

    void retranslateUi(QDialog *ShortcutListDialog)
    {
        ShortcutListDialog->setWindowTitle(QApplication::translate("ShortcutListDialog", "Flow Editor shortcuts", 0));
    } // retranslateUi

};

namespace Ui {
    class ShortcutListDialog: public Ui_ShortcutListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTLISTDIALOG_H
