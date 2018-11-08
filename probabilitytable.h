#ifndef PROBABILITYTABLE_H
#define PROBABILITYTABLE_H

#include <QMainWindow>
#include "System.h"
namespace Ui {
class ProbabilityTable;
}

class ProbabilityTable : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProbabilityTable(QWidget *parent = 0,System sys=System());
    ~ProbabilityTable();

private:
    Ui::ProbabilityTable *ui;
    System system;
};

#endif // PROBABILITYTABLE_H
