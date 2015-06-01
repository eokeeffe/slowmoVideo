/********************************************************************************
** Form generated from reading UI file 'renderingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDERINGDIALOG_H
#define UI_RENDERINGDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RenderingDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioFullProject;
    QRadioButton *radioTagSection;
    QRadioButton *radioSection;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *cbStartTag;
    QLineEdit *timeStart;
    QLabel *lblcTo;
    QLineEdit *timeEnd;
    QComboBox *cbEndTag;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_11;
    QLabel *sectionMessage;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QComboBox *cbFps;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *cbSize;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QComboBox *cbInterpolation;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QSpacerItem *verticalSpacer;
    QWidget *tabWidgetPage2;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QDoubleSpinBox *lambda;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabWidgetPage3;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QRadioButton *radioBlurStacking;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpinBox *maxSamples;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_8;
    QSpinBox *slowmoSamples;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *radioBlurConvolution;
    QRadioButton *radioBlurNearest;
    QSpacerItem *verticalSpacer_4;
    QWidget *tabWidgetPage4;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QRadioButton *radioVideo;
    QRadioButton *radioImages;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupImages;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QGridLayout *gridLayout;
    QLabel *lblcOutputDir;
    QLineEdit *imagesOutputDir;
    QPushButton *bImagesBrowseDir;
    QLabel *lblcFilenamePattern;
    QLineEdit *imagesFilenamePattern;
    QGroupBox *groupVideo;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QGridLayout *gridLayout_2;
    QLabel *lblcOutputFile;
    QLineEdit *videoOutputFile;
    QPushButton *bBrowseVideoOutputFile;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *use_qt;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLineEdit *vcodec;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *bSave;
    QPushButton *bAbort;
    QPushButton *bOk;

    void setupUi(QDialog *RenderingDialog)
    {
        if (RenderingDialog->objectName().isEmpty())
            RenderingDialog->setObjectName(QStringLiteral("RenderingDialog"));
        RenderingDialog->resize(719, 544);
        verticalLayout_2 = new QVBoxLayout(RenderingDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget = new QTabWidget(RenderingDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QStringLiteral("tabWidgetPage1"));
        verticalLayout_8 = new QVBoxLayout(tabWidgetPage1);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioFullProject = new QRadioButton(tabWidgetPage1);
        radioFullProject->setObjectName(QStringLiteral("radioFullProject"));
        radioFullProject->setChecked(true);

        horizontalLayout->addWidget(radioFullProject);

        radioTagSection = new QRadioButton(tabWidgetPage1);
        radioTagSection->setObjectName(QStringLiteral("radioTagSection"));

        horizontalLayout->addWidget(radioTagSection);

        radioSection = new QRadioButton(tabWidgetPage1);
        radioSection->setObjectName(QStringLiteral("radioSection"));

        horizontalLayout->addWidget(radioSection);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        cbStartTag = new QComboBox(tabWidgetPage1);
        cbStartTag->setObjectName(QStringLiteral("cbStartTag"));

        horizontalLayout->addWidget(cbStartTag);

        timeStart = new QLineEdit(tabWidgetPage1);
        timeStart->setObjectName(QStringLiteral("timeStart"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(timeStart->sizePolicy().hasHeightForWidth());
        timeStart->setSizePolicy(sizePolicy);
        timeStart->setBaseSize(QSize(100, 0));
        timeStart->setMaxLength(16);

        horizontalLayout->addWidget(timeStart);

        lblcTo = new QLabel(tabWidgetPage1);
        lblcTo->setObjectName(QStringLiteral("lblcTo"));

        horizontalLayout->addWidget(lblcTo);

        timeEnd = new QLineEdit(tabWidgetPage1);
        timeEnd->setObjectName(QStringLiteral("timeEnd"));
        sizePolicy.setHeightForWidth(timeEnd->sizePolicy().hasHeightForWidth());
        timeEnd->setSizePolicy(sizePolicy);
        timeEnd->setBaseSize(QSize(100, 0));
        timeEnd->setMaxLength(16);

        horizontalLayout->addWidget(timeEnd);

        cbEndTag = new QComboBox(tabWidgetPage1);
        cbEndTag->setObjectName(QStringLiteral("cbEndTag"));

        horizontalLayout->addWidget(cbEndTag);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_8->addLayout(horizontalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_11 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        sectionMessage = new QLabel(tabWidgetPage1);
        sectionMessage->setObjectName(QStringLiteral("sectionMessage"));
        sectionMessage->setWordWrap(true);

        horizontalLayout_8->addWidget(sectionMessage);


        verticalLayout_8->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(tabWidgetPage1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        cbFps = new QComboBox(tabWidgetPage1);
        cbFps->insertItems(0, QStringList()
         << QStringLiteral("23.976")
         << QStringLiteral("24")
         << QStringLiteral("25")
         << QStringLiteral("29.976")
         << QStringLiteral("30")
         << QStringLiteral("50")
         << QStringLiteral("60")
         << QStringLiteral("72")
        );
        cbFps->setObjectName(QStringLiteral("cbFps"));
        sizePolicy.setHeightForWidth(cbFps->sizePolicy().hasHeightForWidth());
        cbFps->setSizePolicy(sizePolicy);
        cbFps->setMinimumSize(QSize(100, 0));
        cbFps->setBaseSize(QSize(100, 0));
        cbFps->setEditable(true);

        horizontalLayout_5->addWidget(cbFps);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(tabWidgetPage1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        cbSize = new QComboBox(tabWidgetPage1);
        cbSize->setObjectName(QStringLiteral("cbSize"));

        horizontalLayout_6->addWidget(cbSize);

        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        label_4 = new QLabel(tabWidgetPage1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        cbInterpolation = new QComboBox(tabWidgetPage1);
        cbInterpolation->setObjectName(QStringLiteral("cbInterpolation"));

        horizontalLayout_6->addWidget(cbInterpolation);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 8, -1, -1);
        label_13 = new QLabel(tabWidgetPage1);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setWordWrap(true);

        horizontalLayout_9->addWidget(label_13);


        verticalLayout_8->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        tabWidget->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QStringLiteral("tabWidgetPage2"));
        verticalLayout_9 = new QVBoxLayout(tabWidgetPage2);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        groupBox_3 = new QGroupBox(tabWidgetPage2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_7->addWidget(label_12);

        lambda = new QDoubleSpinBox(groupBox_3);
        lambda->setObjectName(QStringLiteral("lambda"));
        lambda->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lambda->setMinimum(5);
        lambda->setMaximum(50);
        lambda->setSingleStep(1);
        lambda->setValue(20);

        horizontalLayout_7->addWidget(lambda);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setWordWrap(true);

        horizontalLayout_7->addWidget(label_11);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 8, -1, -1);
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setWordWrap(true);

        horizontalLayout_10->addWidget(label_14);


        verticalLayout_6->addLayout(horizontalLayout_10);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);


        verticalLayout_9->addWidget(groupBox_3);

        tabWidget->addTab(tabWidgetPage2, QString());
        tabWidgetPage3 = new QWidget();
        tabWidgetPage3->setObjectName(QStringLiteral("tabWidgetPage3"));
        verticalLayout_10 = new QVBoxLayout(tabWidgetPage3);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBox_2 = new QGroupBox(tabWidgetPage3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setWordWrap(true);

        verticalLayout_5->addWidget(label_9);

        radioBlurStacking = new QRadioButton(groupBox_2);
        radioBlurStacking->setObjectName(QStringLiteral("radioBlurStacking"));

        verticalLayout_5->addWidget(radioBlurStacking);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        maxSamples = new QSpinBox(groupBox_2);
        maxSamples->setObjectName(QStringLiteral("maxSamples"));
        maxSamples->setMinimum(1);
        maxSamples->setValue(64);

        horizontalLayout_2->addWidget(maxSamples);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        slowmoSamples = new QSpinBox(groupBox_2);
        slowmoSamples->setObjectName(QStringLiteral("slowmoSamples"));
        slowmoSamples->setMinimum(1);
        slowmoSamples->setValue(16);

        horizontalLayout_2->addWidget(slowmoSamples);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout_5->addLayout(horizontalLayout_2);

        radioBlurConvolution = new QRadioButton(groupBox_2);
        radioBlurConvolution->setObjectName(QStringLiteral("radioBlurConvolution"));

        verticalLayout_5->addWidget(radioBlurConvolution);

        radioBlurNearest = new QRadioButton(groupBox_2);
        radioBlurNearest->setObjectName(QStringLiteral("radioBlurNearest"));

        verticalLayout_5->addWidget(radioBlurNearest);


        verticalLayout_10->addWidget(groupBox_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        tabWidget->addTab(tabWidgetPage3, QString());
        tabWidgetPage4 = new QWidget();
        tabWidgetPage4->setObjectName(QStringLiteral("tabWidgetPage4"));
        verticalLayout_11 = new QVBoxLayout(tabWidgetPage4);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(tabWidgetPage4);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        radioVideo = new QRadioButton(tabWidgetPage4);
        radioVideo->setObjectName(QStringLiteral("radioVideo"));
        radioVideo->setEnabled(true);

        horizontalLayout_3->addWidget(radioVideo);

        radioImages = new QRadioButton(tabWidgetPage4);
        radioImages->setObjectName(QStringLiteral("radioImages"));
        radioImages->setChecked(true);

        horizontalLayout_3->addWidget(radioImages);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_11->addLayout(horizontalLayout_3);

        groupImages = new QGroupBox(tabWidgetPage4);
        groupImages->setObjectName(QStringLiteral("groupImages"));
        verticalLayout = new QVBoxLayout(groupImages);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_10 = new QLabel(groupImages);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblcOutputDir = new QLabel(groupImages);
        lblcOutputDir->setObjectName(QStringLiteral("lblcOutputDir"));

        gridLayout->addWidget(lblcOutputDir, 0, 0, 1, 1);

        imagesOutputDir = new QLineEdit(groupImages);
        imagesOutputDir->setObjectName(QStringLiteral("imagesOutputDir"));

        gridLayout->addWidget(imagesOutputDir, 0, 1, 1, 1);

        bImagesBrowseDir = new QPushButton(groupImages);
        bImagesBrowseDir->setObjectName(QStringLiteral("bImagesBrowseDir"));

        gridLayout->addWidget(bImagesBrowseDir, 0, 2, 1, 1);

        lblcFilenamePattern = new QLabel(groupImages);
        lblcFilenamePattern->setObjectName(QStringLiteral("lblcFilenamePattern"));

        gridLayout->addWidget(lblcFilenamePattern, 1, 0, 1, 1);

        imagesFilenamePattern = new QLineEdit(groupImages);
        imagesFilenamePattern->setObjectName(QStringLiteral("imagesFilenamePattern"));

        gridLayout->addWidget(imagesFilenamePattern, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_11->addWidget(groupImages);

        groupVideo = new QGroupBox(tabWidgetPage4);
        groupVideo->setObjectName(QStringLiteral("groupVideo"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupVideo->sizePolicy().hasHeightForWidth());
        groupVideo->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(groupVideo);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(groupVideo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setWordWrap(true);

        verticalLayout_3->addWidget(label_7);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lblcOutputFile = new QLabel(groupVideo);
        lblcOutputFile->setObjectName(QStringLiteral("lblcOutputFile"));

        gridLayout_2->addWidget(lblcOutputFile, 0, 0, 1, 1);

        videoOutputFile = new QLineEdit(groupVideo);
        videoOutputFile->setObjectName(QStringLiteral("videoOutputFile"));

        gridLayout_2->addWidget(videoOutputFile, 0, 1, 1, 1);

        bBrowseVideoOutputFile = new QPushButton(groupVideo);
        bBrowseVideoOutputFile->setObjectName(QStringLiteral("bBrowseVideoOutputFile"));

        gridLayout_2->addWidget(bBrowseVideoOutputFile, 0, 2, 1, 1);

        groupBox = new QGroupBox(groupVideo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        use_qt = new QCheckBox(groupBox);
        use_qt->setObjectName(QStringLiteral("use_qt"));
        use_qt->setChecked(true);

        verticalLayout_4->addWidget(use_qt);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setText(QStringLiteral("vcodec"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        vcodec = new QLineEdit(groupBox);
        vcodec->setObjectName(QStringLiteral("vcodec"));

        gridLayout_3->addWidget(vcodec, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 3);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout_11->addWidget(groupVideo);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_5);

        tabWidget->addTab(tabWidgetPage4, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        bSave = new QPushButton(RenderingDialog);
        bSave->setObjectName(QStringLiteral("bSave"));

        horizontalLayout_4->addWidget(bSave);

        bAbort = new QPushButton(RenderingDialog);
        bAbort->setObjectName(QStringLiteral("bAbort"));

        horizontalLayout_4->addWidget(bAbort);

        bOk = new QPushButton(RenderingDialog);
        bOk->setObjectName(QStringLiteral("bOk"));

        horizontalLayout_4->addWidget(bOk);


        verticalLayout_2->addLayout(horizontalLayout_4);

        QWidget::setTabOrder(radioFullProject, cbFps);
        QWidget::setTabOrder(cbFps, cbSize);
        QWidget::setTabOrder(cbSize, cbInterpolation);
        QWidget::setTabOrder(cbInterpolation, radioVideo);
        QWidget::setTabOrder(radioVideo, radioImages);
        QWidget::setTabOrder(radioImages, imagesOutputDir);
        QWidget::setTabOrder(imagesOutputDir, bImagesBrowseDir);
        QWidget::setTabOrder(bImagesBrowseDir, imagesFilenamePattern);
        QWidget::setTabOrder(imagesFilenamePattern, videoOutputFile);
        QWidget::setTabOrder(videoOutputFile, bBrowseVideoOutputFile);
        QWidget::setTabOrder(bBrowseVideoOutputFile, vcodec);
        QWidget::setTabOrder(vcodec, bAbort);
        QWidget::setTabOrder(bAbort, bOk);

        retranslateUi(RenderingDialog);

        tabWidget->setCurrentIndex(3);
        cbFps->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RenderingDialog);
    } // setupUi

    void retranslateUi(QDialog *RenderingDialog)
    {
        RenderingDialog->setWindowTitle(QApplication::translate("RenderingDialog", "Rendering settings", 0));
#ifndef QT_NO_ACCESSIBILITY
        tabWidgetPage1->setAccessibleName(QApplication::translate("RenderingDialog", "a", 0));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        tabWidgetPage1->setAccessibleDescription(QApplication::translate("RenderingDialog", "a", 0));
#endif // QT_NO_ACCESSIBILITY
        radioFullProject->setText(QApplication::translate("RenderingDialog", "Full Project", 0));
        radioTagSection->setText(QApplication::translate("RenderingDialog", "Tag section", 0));
        radioSection->setText(QApplication::translate("RenderingDialog", "Custom section", 0));
        lblcTo->setText(QApplication::translate("RenderingDialog", "to", 0));
        sectionMessage->setText(QString());
        label_2->setText(QApplication::translate("RenderingDialog", "Frames per second:", 0));
        label_3->setText(QApplication::translate("RenderingDialog", "Size:", 0));
        label_4->setText(QApplication::translate("RenderingDialog", "Interpolation:", 0));
        label_13->setText(QApplication::translate("RenderingDialog", "For two frames A and B, the two-way interpolations calculate both the flows A\342\206\222B and B\342\206\222A, which leads to smoother transitions between them. Forward interpolations only calculate A\342\206\222B; Twice as fast, but usually less smooth.", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QApplication::translate("RenderingDialog", "Rendering settings", 0));
        groupBox_3->setTitle(QApplication::translate("RenderingDialog", "Optical flow", 0));
        label_12->setText(QApplication::translate("RenderingDialog", "buildFlow lambda", 0));
        label_11->setText(QApplication::translate("RenderingDialog", "Use a higher value for high-quality footage and larger images.", 0));
        label_14->setText(QApplication::translate("RenderingDialog", "The lambda is only used with the GPU based Optical Flow algorithm. There is no general rule which value is best, so it is usually a good idea to render a short part with a low (5) and a high (50) lambda to see the differences, and then try to find the best value between.", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QApplication::translate("RenderingDialog", "Optical Flow", 0));
        groupBox_2->setTitle(QApplication::translate("RenderingDialog", "Motion blur", 0));
        label_9->setText(QApplication::translate("RenderingDialog", "Motion blur will only be applied for segments on which it is enabled.", 0));
        radioBlurStacking->setText(QApplication::translate("RenderingDialog", "Stacking blur (Uses more disk space, but is faster for repeated rendering.)", 0));
        label_6->setText(QApplication::translate("RenderingDialog", "Maximum samples", 0));
        label_8->setText(QApplication::translate("RenderingDialog", "Samples for slow motion", 0));
        radioBlurConvolution->setText(QApplication::translate("RenderingDialog", "Convolution blur (Smoother than stacking, usually the better choice.)", 0));
        radioBlurNearest->setText(QApplication::translate("RenderingDialog", "Nearest (no blurring)", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage3), QApplication::translate("RenderingDialog", "Motion Blur", 0));
        label->setText(QApplication::translate("RenderingDialog", "Target:", 0));
        radioVideo->setText(QApplication::translate("RenderingDialog", "Video", 0));
        radioImages->setText(QApplication::translate("RenderingDialog", "Images", 0));
        groupImages->setTitle(QApplication::translate("RenderingDialog", "Images", 0));
        label_10->setText(QApplication::translate("RenderingDialog", "The %1 in the filename pattern is mandatory and will be replaced by the frame number.", 0));
        lblcOutputDir->setText(QApplication::translate("RenderingDialog", "Output directory", 0));
        bImagesBrowseDir->setText(QApplication::translate("RenderingDialog", "Browse", 0));
        lblcFilenamePattern->setText(QApplication::translate("RenderingDialog", "Filename pattern", 0));
#ifndef QT_NO_TOOLTIP
        imagesFilenamePattern->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        imagesFilenamePattern->setText(QApplication::translate("RenderingDialog", "rendered-%1.jpg", 0));
        groupVideo->setTitle(QApplication::translate("RenderingDialog", "Video", 0));
        label_7->setText(QApplication::translate("RenderingDialog", "Videos will be encoded with ffmpeg. If additional arguments are left empty, defaults will be used. The video format is determined by ffmpeg according to the file suffix.", 0));
        lblcOutputFile->setText(QApplication::translate("RenderingDialog", "Output file", 0));
        bBrowseVideoOutputFile->setText(QApplication::translate("RenderingDialog", "Browse", 0));
        groupBox->setTitle(QApplication::translate("RenderingDialog", "Optional arguments", 0));
        use_qt->setText(QApplication::translate("RenderingDialog", "Use Quicktime", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage4), QApplication::translate("RenderingDialog", "Output", 0));
#ifndef QT_NO_TOOLTIP
        bSave->setToolTip(QApplication::translate("RenderingDialog", "Will *not* save the project!", 0));
#endif // QT_NO_TOOLTIP
        bSave->setText(QApplication::translate("RenderingDialog", "&Save settings", 0));
        bAbort->setText(QApplication::translate("RenderingDialog", "&Abort", 0));
        bOk->setText(QApplication::translate("RenderingDialog", "&Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class RenderingDialog: public Ui_RenderingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDERINGDIALOG_H
