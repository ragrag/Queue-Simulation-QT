/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QCheckBox *customRunsCheckbox;
    QTextEdit *customRunsText;
    QTextEdit *customJobsText;
    QPushButton *beginSimulationBtn;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *resultsLabel;
    QTableWidget *resultsTable;
    QPushButton *probabilityTableBtn;
    QPushButton *chartsBtn;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *runsLabel;
    QListWidget *runsList;
    QPushButton *runsBtn;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 644);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        customRunsCheckbox = new QCheckBox(centralWidget);
        customRunsCheckbox->setObjectName(QStringLiteral("customRunsCheckbox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customRunsCheckbox->sizePolicy().hasHeightForWidth());
        customRunsCheckbox->setSizePolicy(sizePolicy);
        customRunsCheckbox->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(customRunsCheckbox);

        customRunsText = new QTextEdit(centralWidget);
        customRunsText->setObjectName(QStringLiteral("customRunsText"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(customRunsText->sizePolicy().hasHeightForWidth());
        customRunsText->setSizePolicy(sizePolicy1);
        customRunsText->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(customRunsText);

        customJobsText = new QTextEdit(centralWidget);
        customJobsText->setObjectName(QStringLiteral("customJobsText"));
        sizePolicy1.setHeightForWidth(customJobsText->sizePolicy().hasHeightForWidth());
        customJobsText->setSizePolicy(sizePolicy1);
        customJobsText->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(customJobsText);


        verticalLayout_5->addLayout(horizontalLayout);

        beginSimulationBtn = new QPushButton(centralWidget);
        beginSimulationBtn->setObjectName(QStringLiteral("beginSimulationBtn"));

        verticalLayout_5->addWidget(beginSimulationBtn);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        resultsLabel = new QLabel(centralWidget);
        resultsLabel->setObjectName(QStringLiteral("resultsLabel"));
        resultsLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(resultsLabel);

        resultsTable = new QTableWidget(centralWidget);
        if (resultsTable->columnCount() < 1)
            resultsTable->setColumnCount(1);
        if (resultsTable->rowCount() < 15)
            resultsTable->setRowCount(15);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        resultsTable->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        resultsTable->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        resultsTable->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        resultsTable->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        resultsTable->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        resultsTable->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        resultsTable->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        resultsTable->setVerticalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        resultsTable->setVerticalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font1);
        resultsTable->setVerticalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font1);
        resultsTable->setVerticalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        resultsTable->setVerticalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        resultsTable->setVerticalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        resultsTable->setVerticalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        resultsTable->setVerticalHeaderItem(14, __qtablewidgetitem14);
        resultsTable->setObjectName(QStringLiteral("resultsTable"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(resultsTable->sizePolicy().hasHeightForWidth());
        resultsTable->setSizePolicy(sizePolicy2);
        resultsTable->setMaximumSize(QSize(500, 16777215));
        resultsTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        resultsTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        resultsTable->setShowGrid(true);
        resultsTable->setGridStyle(Qt::SolidLine);
        resultsTable->setWordWrap(true);
        resultsTable->setRowCount(15);
        resultsTable->setColumnCount(1);
        resultsTable->horizontalHeader()->setVisible(false);
        resultsTable->horizontalHeader()->setHighlightSections(true);

        verticalLayout->addWidget(resultsTable);

        probabilityTableBtn = new QPushButton(centralWidget);
        probabilityTableBtn->setObjectName(QStringLiteral("probabilityTableBtn"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(probabilityTableBtn->sizePolicy().hasHeightForWidth());
        probabilityTableBtn->setSizePolicy(sizePolicy3);
        probabilityTableBtn->setMaximumSize(QSize(300, 16777215));

        verticalLayout->addWidget(probabilityTableBtn);

        chartsBtn = new QPushButton(centralWidget);
        chartsBtn->setObjectName(QStringLiteral("chartsBtn"));
        sizePolicy3.setHeightForWidth(chartsBtn->sizePolicy().hasHeightForWidth());
        chartsBtn->setSizePolicy(sizePolicy3);
        chartsBtn->setMaximumSize(QSize(300, 16777215));

        verticalLayout->addWidget(chartsBtn);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        runsLabel = new QLabel(centralWidget);
        runsLabel->setObjectName(QStringLiteral("runsLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(runsLabel->sizePolicy().hasHeightForWidth());
        runsLabel->setSizePolicy(sizePolicy4);
        runsLabel->setMaximumSize(QSize(300, 16777215));
        runsLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(runsLabel);

        runsList = new QListWidget(centralWidget);
        runsList->setObjectName(QStringLiteral("runsList"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(runsList->sizePolicy().hasHeightForWidth());
        runsList->setSizePolicy(sizePolicy5);
        runsList->setMaximumSize(QSize(300, 16777215));

        verticalLayout_3->addWidget(runsList);

        runsBtn = new QPushButton(centralWidget);
        runsBtn->setObjectName(QStringLiteral("runsBtn"));
        sizePolicy3.setHeightForWidth(runsBtn->sizePolicy().hasHeightForWidth());
        runsBtn->setSizePolicy(sizePolicy3);
        runsBtn->setMaximumSize(QSize(300, 16777215));

        verticalLayout_3->addWidget(runsBtn);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_7->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_7);

        MainWindow->setCentralWidget(centralWidget);
        beginSimulationBtn->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        customRunsCheckbox->setText(QApplication::translate("MainWindow", "Custom runs/jobs", Q_NULLPTR));
        customRunsText->setPlaceholderText(QApplication::translate("MainWindow", "Runs", Q_NULLPTR));
        customJobsText->setPlaceholderText(QApplication::translate("MainWindow", "Jobs", Q_NULLPTR));
        beginSimulationBtn->setText(QApplication::translate("MainWindow", "Start Simulation", Q_NULLPTR));
        resultsLabel->setText(QApplication::translate("MainWindow", "Results", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = resultsTable->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Avg Interarrival Time Theoretical", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = resultsTable->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Avg Service Time Theoretical", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = resultsTable->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Avg Service Time (ALL)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = resultsTable->verticalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Avg Interarrival Time (ALL)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = resultsTable->verticalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Avg Service Time Drive-in", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = resultsTable->verticalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Avg Service Time Inside", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = resultsTable->verticalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Avg Waiting Drive-in", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = resultsTable->verticalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Avg Waiting Inside", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = resultsTable->verticalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Max Inside Queue Length", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = resultsTable->verticalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Probability to Wait Inside", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = resultsTable->verticalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Portion of Idle Time Inside", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = resultsTable->verticalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Probability to Go Inside", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = resultsTable->verticalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Avg Time Spent", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = resultsTable->verticalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Avg Waiting Drive-in (2 Cars)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = resultsTable->verticalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Avg Waiting Inside (2 Cars)", Q_NULLPTR));
        probabilityTableBtn->setText(QApplication::translate("MainWindow", "Probability Tables ", Q_NULLPTR));
        chartsBtn->setText(QApplication::translate("MainWindow", "View Charts", Q_NULLPTR));
        runsLabel->setText(QApplication::translate("MainWindow", "Runs", Q_NULLPTR));
        runsBtn->setText(QApplication::translate("MainWindow", "View Selected Run Data", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
