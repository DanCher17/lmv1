#include "cctv.h"
#include "ui_cctv.h"

CCTV::CCTV(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CCTV)
{
    ui->setupUi(this);
}

CCTV::~CCTV()
{
    delete ui;
}

void CCTV::on_pushButton_3_clicked()
{

}

void CCTV::on_pushButton_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}

void CCTV::on_pushButton_2_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void CCTV::on_widget_12_destroyed()
{
}

void CCTV::on_pushButton_14_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(2);
}
