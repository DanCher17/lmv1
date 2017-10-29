#include "counters.h"
#include "ui_counters.h"

Counters::Counters(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Counters)
{
    ui->setupUi(this);

    tmr = new QTimer(this);
    tmr->setInterval(1000);
    connect(tmr, SIGNAL(timeout()), this, SLOT(updateTime()));
    tmr->start();

    tmr1 = new QTimer(this);
    tmr1->setInterval(500);
    connect(tmr1, SIGNAL(timeout()), this, SLOT(updateElectro()));

    tmr2 = new QTimer(this);
    tmr2->setInterval(500);
    connect(tmr2, SIGNAL(timeout()), this, SLOT(updateGas()));

    tmr3 = new QTimer(this);
    tmr3->setInterval(500);
    connect(tmr3, SIGNAL(timeout()), this, SLOT(updateColdWater()));

    tmr4 = new QTimer(this);
    tmr4->setInterval(500);
    connect(tmr4, SIGNAL(timeout()), this, SLOT(updateWarmWater()));
}

int i;

void Counters::updateTime()
{
    int rand = qrand() % 4;
    switch(rand) {
        case 0:
            i = 0;
            tmr1->start();
            updateElectro();
            break;
        case 1:
            i = 0;
            tmr2->start();
            updateGas();
            break;
        case 2:
            i = 0;
            tmr3->start();
            updateColdWater();
            break;
        case 3:
            i = 0;
            tmr4->start();
            updateWarmWater();
            break;
        }
}

void Counters::updateElectro() {
    if (i == 3) {
        tmr1->stop();
    }
    else {
        electro += 0.1;
        double fractpart, intpart;
        fractpart = modf(electro , &intpart);
        ui->label_electro->setText(QString("<html><head/><body><p><span style=\" font-size:12pt;\">000%1.</span><span style=\" font-size:12pt; color:#EF5350;\"> %2</span></p></body></html>").arg(QString::number(intpart), QString::number(int(fractpart * 10))));
    }
    i++;
}

void Counters::updateGas() {
    if (i == 3) {
        tmr2->stop();
    }
    else {
        gas += 0.1;
        double fractpart, intpart;
        fractpart = modf(gas , &intpart);
        ui->label_gas->setText(QString("<html><head/><body><p><span style=\" font-size:12pt;\">000%1.</span><span style=\" font-size:12pt; color:#EF5350;\"> %2</span></p></body></html>").arg(QString::number(intpart), QString::number(int(fractpart * 10))));
    }
    i++;
}

void Counters::updateColdWater() {
    if (i == 3) {
        tmr3->stop();
    }
    else {
        coldWater += 0.1;
        double fractpart, intpart;
        fractpart = modf(coldWater , &intpart);
        ui->label_coldw->setText(QString("<html><head/><body><p><span style=\" font-size:12pt;\">000%1.</span><span style=\" font-size:12pt; color:#EF5350;\"> %2</span></p></body></html>").arg(QString::number(intpart), QString::number(int(fractpart * 10))));
    }
    i++;
}

void Counters::updateWarmWater() {
    if (i == 3) {
        tmr4->stop();
    }
    else {
        hotWater += 0.1;
        double fractpart, intpart;
        fractpart = modf(hotWater , &intpart);
        ui->label_hotw->setText(QString("<html><head/><body><p><span style=\" font-size:12pt;\">000%1.</span><span style=\" font-size:12pt; color:#EF5350;\"> %2</span></p></body></html>").arg(QString::number(intpart), QString::number(int(fractpart * 10))));
    }
    i++;
}

Counters::~Counters()
{
    delete ui;
}
