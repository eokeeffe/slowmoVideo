/********************************************************************************
** Form generated from reading UI file 'renderPreview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDERPREVIEW_H
#define UI_RENDERPREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "libgui/imageDisplay.h"

QT_BEGIN_NAMESPACE

class Ui_RenderPreview
{
public:
    QVBoxLayout *verticalLayout;
    ImageDisplay *imageDisplay;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *info;

    void setupUi(QWidget *RenderPreview)
    {
        if (RenderPreview->objectName().isEmpty())
            RenderPreview->setObjectName(QStringLiteral("RenderPreview"));
        RenderPreview->resize(458, 277);
        verticalLayout = new QVBoxLayout(RenderPreview);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        imageDisplay = new ImageDisplay(RenderPreview);
        imageDisplay->setObjectName(QStringLiteral("imageDisplay"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageDisplay->sizePolicy().hasHeightForWidth());
        imageDisplay->setSizePolicy(sizePolicy);
        imageDisplay->setFrameShape(QFrame::NoFrame);
        imageDisplay->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(imageDisplay);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        info = new QLabel(RenderPreview);
        info->setObjectName(QStringLiteral("info"));

        horizontalLayout->addWidget(info);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RenderPreview);

        QMetaObject::connectSlotsByName(RenderPreview);
    } // setupUi

    void retranslateUi(QWidget *RenderPreview)
    {
        RenderPreview->setWindowTitle(QApplication::translate("RenderPreview", "Render preview", 0));
        info->setText(QApplication::translate("RenderPreview", "This is an information message.", 0));
    } // retranslateUi

};

namespace Ui {
    class RenderPreview: public Ui_RenderPreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDERPREVIEW_H
