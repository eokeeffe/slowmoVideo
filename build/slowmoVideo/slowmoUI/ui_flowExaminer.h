/********************************************************************************
** Form generated from reading UI file 'flowExaminer.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWEXAMINER_H
#define UI_FLOWEXAMINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "libgui/imageDisplay.h"

QT_BEGIN_NAMESPACE

class Ui_FlowExaminer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    ImageDisplay *leftFrame;
    ImageDisplay *rightFrame;
    QHBoxLayout *horizontalLayout_2;
    ImageDisplay *leftFlow;
    ImageDisplay *rightFlow;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSlider *amplification;
    QSpacerItem *horizontalSpacer;
    QPushButton *bClose;

    void setupUi(QDialog *FlowExaminer)
    {
        if (FlowExaminer->objectName().isEmpty())
            FlowExaminer->setObjectName(QStringLiteral("FlowExaminer"));
        FlowExaminer->resize(918, 603);
        FlowExaminer->setWindowTitle(QStringLiteral("Dialog"));
        verticalLayout = new QVBoxLayout(FlowExaminer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leftFrame = new ImageDisplay(FlowExaminer);
        leftFrame->setObjectName(QStringLiteral("leftFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftFrame->sizePolicy().hasHeightForWidth());
        leftFrame->setSizePolicy(sizePolicy);
        leftFrame->setFrameShape(QFrame::StyledPanel);
        leftFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(leftFrame);

        rightFrame = new ImageDisplay(FlowExaminer);
        rightFrame->setObjectName(QStringLiteral("rightFrame"));
        rightFrame->setFrameShape(QFrame::StyledPanel);
        rightFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(rightFrame);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        leftFlow = new ImageDisplay(FlowExaminer);
        leftFlow->setObjectName(QStringLiteral("leftFlow"));
        sizePolicy.setHeightForWidth(leftFlow->sizePolicy().hasHeightForWidth());
        leftFlow->setSizePolicy(sizePolicy);
        leftFlow->setFrameShape(QFrame::StyledPanel);
        leftFlow->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(leftFlow);

        rightFlow = new ImageDisplay(FlowExaminer);
        rightFlow->setObjectName(QStringLiteral("rightFlow"));
        rightFlow->setFrameShape(QFrame::StyledPanel);
        rightFlow->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(rightFlow);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(FlowExaminer);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        amplification = new QSlider(FlowExaminer);
        amplification->setObjectName(QStringLiteral("amplification"));
        amplification->setMaximum(40);
        amplification->setValue(10);
        amplification->setOrientation(Qt::Horizontal);
        amplification->setTickPosition(QSlider::TicksBelow);
        amplification->setTickInterval(1);

        horizontalLayout_3->addWidget(amplification);

        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        bClose = new QPushButton(FlowExaminer);
        bClose->setObjectName(QStringLiteral("bClose"));

        horizontalLayout_3->addWidget(bClose);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(FlowExaminer);

        QMetaObject::connectSlotsByName(FlowExaminer);
    } // setupUi

    void retranslateUi(QDialog *FlowExaminer)
    {
        label->setText(QApplication::translate("FlowExaminer", "Amplification : ", 0));
        bClose->setText(QApplication::translate("FlowExaminer", "Close", 0));
        Q_UNUSED(FlowExaminer);
    } // retranslateUi

};

namespace Ui {
    class FlowExaminer: public Ui_FlowExaminer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWEXAMINER_H
