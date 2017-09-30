#include "rooms.h"
#include "ui_rooms.h"

Rooms::Rooms(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rooms)
{
    ui->setupUi(this);
}

Rooms::~Rooms()
{
    delete ui;
}
