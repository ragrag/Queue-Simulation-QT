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
    explicit runWindow(QWidget *parent = 0,System sys = System() );
    ~runWindow();

private slots:
    void on_svcChartBtn_clicked();

    void on_arrivalChartBtn_clicked();

    void on_singleBtn_clicked();

private:
    Ui::runWindow *ui;
    System system;
};

#endif // RUNWINDOW_H
