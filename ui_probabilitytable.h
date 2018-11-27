/********************************************************************************
** Form generated from reading UI file 'probabilitytable.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROBABILITYTABLE_H
#define UI_PROBABILITYTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProbabilityTable
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *arrivalTable;
    QLabel *label;
    QTableWidget *serviceTable;
    QLabel *label_2;

    void setupUi(QMainWindow *ProbabilityTable)
    {
        if (ProbabilityTable->objectName().isEmpty())
            ProbabilityTable->setObjectName(QStringLiteral("ProbabilityTable"));
        ProbabilityTable->resize(800, 600);
        centralwidget = new QWidget(ProbabilityTable);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 30, 521, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        arrivalTable = new QTableWidget(verticalLayoutWidget);
        if (arrivalTable->columnCount() < 4)
            arrivalTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        arrivalTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        arrivalTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        arrivalTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        arrivalTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (arrivalTable->rowCount() < 6)
            arrivalTable->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        arrivalTable->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        arrivalTable->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        arrivalTable->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        arrivalTable->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        arrivalTable->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        arrivalTable->setVerticalHeaderItem(5, __qtablewidgetitem9);
        arrivalTable->setObjectName(QStringLiteral("arrivalTable"));
        arrivalTable->setRowCount(6);
        arrivalTable->horizontalHeader()->setVisible(true);
        arrivalTable->horizontalHeader()->setHighlightSections(true);
        arrivalTable->verticalHeader()->setVisible(false);
        arrivalTable->verticalHeader()->setHighlightSections(true);

        verticalLayout->addWidget(arrivalTable);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        serviceTable = new QTableWidget(verticalLayoutWidget);
        if (serviceTable->columnCount() < 4)
            serviceTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        serviceTable->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        serviceTable->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        serviceTable->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        serviceTable->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        if (serviceTable->rowCount() < 4)
            serviceTable->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        serviceTable->setVerticalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        serviceTable->setVerticalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        serviceTable->setVerticalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        serviceTable->setVerticalHeaderItem(3, __qtablewidgetitem17);
        serviceTable->setObjectName(QStringLiteral("serviceTable"));
        serviceTable->setRowCount(4);
        serviceTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(serviceTable);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        ProbabilityTable->setCentralWidget(centralwidget);

        retranslateUi(ProbabilityTable);

        QMetaObject::connectSlotsByName(ProbabilityTable);
    } // setupUi

    void retranslateUi(QMainWindow *ProbabilityTable)
    {
        ProbabilityTable->setWindowTitle(QApplication::translate("ProbabilityTable", "MainWindow", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = arrivalTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ProbabilityTable", "Interarrival Time", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = arrivalTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ProbabilityTable", "Probability", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = arrivalTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ProbabilityTable", "Cumulative", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = arrivalTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ProbabilityTable", "Range", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = arrivalTable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("ProbabilityTable", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = arrivalTable->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("ProbabilityTable", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = arrivalTable->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("ProbabilityTable", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = arrivalTable->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("ProbabilityTable", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = arrivalTable->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("ProbabilityTable", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = arrivalTable->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("ProbabilityTable", "New Row", Q_NULLPTR));
        label->setText(QApplication::translate("ProbabilityTable", "Theoretical Average: 2.51", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = serviceTable->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("ProbabilityTable", "Service Time", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = serviceTable->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("ProbabilityTable", "Probability", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = serviceTable->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("ProbabilityTable", "Cumulative", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = serviceTable->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("ProbabilityTable", "Range", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = serviceTable->verticalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("ProbabilityTable", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = serviceTable->verticalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("ProbabilityTable", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = serviceTable->verticalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("ProbabilityTable", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = serviceTable->verticalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("ProbabilityTable", "New Row", Q_NULLPTR));
        label_2->setText(QApplication::translate("ProbabilityTable", "Theoretical Average: 2.32", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProbabilityTable: public Ui_ProbabilityTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROBABILITYTABLE_H
