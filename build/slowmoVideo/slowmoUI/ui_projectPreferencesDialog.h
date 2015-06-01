/********************************************************************************
** Form generated from reading UI file 'projectPreferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTPREFERENCESDIALOG_H
#define UI_PROJECTPREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProjectPreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lCanvas_xAxisFPS;
    QLineEdit *canvas_xAxisFPS;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProjectPreferencesDialog)
    {
        if (ProjectPreferencesDialog->objectName().isEmpty())
            ProjectPreferencesDialog->setObjectName(QStringLiteral("ProjectPreferencesDialog"));
        ProjectPreferencesDialog->resize(588, 62);
        verticalLayout = new QVBoxLayout(ProjectPreferencesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lCanvas_xAxisFPS = new QLabel(ProjectPreferencesDialog);
        lCanvas_xAxisFPS->setObjectName(QStringLiteral("lCanvas_xAxisFPS"));

        horizontalLayout->addWidget(lCanvas_xAxisFPS);

        canvas_xAxisFPS = new QLineEdit(ProjectPreferencesDialog);
        canvas_xAxisFPS->setObjectName(QStringLiteral("canvas_xAxisFPS"));

        horizontalLayout->addWidget(canvas_xAxisFPS);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ProjectPreferencesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ProjectPreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProjectPreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProjectPreferencesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProjectPreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *ProjectPreferencesDialog)
    {
        ProjectPreferencesDialog->setWindowTitle(QApplication::translate("ProjectPreferencesDialog", "Dialog", 0));
        lCanvas_xAxisFPS->setText(QApplication::translate("ProjectPreferencesDialog", "FPS value to use for calculating the output frame (display only)", 0));
    } // retranslateUi

};

namespace Ui {
    class ProjectPreferencesDialog: public Ui_ProjectPreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTPREFERENCESDIALOG_H
