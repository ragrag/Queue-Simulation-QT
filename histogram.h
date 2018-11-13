#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <QWidget>
#include <QPaintEvent>
namespace Ui {
class histogram;
}

class histogram : public QWidget
{
    Q_OBJECT

public:
    void paintEvent(QPaintEvent *event);

private:

};

#endif // HISTOGRAM_H
