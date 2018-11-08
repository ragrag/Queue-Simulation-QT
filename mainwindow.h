#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "runwindow.h"
#include "probabilitytable.h"
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

private:
    Ui::MainWindow *ui;
    runWindow *runWindowObj;
    ProbabilityTable *probabilityTableObj;
};

#endif // MAINWINDOW_H
