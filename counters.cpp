#include "counters.h"
#include "ui_counters.h"

Counters::Counters(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Counters)
{
    ui->setupUi(this);
}

Counters::~Counters()
{
    delete ui;
}
