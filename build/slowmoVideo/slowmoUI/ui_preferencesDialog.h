/********************************************************************************
** Form generated from reading UI file 'preferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *buildFlow;
    QPushButton *bBuildFlow;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *ffmpeg;
    QPushButton *bFFmpeg;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *methodV3D;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *methodOCV;
    QComboBox *oclAlgo;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *methodOCL;
    QComboBox *ocl_device;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *precalcFlow;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bCancel;
    QPushButton *bOk;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QStringLiteral("PreferencesDialog"));
        PreferencesDialog->resize(536, 376);
        verticalLayout_2 = new QVBoxLayout(PreferencesDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(PreferencesDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buildFlow = new QLineEdit(groupBox);
        buildFlow->setObjectName(QStringLiteral("buildFlow"));

        gridLayout->addWidget(buildFlow, 0, 1, 1, 1);

        bBuildFlow = new QPushButton(groupBox);
        bBuildFlow->setObjectName(QStringLiteral("bBuildFlow"));

        gridLayout->addWidget(bBuildFlow, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setText(QStringLiteral("flowBuilder"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setText(QStringLiteral("ffmpeg"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        ffmpeg = new QLineEdit(groupBox);
        ffmpeg->setObjectName(QStringLiteral("ffmpeg"));

        gridLayout->addWidget(ffmpeg, 1, 1, 1, 1);

        bFFmpeg = new QPushButton(groupBox);
        bFFmpeg->setObjectName(QStringLiteral("bFFmpeg"));

        gridLayout->addWidget(bFFmpeg, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);


        verticalLayout_2->addLayout(verticalLayout);

        groupBox_2 = new QGroupBox(PreferencesDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        methodV3D = new QRadioButton(groupBox_2);
        methodV3D->setObjectName(QStringLiteral("methodV3D"));

        horizontalLayout_5->addWidget(methodV3D);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        methodOCV = new QRadioButton(groupBox_2);
        methodOCV->setObjectName(QStringLiteral("methodOCV"));
        methodOCV->setChecked(true);

        horizontalLayout_4->addWidget(methodOCV);

        oclAlgo = new QComboBox(groupBox_2);
        oclAlgo->setObjectName(QStringLiteral("oclAlgo"));

        horizontalLayout_4->addWidget(oclAlgo);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        methodOCL = new QRadioButton(groupBox_2);
        methodOCL->setObjectName(QStringLiteral("methodOCL"));

        horizontalLayout_3->addWidget(methodOCL);

        ocl_device = new QComboBox(groupBox_2);
        ocl_device->setObjectName(QStringLiteral("ocl_device"));

        horizontalLayout_3->addWidget(ocl_device);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(groupBox_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        precalcFlow = new QCheckBox(PreferencesDialog);
        precalcFlow->setObjectName(QStringLiteral("precalcFlow"));
        precalcFlow->setChecked(true);

        horizontalLayout_2->addWidget(precalcFlow);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bCancel = new QPushButton(PreferencesDialog);
        bCancel->setObjectName(QStringLiteral("bCancel"));

        horizontalLayout->addWidget(bCancel);

        bOk = new QPushButton(PreferencesDialog);
        bOk->setObjectName(QStringLiteral("bOk"));

        horizontalLayout->addWidget(bOk);


        verticalLayout_2->addLayout(horizontalLayout);

        QWidget::setTabOrder(buildFlow, bBuildFlow);
        QWidget::setTabOrder(bBuildFlow, bCancel);
        QWidget::setTabOrder(bCancel, bOk);

        retranslateUi(PreferencesDialog);

        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "slowmoUI preferences", 0));
        groupBox->setTitle(QApplication::translate("PreferencesDialog", "Binary locations", 0));
        bBuildFlow->setText(QApplication::translate("PreferencesDialog", "Browse", 0));
        bFFmpeg->setText(QApplication::translate("PreferencesDialog", "Browse", 0));
        groupBox_2->setTitle(QApplication::translate("PreferencesDialog", "Flow method", 0));
        methodV3D->setText(QApplication::translate("PreferencesDialog", "external (GPU, V3D (requires flowBuilder and a video card))", 0));
        methodOCV->setText(QApplication::translate("PreferencesDialog", "CPU, OpenCV", 0));
        methodOCL->setText(QApplication::translate("PreferencesDialog", "OpenCV with OpenCL", 0));
        precalcFlow->setText(QApplication::translate("PreferencesDialog", "Use background thread for Optical Flow", 0));
        bCancel->setText(QApplication::translate("PreferencesDialog", "Cancel", 0));
        bOk->setText(QApplication::translate("PreferencesDialog", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
