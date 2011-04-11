/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Apr 10 23:07:27 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLaser_Kontrol_a_QT_GUI_for_drawbot;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QCheckBox *checkBox;
    QMenuBar *menuBar;
    QMenu *menuLaser_Kontrol;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(400, 300);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setIconSize(QSize(50, 50));
        actionLaser_Kontrol_a_QT_GUI_for_drawbot = new QAction(MainWindow);
        actionLaser_Kontrol_a_QT_GUI_for_drawbot->setObjectName(QString::fromUtf8("actionLaser_Kontrol_a_QT_GUI_for_drawbot"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(140, 170, 91, 24));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 381, 131));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setEnabled(true);
        checkBox->setGeometry(QRect(140, 140, 95, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuLaser_Kontrol = new QMenu(menuBar);
        menuLaser_Kontrol->setObjectName(QString::fromUtf8("menuLaser_Kontrol"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuLaser_Kontrol->menuAction());
        menuLaser_Kontrol->addAction(actionLaser_Kontrol_a_QT_GUI_for_drawbot);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "laser Kontrol - Jeff Crowell", 0, QApplication::UnicodeUTF8));
        actionLaser_Kontrol_a_QT_GUI_for_drawbot->setText(QApplication::translate("MainWindow", "Laser Kontrol, a QT GUI for drawbot.", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "FIRE", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Caution: This software is _VERY_ experimental. \n"
"Only proceed if you know exactly what you are doing.\n"
"  \n"
"The laser is very powerful and dangerous. \n"
" Please wear eye protection, as we don't want your retinas to fry! \n"
"\n"
"\n"
"PRESS FIRE ONLY ONCE", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "Ready?", 0, QApplication::UnicodeUTF8));
        menuLaser_Kontrol->setTitle(QApplication::translate("MainWindow", "laser Kontrol", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
