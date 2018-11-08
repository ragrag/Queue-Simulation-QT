/********************************************************************************
** Form generated from reading UI file 'charts.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTS_H
#define UI_CHARTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Charts
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Charts)
    {
        if (Charts->objectName().isEmpty())
            Charts->setObjectName(QStringLiteral("Charts"));
        Charts->resize(800, 600);
        menubar = new QMenuBar(Charts);
        menubar->setObjectName(QStringLiteral("menubar"));
        Charts->setMenuBar(menubar);
        centralwidget = new QWidget(Charts);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Charts->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Charts);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Charts->setStatusBar(statusbar);

        retranslateUi(Charts);

        QMetaObject::connectSlotsByName(Charts);
    } // setupUi

    void retranslateUi(QMainWindow *Charts)
    {
        Charts->setWindowTitle(QApplication::translate("Charts", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Charts: public Ui_Charts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTS_H
