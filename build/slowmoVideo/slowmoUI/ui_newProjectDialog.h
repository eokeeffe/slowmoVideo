/********************************************************************************
** Form generated from reading UI file 'newProjectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECTDIALOG_H
#define UI_NEWPROJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_NewProjectDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *projectDir;
    QPushButton *browseProjectDir;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bAbort;
    QPushButton *bOk;
    QCheckBox *cbDirectoryCreated;
    QGroupBox *groupVideo;
    QGridLayout *gridLayout_2;
    QLineEdit *inputVideo;
    QPushButton *browseInputVideo;
    QLabel *lblcVideoInfo;
    QPlainTextEdit *txtVideoInfo;
    QLabel *lblcInputVideo;
    QGroupBox *groupImages;
    QGridLayout *gridLayout_3;
    QLabel *lblcInputImages;
    QPushButton *browseInputImages;
    QLabel *lblcImageInfo;
    QListWidget *inputImages;
    QLineEdit *txtImageInfo;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioVideo;
    QRadioButton *radioImages;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *lblcProjectDir;
    QLabel *lblcProjectFilename;
    QLineEdit *projectFilename;
    QLabel *lblcFilenameExtension;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *NewProjectDialog)
    {
        if (NewProjectDialog->objectName().isEmpty())
            NewProjectDialog->setObjectName(QStringLiteral("NewProjectDialog"));
        NewProjectDialog->resize(698, 697);
        gridLayout = new QGridLayout(NewProjectDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        projectDir = new QLineEdit(NewProjectDialog);
        projectDir->setObjectName(QStringLiteral("projectDir"));

        gridLayout->addWidget(projectDir, 2, 0, 1, 1);

        browseProjectDir = new QPushButton(NewProjectDialog);
        browseProjectDir->setObjectName(QStringLiteral("browseProjectDir"));

        gridLayout->addWidget(browseProjectDir, 2, 1, 1, 5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bAbort = new QPushButton(NewProjectDialog);
        bAbort->setObjectName(QStringLiteral("bAbort"));

        horizontalLayout->addWidget(bAbort);

        bOk = new QPushButton(NewProjectDialog);
        bOk->setObjectName(QStringLiteral("bOk"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bOk->sizePolicy().hasHeightForWidth());
        bOk->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(bOk);


        gridLayout->addLayout(horizontalLayout, 16, 0, 1, 7);

        cbDirectoryCreated = new QCheckBox(NewProjectDialog);
        cbDirectoryCreated->setObjectName(QStringLiteral("cbDirectoryCreated"));
        cbDirectoryCreated->setEnabled(false);
        cbDirectoryCreated->setCheckable(true);
        cbDirectoryCreated->setChecked(false);

        gridLayout->addWidget(cbDirectoryCreated, 3, 0, 1, 6);

        groupVideo = new QGroupBox(NewProjectDialog);
        groupVideo->setObjectName(QStringLiteral("groupVideo"));
        gridLayout_2 = new QGridLayout(groupVideo);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        inputVideo = new QLineEdit(groupVideo);
        inputVideo->setObjectName(QStringLiteral("inputVideo"));

        gridLayout_2->addWidget(inputVideo, 1, 0, 1, 1);

        browseInputVideo = new QPushButton(groupVideo);
        browseInputVideo->setObjectName(QStringLiteral("browseInputVideo"));

        gridLayout_2->addWidget(browseInputVideo, 1, 1, 1, 1);

        lblcVideoInfo = new QLabel(groupVideo);
        lblcVideoInfo->setObjectName(QStringLiteral("lblcVideoInfo"));

        gridLayout_2->addWidget(lblcVideoInfo, 2, 0, 1, 1);

        txtVideoInfo = new QPlainTextEdit(groupVideo);
        txtVideoInfo->setObjectName(QStringLiteral("txtVideoInfo"));
        txtVideoInfo->setBaseSize(QSize(600, 0));
        txtVideoInfo->setFocusPolicy(Qt::NoFocus);
        txtVideoInfo->setReadOnly(true);

        gridLayout_2->addWidget(txtVideoInfo, 3, 0, 1, 1);

        lblcInputVideo = new QLabel(groupVideo);
        lblcInputVideo->setObjectName(QStringLiteral("lblcInputVideo"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblcInputVideo->setFont(font);

        gridLayout_2->addWidget(lblcInputVideo, 0, 0, 1, 1);


        gridLayout->addWidget(groupVideo, 11, 0, 2, 7);

        groupImages = new QGroupBox(NewProjectDialog);
        groupImages->setObjectName(QStringLiteral("groupImages"));
        gridLayout_3 = new QGridLayout(groupImages);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lblcInputImages = new QLabel(groupImages);
        lblcInputImages->setObjectName(QStringLiteral("lblcInputImages"));
        lblcInputImages->setFont(font);

        gridLayout_3->addWidget(lblcInputImages, 0, 0, 1, 1);

        browseInputImages = new QPushButton(groupImages);
        browseInputImages->setObjectName(QStringLiteral("browseInputImages"));

        gridLayout_3->addWidget(browseInputImages, 1, 1, 1, 1);

        lblcImageInfo = new QLabel(groupImages);
        lblcImageInfo->setObjectName(QStringLiteral("lblcImageInfo"));

        gridLayout_3->addWidget(lblcImageInfo, 3, 0, 1, 1);

        inputImages = new QListWidget(groupImages);
        inputImages->setObjectName(QStringLiteral("inputImages"));

        gridLayout_3->addWidget(inputImages, 1, 0, 1, 1);

        txtImageInfo = new QLineEdit(groupImages);
        txtImageInfo->setObjectName(QStringLiteral("txtImageInfo"));
        txtImageInfo->setReadOnly(true);

        gridLayout_3->addWidget(txtImageInfo, 4, 0, 1, 1);


        gridLayout->addWidget(groupImages, 13, 0, 1, 7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioVideo = new QRadioButton(NewProjectDialog);
        radioVideo->setObjectName(QStringLiteral("radioVideo"));

        horizontalLayout_2->addWidget(radioVideo);

        radioImages = new QRadioButton(NewProjectDialog);
        radioImages->setObjectName(QStringLiteral("radioImages"));

        horizontalLayout_2->addWidget(radioImages);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 8, 0, 1, 7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 15, 0, 1, 7);

        lblcProjectDir = new QLabel(NewProjectDialog);
        lblcProjectDir->setObjectName(QStringLiteral("lblcProjectDir"));
        lblcProjectDir->setFont(font);

        gridLayout->addWidget(lblcProjectDir, 0, 0, 1, 1);

        lblcProjectFilename = new QLabel(NewProjectDialog);
        lblcProjectFilename->setObjectName(QStringLiteral("lblcProjectFilename"));
        lblcProjectFilename->setFont(font);

        gridLayout->addWidget(lblcProjectFilename, 4, 0, 1, 1);

        projectFilename = new QLineEdit(NewProjectDialog);
        projectFilename->setObjectName(QStringLiteral("projectFilename"));

        gridLayout->addWidget(projectFilename, 6, 0, 1, 1);

        lblcFilenameExtension = new QLabel(NewProjectDialog);
        lblcFilenameExtension->setObjectName(QStringLiteral("lblcFilenameExtension"));

        gridLayout->addWidget(lblcFilenameExtension, 6, 1, 1, 5);

        label = new QLabel(NewProjectDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 0, 1, 6);

        label_2 = new QLabel(NewProjectDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 5, 0, 1, 6);

        QWidget::setTabOrder(projectDir, browseProjectDir);
        QWidget::setTabOrder(browseProjectDir, cbDirectoryCreated);
        QWidget::setTabOrder(cbDirectoryCreated, projectFilename);
        QWidget::setTabOrder(projectFilename, radioVideo);
        QWidget::setTabOrder(radioVideo, radioImages);
        QWidget::setTabOrder(radioImages, inputVideo);
        QWidget::setTabOrder(inputVideo, browseInputVideo);
        QWidget::setTabOrder(browseInputVideo, inputImages);
        QWidget::setTabOrder(inputImages, browseInputImages);
        QWidget::setTabOrder(browseInputImages, txtImageInfo);
        QWidget::setTabOrder(txtImageInfo, bAbort);
        QWidget::setTabOrder(bAbort, bOk);

        retranslateUi(NewProjectDialog);

        QMetaObject::connectSlotsByName(NewProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *NewProjectDialog)
    {
        NewProjectDialog->setWindowTitle(QApplication::translate("NewProjectDialog", "New slowmo Project", 0));
        browseProjectDir->setText(QApplication::translate("NewProjectDialog", "Browse", 0));
        bAbort->setText(QApplication::translate("NewProjectDialog", "Abort", 0));
        bOk->setText(QApplication::translate("NewProjectDialog", "Ok", 0));
        cbDirectoryCreated->setText(QApplication::translate("NewProjectDialog", "Directory will be created", 0));
        groupVideo->setTitle(QApplication::translate("NewProjectDialog", "Video source", 0));
        browseInputVideo->setText(QApplication::translate("NewProjectDialog", "Browse", 0));
        lblcVideoInfo->setText(QApplication::translate("NewProjectDialog", "Video information:", 0));
        lblcInputVideo->setText(QApplication::translate("NewProjectDialog", "Input video", 0));
        groupImages->setTitle(QApplication::translate("NewProjectDialog", "Image source", 0));
        lblcInputImages->setText(QApplication::translate("NewProjectDialog", "Input images", 0));
        browseInputImages->setText(QApplication::translate("NewProjectDialog", "Browse", 0));
        lblcImageInfo->setText(QApplication::translate("NewProjectDialog", "Images information:", 0));
        radioVideo->setText(QApplication::translate("NewProjectDialog", "Video file", 0));
        radioImages->setText(QApplication::translate("NewProjectDialog", "Images", 0));
        lblcProjectDir->setText(QApplication::translate("NewProjectDialog", "Project Directory", 0));
        lblcProjectFilename->setText(QApplication::translate("NewProjectDialog", "Project Filename", 0));
        lblcFilenameExtension->setText(QApplication::translate("NewProjectDialog", ".sVproj", 0));
        label->setText(QApplication::translate("NewProjectDialog", "You should preferredly use an empty directory here. Each project needs its own project directory.", 0));
        label_2->setText(QApplication::translate("NewProjectDialog", "The project will be saved to this file right after confirming this dialog.", 0));
    } // retranslateUi

};

namespace Ui {
    class NewProjectDialog: public Ui_NewProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECTDIALOG_H
