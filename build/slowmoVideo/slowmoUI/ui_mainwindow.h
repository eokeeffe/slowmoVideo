/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRender;
    QAction *actionPreferences;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionOpen;
    QAction *actionShortcuts;
    QAction *actionAbout;
    QAction *actionQuit;
    QAction *actionRenderPreview;
    QAction *actionExamineFlow;
    QAction *actionNew;
    QAction *actionProjectPreferences;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionEdit_Flow;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuSlowmoVideo_UI;
    QMenu *menuHelp;
    QMenu *menuView;
    QMenu *menuProject;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 700);
        actionRender = new QAction(MainWindow);
        actionRender->setObjectName(QStringLiteral("actionRender"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionPreferences->setMenuRole(QAction::PreferencesRole);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionShortcuts = new QAction(MainWindow);
        actionShortcuts->setObjectName(QStringLiteral("actionShortcuts"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout->setMenuRole(QAction::AboutRole);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionQuit->setMenuRole(QAction::QuitRole);
        actionRenderPreview = new QAction(MainWindow);
        actionRenderPreview->setObjectName(QStringLiteral("actionRenderPreview"));
        actionExamineFlow = new QAction(MainWindow);
        actionExamineFlow->setObjectName(QStringLiteral("actionExamineFlow"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionProjectPreferences = new QAction(MainWindow);
        actionProjectPreferences->setObjectName(QStringLiteral("actionProjectPreferences"));
        actionProjectPreferences->setMenuRole(QAction::TextHeuristicRole);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        actionEdit_Flow = new QAction(MainWindow);
        actionEdit_Flow->setObjectName(QStringLiteral("actionEdit_Flow"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 22));
        menuSlowmoVideo_UI = new QMenu(menuBar);
        menuSlowmoVideo_UI->setObjectName(QStringLiteral("menuSlowmoVideo_UI"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuProject = new QMenu(menuBar);
        menuProject->setObjectName(QStringLiteral("menuProject"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuSlowmoVideo_UI->menuAction());
        menuBar->addAction(menuProject->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuSlowmoVideo_UI->addAction(actionNew);
        menuSlowmoVideo_UI->addAction(actionOpen);
        menuSlowmoVideo_UI->addAction(actionSave);
        menuSlowmoVideo_UI->addAction(actionSave_as);
        menuSlowmoVideo_UI->addSeparator();
        menuSlowmoVideo_UI->addAction(actionRender);
        menuSlowmoVideo_UI->addAction(actionRenderPreview);
        menuSlowmoVideo_UI->addAction(actionExamineFlow);
        menuSlowmoVideo_UI->addSeparator();
        menuSlowmoVideo_UI->addAction(actionPreferences);
        menuSlowmoVideo_UI->addSeparator();
        menuSlowmoVideo_UI->addAction(actionQuit);
        menuSlowmoVideo_UI->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionShortcuts);
        menuView->addAction(actionZoomIn);
        menuView->addAction(actionZoomOut);
        menuView->addSeparator();
        menuView->addAction(actionEdit_Flow);
        menuProject->addAction(actionProjectPreferences);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "slowmoVideo UI", 0));
        actionRender->setText(QApplication::translate("MainWindow", "&Render", 0));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", 0));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", 0));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save &as \342\200\246", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open", 0));
        actionShortcuts->setText(QApplication::translate("MainWindow", "&Shortcuts", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0));
        actionRenderPreview->setText(QApplication::translate("MainWindow", "Render &preview", 0));
        actionExamineFlow->setText(QApplication::translate("MainWindow", "E&xamine flow", 0));
#ifndef QT_NO_TOOLTIP
        actionExamineFlow->setToolTip(QApplication::translate("MainWindow", "Examine flow at input frame", 0));
#endif // QT_NO_TOOLTIP
        actionNew->setText(QApplication::translate("MainWindow", "&New \342\200\246", 0));
        actionProjectPreferences->setText(QApplication::translate("MainWindow", "&Preferences", 0));
        actionZoomIn->setText(QApplication::translate("MainWindow", "Zoom &in", 0));
        actionZoomOut->setText(QApplication::translate("MainWindow", "Zoom &out", 0));
        actionEdit_Flow->setText(QApplication::translate("MainWindow", "Edit Optical Flow", 0));
#ifndef QT_NO_TOOLTIP
        actionEdit_Flow->setToolTip(QApplication::translate("MainWindow", "Edit Optical Flow", 0));
#endif // QT_NO_TOOLTIP
        menuSlowmoVideo_UI->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", 0));
        menuProject->setTitle(QApplication::translate("MainWindow", "&Project", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
