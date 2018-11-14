/********************************************************************************
** Form generated from reading UI file 'runwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNWINDOW_H
#define UI_RUNWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_runWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *driveinLabel;
    QTableWidget *driveinTable;
    QLabel *insideLabel;
    QTableWidget *insideTable;
    QLabel *resultsLabel;
    QTableWidget *resultsTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *svcChartBtn;
    QPushButton *arrivalChartBtn;

    void setupUi(QMainWindow *runWindow)
    {
        if (runWindow->objectName().isEmpty())
            runWindow->setObjectName(QStringLiteral("runWindow"));
        runWindow->resize(1298, 860);
        centralwidget = new QWidget(runWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        driveinLabel = new QLabel(centralwidget);
        driveinLabel->setObjectName(QStringLiteral("driveinLabel"));
        driveinLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(driveinLabel);

        driveinTable = new QTableWidget(centralwidget);
        driveinTable->setObjectName(QStringLiteral("driveinTable"));

        verticalLayout->addWidget(driveinTable);

        insideLabel = new QLabel(centralwidget);
        insideLabel->setObjectName(QStringLiteral("insideLabel"));
        insideLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(insideLabel);

        insideTable = new QTableWidget(centralwidget);
        insideTable->setObjectName(QStringLiteral("insideTable"));

        verticalLayout->addWidget(insideTable);

        resultsLabel = new QLabel(centralwidget);
        resultsLabel->setObjectName(QStringLiteral("resultsLabel"));
        resultsLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(resultsLabel);

        resultsTable = new QTableWidget(centralwidget);
        resultsTable->setObjectName(QStringLiteral("resultsTable"));

        verticalLayout->addWidget(resultsTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        svcChartBtn = new QPushButton(centralwidget);
        svcChartBtn->setObjectName(QStringLiteral("svcChartBtn"));

        verticalLayout->addWidget(svcChartBtn);

        arrivalChartBtn = new QPushButton(centralwidget);
        arrivalChartBtn->setObjectName(QStringLiteral("arrivalChartBtn"));

        verticalLayout->addWidget(arrivalChartBtn);

        runWindow->setCentralWidget(centralwidget);

        retranslateUi(runWindow);

        QMetaObject::connectSlotsByName(runWindow);
    } // setupUi

    void retranslateUi(QMainWindow *runWindow)
    {
        runWindow->setWindowTitle(QApplication::translate("runWindow", "MainWindow", Q_NULLPTR));
        driveinLabel->setText(QApplication::translate("runWindow", "Drive in Queue", Q_NULLPTR));
        insideLabel->setText(QApplication::translate("runWindow", "Inside Queue", Q_NULLPTR));
        resultsLabel->setText(QApplication::translate("runWindow", "Results", Q_NULLPTR));
        svcChartBtn->setText(QApplication::translate("runWindow", "Service Times Line Chart", Q_NULLPTR));
        arrivalChartBtn->setText(QApplication::translate("runWindow", "Interarrival Times Line Chart", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class runWindow: public Ui_runWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNWINDOW_H
