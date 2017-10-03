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

void Rooms::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Rooms::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Rooms::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Rooms::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Rooms::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Rooms::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Rooms::on_pushButton_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
