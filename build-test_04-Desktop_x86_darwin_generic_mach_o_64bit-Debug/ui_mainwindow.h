/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
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
    QAction *actionsave;
    QAction *actionnew1;
    QAction *actionnew2;
    QAction *actionnew3;
    QAction *actionnew4;
    QAction *actionnew5;
    QAction *actionnew6;
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuopen;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(473, 298);
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        actionnew1 = new QAction(MainWindow);
        actionnew1->setObjectName(QString::fromUtf8("actionnew1"));
        actionnew2 = new QAction(MainWindow);
        actionnew2->setObjectName(QString::fromUtf8("actionnew2"));
        actionnew3 = new QAction(MainWindow);
        actionnew3->setObjectName(QString::fromUtf8("actionnew3"));
        actionnew4 = new QAction(MainWindow);
        actionnew4->setObjectName(QString::fromUtf8("actionnew4"));
        actionnew5 = new QAction(MainWindow);
        actionnew5->setObjectName(QString::fromUtf8("actionnew5"));
        actionnew6 = new QAction(MainWindow);
        actionnew6->setObjectName(QString::fromUtf8("actionnew6"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 473, 21));
        menubar->setNativeMenuBar(false);
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuopen = new QMenu(menu);
        menuopen->setObjectName(QString::fromUtf8("menuopen"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(menuopen->menuAction());
        menu->addAction(actionsave);
        menu->addSeparator();
        menu->addSeparator();
        menuopen->addAction(actionnew1);
        menuopen->addAction(actionnew2);
        menuopen->addAction(actionnew3);
        menuopen->addAction(actionnew4);
        menuopen->addAction(actionnew5);
        menuopen->addAction(actionnew6);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        actionnew1->setText(QCoreApplication::translate("MainWindow", "new1", nullptr));
        actionnew2->setText(QCoreApplication::translate("MainWindow", "new2", nullptr));
        actionnew3->setText(QCoreApplication::translate("MainWindow", "new3", nullptr));
        actionnew4->setText(QCoreApplication::translate("MainWindow", "new4", nullptr));
        actionnew5->setText(QCoreApplication::translate("MainWindow", "new5", nullptr));
        actionnew6->setText(QCoreApplication::translate("MainWindow", "new6", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Label", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menuopen->setTitle(QCoreApplication::translate("MainWindow", "open", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
