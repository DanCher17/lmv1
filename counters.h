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
    float coldWater = 5745.4;
    float hotWater = 6723.1;
    float gas = 4917.0;
    float electro = 7762.8;
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
