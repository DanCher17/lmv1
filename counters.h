#ifndef COUNTERS_H
#define COUNTERS_H

#include <QWidget>
#include <QTimer>
#include <QTime>
#include <QLabel>

namespace Ui {
class Counters;
}

class Counters : public QWidget
{
    Q_OBJECT

public:
    explicit Counters(QWidget *parent = 0);
    ~Counters();

private:
    Ui::Counters *ui;
    QTimer *tmr;
    QTimer *tmr1;
    QTimer *tmr2;
    QTimer *tmr3;
    QTimer *tmr4;
private slots:
    void updateTime();
    void updateColdWater();
    void updateWarmWater();
    void updateGas();
    void updateElectro();
};

#endif // COUNTERS_H
