/********************************************************************************
** Form generated from reading UI file 'flowEditCanvas.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWEDITCANVAS_H
#define UI_FLOWEDITCANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "libgui/imageDisplay.h"

QT_BEGIN_NAMESPACE

class Ui_FlowEditCanvas
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *lblPos;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblValues;
    QHBoxLayout *horizontalLayout_2;
    ImageDisplay *flow;
    QVBoxLayout *verticalLayout;
    QSlider *amplification;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QRadioButton *eyedropper;
    QRadioButton *picker;
    QRadioButton *average;

    void setupUi(QWidget *FlowEditCanvas)
    {
        if (FlowEditCanvas->objectName().isEmpty())
            FlowEditCanvas->setObjectName(QStringLiteral("FlowEditCanvas"));
        FlowEditCanvas->resize(1058, 608);
        FlowEditCanvas->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(FlowEditCanvas);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblPos = new QLabel(FlowEditCanvas);
        lblPos->setObjectName(QStringLiteral("lblPos"));
        lblPos->setText(QStringLiteral("TextLabel"));

        horizontalLayout->addWidget(lblPos);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lblValues = new QLabel(FlowEditCanvas);
        lblValues->setObjectName(QStringLiteral("lblValues"));

        horizontalLayout->addWidget(lblValues);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        flow = new ImageDisplay(FlowEditCanvas);
        flow->setObjectName(QStringLiteral("flow"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(flow->sizePolicy().hasHeightForWidth());
        flow->setSizePolicy(sizePolicy);
        flow->setFrameShape(QFrame::StyledPanel);
        flow->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(flow);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        amplification = new QSlider(FlowEditCanvas);
        amplification->setObjectName(QStringLiteral("amplification"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(amplification->sizePolicy().hasHeightForWidth());
        amplification->setSizePolicy(sizePolicy1);
        amplification->setMaximum(20);
        amplification->setSliderPosition(3);
        amplification->setOrientation(Qt::Vertical);
        amplification->setTickPosition(QSlider::TicksBelow);
        amplification->setTickInterval(1);

        verticalLayout->addWidget(amplification);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox = new QGroupBox(FlowEditCanvas);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        eyedropper = new QRadioButton(groupBox);
        eyedropper->setObjectName(QStringLiteral("eyedropper"));
        eyedropper->setGeometry(QRect(0, 20, 89, 22));
        picker = new QRadioButton(groupBox);
        picker->setObjectName(QStringLiteral("picker"));
        picker->setGeometry(QRect(0, 60, 89, 22));
        average = new QRadioButton(groupBox);
        average->setObjectName(QStringLiteral("average"));
        average->setGeometry(QRect(0, 40, 89, 22));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(average->sizePolicy().hasHeightForWidth());
        average->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(groupBox);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(FlowEditCanvas);

        QMetaObject::connectSlotsByName(FlowEditCanvas);
    } // setupUi

    void retranslateUi(QWidget *FlowEditCanvas)
    {
        lblValues->setText(QApplication::translate("FlowEditCanvas", "Values at mouse position", 0));
        groupBox->setTitle(QApplication::translate("FlowEditCanvas", "tool", 0));
        eyedropper->setText(QApplication::translate("FlowEditCanvas", "Eyedropper", 0));
        picker->setText(QApplication::translate("FlowEditCanvas", "picker", 0));
        average->setText(QApplication::translate("FlowEditCanvas", "average", 0));
        Q_UNUSED(FlowEditCanvas);
    } // retranslateUi

};

namespace Ui {
    class FlowEditCanvas: public Ui_FlowEditCanvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWEDITCANVAS_H
