/********************************************************************************
** Form generated from reading UI file 'frameMonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMEMONITOR_H
#define UI_FRAMEMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "libgui/imageDisplay.h"

QT_BEGIN_NAMESPACE

class Ui_FrameMonitor
{
public:
    QGridLayout *gridLayout;
    ImageDisplay *imageDisplay;

    void setupUi(QWidget *FrameMonitor)
    {
        if (FrameMonitor->objectName().isEmpty())
            FrameMonitor->setObjectName(QStringLiteral("FrameMonitor"));
        FrameMonitor->resize(400, 300);
        FrameMonitor->setMinimumSize(QSize(0, 240));
        gridLayout = new QGridLayout(FrameMonitor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        imageDisplay = new ImageDisplay(FrameMonitor);
        imageDisplay->setObjectName(QStringLiteral("imageDisplay"));
        imageDisplay->setFrameShape(QFrame::NoFrame);
        imageDisplay->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(imageDisplay, 0, 0, 1, 1);


        retranslateUi(FrameMonitor);

        QMetaObject::connectSlotsByName(FrameMonitor);
    } // setupUi

    void retranslateUi(QWidget *FrameMonitor)
    {
        FrameMonitor->setWindowTitle(QApplication::translate("FrameMonitor", "Input monitor", 0));
    } // retranslateUi

};

namespace Ui {
    class FrameMonitor: public Ui_FrameMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMEMONITOR_H
