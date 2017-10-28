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
    else ui->counter_1->setText(QString::number(ui->counter_1->text().toInt()+1));
    i++;
}

void Counters::updateGas() {
    if (i == 3) {
        tmr2->stop();
    }
    else ui->counter_2->setText(QString::number(ui->counter_2->text().toInt()+1));
    i++;
}

void Counters::updateColdWater() {
    if (i == 3) {
        tmr3->stop();
    }
    else ui->counter_3->setText(QString::number(ui->counter_3->text().toInt()+1));
    i++;
}

void Counters::updateWarmWater() {
    if (i == 3) {
        tmr4->stop();
    }
    else ui->counter_4->setText(QString::number(ui->counter_4->text().toInt()+1));
    i++;
}

Counters::~Counters()
{
    delete ui;
}
