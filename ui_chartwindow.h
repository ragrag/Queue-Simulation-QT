/********************************************************************************
** Form generated from reading UI file 'chartwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTWINDOW_H
#define UI_CHARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChartWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *avgSvcAllHist_Btn;
    QPushButton *svcAllBarBtn;
    QPushButton *svcAllPieBtn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QPushButton *avgInterHist_Btn;
    QPushButton *interBarBtn;
    QPushButton *interPieBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QPushButton *avgSvcDHist_btn;
    QPushButton *svcDBarBtn_2;
    QPushButton *svcDPieBtn_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QPushButton *avgSvcIHist_Btn;
    QPushButton *svcIBarBtn;
    QPushButton *svcIPieBtn;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QPushButton *avgWaitDHist_Btn;
    QPushButton *waitDBarBtn;
    QPushButton *waitDPieBtn;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QPushButton *avgWaitI_Btn;
    QPushButton *waitIBarBtn;
    QPushButton *waitIPieBtn;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_5;
    QPushButton *maxQHist_Btn;
    QPushButton *qlBarBtn;
    QPushButton *qlPieBtn;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QPushButton *probInHist_Btn;
    QPushButton *probBarBtn;
    QPushButton *probPieBtn;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QPushButton *idleHist_Btn;
    QPushButton *idleBarBtn;
    QPushButton *idlePieBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChartWindow)
    {
        if (ChartWindow->objectName().isEmpty())
            ChartWindow->setObjectName(QStringLiteral("ChartWindow"));
        ChartWindow->resize(652, 490);
        centralwidget = new QWidget(ChartWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        avgSvcAllHist_Btn = new QPushButton(centralwidget);
        avgSvcAllHist_Btn->setObjectName(QStringLiteral("avgSvcAllHist_Btn"));

        horizontalLayout->addWidget(avgSvcAllHist_Btn);

        svcAllBarBtn = new QPushButton(centralwidget);
        svcAllBarBtn->setObjectName(QStringLiteral("svcAllBarBtn"));

        horizontalLayout->addWidget(svcAllBarBtn);

        svcAllPieBtn = new QPushButton(centralwidget);
        svcAllPieBtn->setObjectName(QStringLiteral("svcAllPieBtn"));

        horizontalLayout->addWidget(svcAllPieBtn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        avgInterHist_Btn = new QPushButton(centralwidget);
        avgInterHist_Btn->setObjectName(QStringLiteral("avgInterHist_Btn"));

        horizontalLayout_3->addWidget(avgInterHist_Btn);

        interBarBtn = new QPushButton(centralwidget);
        interBarBtn->setObjectName(QStringLiteral("interBarBtn"));

        horizontalLayout_3->addWidget(interBarBtn);

        interPieBtn = new QPushButton(centralwidget);
        interPieBtn->setObjectName(QStringLiteral("interPieBtn"));

        horizontalLayout_3->addWidget(interPieBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        avgSvcDHist_btn = new QPushButton(centralwidget);
        avgSvcDHist_btn->setObjectName(QStringLiteral("avgSvcDHist_btn"));

        horizontalLayout_2->addWidget(avgSvcDHist_btn);

        svcDBarBtn_2 = new QPushButton(centralwidget);
        svcDBarBtn_2->setObjectName(QStringLiteral("svcDBarBtn_2"));

        horizontalLayout_2->addWidget(svcDBarBtn_2);

        svcDPieBtn_2 = new QPushButton(centralwidget);
        svcDPieBtn_2->setObjectName(QStringLiteral("svcDPieBtn_2"));

        horizontalLayout_2->addWidget(svcDPieBtn_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_8->addWidget(label_2);

        avgSvcIHist_Btn = new QPushButton(centralwidget);
        avgSvcIHist_Btn->setObjectName(QStringLiteral("avgSvcIHist_Btn"));

        horizontalLayout_8->addWidget(avgSvcIHist_Btn);

        svcIBarBtn = new QPushButton(centralwidget);
        svcIBarBtn->setObjectName(QStringLiteral("svcIBarBtn"));

        horizontalLayout_8->addWidget(svcIBarBtn);

        svcIPieBtn = new QPushButton(centralwidget);
        svcIPieBtn->setObjectName(QStringLiteral("svcIPieBtn"));

        horizontalLayout_8->addWidget(svcIPieBtn);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_9->addWidget(label_3);

        avgWaitDHist_Btn = new QPushButton(centralwidget);
        avgWaitDHist_Btn->setObjectName(QStringLiteral("avgWaitDHist_Btn"));

        horizontalLayout_9->addWidget(avgWaitDHist_Btn);

        waitDBarBtn = new QPushButton(centralwidget);
        waitDBarBtn->setObjectName(QStringLiteral("waitDBarBtn"));

        horizontalLayout_9->addWidget(waitDBarBtn);

        waitDPieBtn = new QPushButton(centralwidget);
        waitDPieBtn->setObjectName(QStringLiteral("waitDPieBtn"));

        horizontalLayout_9->addWidget(waitDPieBtn);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_10->addWidget(label_4);

        avgWaitI_Btn = new QPushButton(centralwidget);
        avgWaitI_Btn->setObjectName(QStringLiteral("avgWaitI_Btn"));

        horizontalLayout_10->addWidget(avgWaitI_Btn);

        waitIBarBtn = new QPushButton(centralwidget);
        waitIBarBtn->setObjectName(QStringLiteral("waitIBarBtn"));

        horizontalLayout_10->addWidget(waitIBarBtn);

        waitIPieBtn = new QPushButton(centralwidget);
        waitIPieBtn->setObjectName(QStringLiteral("waitIPieBtn"));

        horizontalLayout_10->addWidget(waitIPieBtn);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_11->addWidget(label_5);

        maxQHist_Btn = new QPushButton(centralwidget);
        maxQHist_Btn->setObjectName(QStringLiteral("maxQHist_Btn"));

        horizontalLayout_11->addWidget(maxQHist_Btn);

        qlBarBtn = new QPushButton(centralwidget);
        qlBarBtn->setObjectName(QStringLiteral("qlBarBtn"));

        horizontalLayout_11->addWidget(qlBarBtn);

        qlPieBtn = new QPushButton(centralwidget);
        qlPieBtn->setObjectName(QStringLiteral("qlPieBtn"));

        horizontalLayout_11->addWidget(qlPieBtn);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_12->addWidget(label_6);

        probInHist_Btn = new QPushButton(centralwidget);
        probInHist_Btn->setObjectName(QStringLiteral("probInHist_Btn"));

        horizontalLayout_12->addWidget(probInHist_Btn);

        probBarBtn = new QPushButton(centralwidget);
        probBarBtn->setObjectName(QStringLiteral("probBarBtn"));

        horizontalLayout_12->addWidget(probBarBtn);

        probPieBtn = new QPushButton(centralwidget);
        probPieBtn->setObjectName(QStringLiteral("probPieBtn"));

        horizontalLayout_12->addWidget(probPieBtn);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_13->addWidget(label_7);

        idleHist_Btn = new QPushButton(centralwidget);
        idleHist_Btn->setObjectName(QStringLiteral("idleHist_Btn"));

        horizontalLayout_13->addWidget(idleHist_Btn);

        idleBarBtn = new QPushButton(centralwidget);
        idleBarBtn->setObjectName(QStringLiteral("idleBarBtn"));

        horizontalLayout_13->addWidget(idleBarBtn);

        idlePieBtn = new QPushButton(centralwidget);
        idlePieBtn->setObjectName(QStringLiteral("idlePieBtn"));

        horizontalLayout_13->addWidget(idlePieBtn);


        verticalLayout->addLayout(horizontalLayout_13);


        verticalLayout_2->addLayout(verticalLayout);

        ChartWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChartWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 652, 26));
        ChartWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ChartWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ChartWindow->setStatusBar(statusbar);

        retranslateUi(ChartWindow);

        QMetaObject::connectSlotsByName(ChartWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChartWindow)
    {
        ChartWindow->setWindowTitle(QApplication::translate("ChartWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("ChartWindow", "Avg Service Time (ALL)", Q_NULLPTR));
        avgSvcAllHist_Btn->setText(QApplication::translate("ChartWindow", "Histogram", Q_NULLPTR));
        svcAllBarBtn->setText(QApplication::translate("ChartWindow", "Frequency Bar Chart", Q_NULLPTR));
        svcAllPieBtn->setText(QApplication::translate("ChartWindow", "Pie Chart", Q_NULLPTR));
        label_9->setText(QApplication::translate("ChartWindow", "Avg Interarrival time (ALL)", Q_NULLPTR));
        avgInterHist_Btn->setText(QApplication::translate("ChartWindow", "Histogram", Q_NULLPTR));
        interBarBtn->setText(QApplication::translate("ChartWindow", "Frequency Bar Chart", Q_NULLPTR));
        interPieBtn->setText(QApplication::translate("ChartWindow", "Pie Chart", Q_NULLPTR));
        label_8->setText(QApplication::translate("ChartWindow", "Avg Service Time Drive-in", Q_NULLPTR));
        avgSvcDHist_btn->setText(QApplication::translate("ChartWindow", "Histogram", Q_NULLPTR));
        svcDBarBtn_2->setText(QApplication::translate("ChartWindow", "Frequency Bar Chart", Q_NULLPTR));
        svcDPieBtn_2->setText(QApplication::translate("ChartWindow", "Pie Chart", Q_NULLPTR));
        label_2->setText(QApplication::translate("ChartWindow", "Avg Service Time Inside", Q_NULLPTR));
        avgSvcIHist_Btn->setText(QApplication::translate("ChartWindow", "Histogram", Q_NULLPTR));
        svcIBarBtn->setText(QApplication::translate("ChartWindow", "Frequency Bar Chart", Q_NULLPTR));
        svcIPieBtn->setText(QApplication::translate("ChartWindow", "Pie Chart", Q_NULLPTR));
        label_3->setText(QApplication::translate("ChartWindow", "Avg Waiting Time Drive-in", Q_NULLPTR));
        avgWaitDHist_Btn->setText(QApplication::translate("ChartWindow", "Histogram", Q_NULLPTR));
        waitDBarBtn->setText(QApplication::translate("ChartWindow", "Frequency Bar Chart", Q_NULLPTR));
        waitDPieBtn->setText(QApplication::translate("ChartWindow", "Pie Chart", Q_NULLPTR));
        label_4->setText(QApplication::translate("ChartWindow", "Avg Waiting Time inside", Q_NULLPTR));
        avgWaitI_Btn->setText(QApplication::translate("ChartWindow", "Histogram", Q_NULLPTR));
        waitIBarBtn->setText(QApplication::translate("ChartWindow", "Frequency Bar Chart", Q_NULLPTR));
        waitIPieBtn->setText(QApplication::translate("ChartWindow", "Pie Chart", Q_NULLPTR));
        label_5->setText(QApplication::translate("ChartWindow", "Max Queue Length inside", Q_NULLPTR));
        maxQHist_Btn->setText(QApplication::translate("ChartWindow", "Histogram", Q_NULLPTR));
        qlBarBtn->setText(QApplication::translate("ChartWindow", "Frequency Bar Chart", Q_NULLPTR));
        qlPieBtn->setText(QApplication::translate("ChartWindow", "Pie Chart", Q_NULLPTR));
        label_6->setText(QApplication::translate("ChartWindow", "Probability To Go Inside", Q_NULLPTR));
        probInHist_Btn->setText(QApplication::translate("ChartWindow", "Histogram", Q_NULLPTR));
        probBarBtn->setText(QApplication::translate("ChartWindow", "Frequency Bar Chart", Q_NULLPTR));
        probPieBtn->setText(QApplication::translate("ChartWindow", "Pie Chart", Q_NULLPTR));
        label_7->setText(QApplication::translate("ChartWindow", "Idle Time Inside", Q_NULLPTR));
        idleHist_Btn->setText(QApplication::translate("ChartWindow", "Histogram", Q_NULLPTR));
        idleBarBtn->setText(QApplication::translate("ChartWindow", "Frequency Bar Chart", Q_NULLPTR));
        idlePieBtn->setText(QApplication::translate("ChartWindow", "Pie Chart", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChartWindow: public Ui_ChartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTWINDOW_H
