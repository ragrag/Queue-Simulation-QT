#ifndef RUNWINDOW_H
#define RUNWINDOW_H

#include <QMainWindow>
#include "System.h"
#include "Result.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>


QT_CHARTS_USE_NAMESPACE
#include <vector>
namespace Ui {
class runWindow;
}

class runWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit runWindow(QWidget *parent = 0,System sys = System() ,Result res = Result());
    ~runWindow();

private slots:
    void on_svcChartBtn_clicked();

    void on_arrivalChartBtn_clicked();

private:
    Ui::runWindow *ui;
    pair <System,Result> system;
};

#endif // RUNWINDOW_H
