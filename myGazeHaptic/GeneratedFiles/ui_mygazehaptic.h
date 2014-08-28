/********************************************************************************
** Form generated from reading UI file 'mygazehaptic.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYGAZEHAPTIC_H
#define UI_MYGAZEHAPTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myGazeHapticClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myGazeHapticClass)
    {
        if (myGazeHapticClass->objectName().isEmpty())
            myGazeHapticClass->setObjectName(QStringLiteral("myGazeHapticClass"));
        myGazeHapticClass->resize(600, 400);
        centralWidget = new QWidget(myGazeHapticClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 90, 75, 23));
        myGazeHapticClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myGazeHapticClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        myGazeHapticClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myGazeHapticClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        myGazeHapticClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(myGazeHapticClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        myGazeHapticClass->setStatusBar(statusBar);

        retranslateUi(myGazeHapticClass);

        QMetaObject::connectSlotsByName(myGazeHapticClass);
    } // setupUi

    void retranslateUi(QMainWindow *myGazeHapticClass)
    {
        myGazeHapticClass->setWindowTitle(QApplication::translate("myGazeHapticClass", "myGazeHaptic", 0));
        pushButton->setText(QApplication::translate("myGazeHapticClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class myGazeHapticClass: public Ui_myGazeHapticClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYGAZEHAPTIC_H
