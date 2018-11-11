#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "runwindow.h"
#include "probabilitytable.h"
#include "chartwindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_beginSimulationBtn_clicked();

    void on_customRunsCheckbox_toggled(bool checked);

    void on_runsBtn_clicked();

    void on_probabilityTableBtn_clicked();

    void on_chartsBtn_clicked();

private:
    Ui::MainWindow *ui;
    runWindow *runWindowObj;
    ProbabilityTable *probabilityTableWindow;
    ChartWindow *chartsWindow;
};

#endif // MAINWINDOW_H
