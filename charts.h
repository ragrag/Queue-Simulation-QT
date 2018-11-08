#ifndef CHARTS_H
#define CHARTS_H

#include <QMainWindow>

namespace Ui {
class Charts;
}

class Charts : public QMainWindow
{
    Q_OBJECT

public:
    explicit Charts(QWidget *parent = 0);
    ~Charts();

private:
    Ui::Charts *ui;
};

#endif // CHARTS_H
