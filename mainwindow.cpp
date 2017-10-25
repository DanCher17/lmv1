#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget_2->insertWidget(COUNTERS_PAGE, &this->counters);
    ui->stackedWidget_2->insertWidget(ROOMS_PAGE, &this->rooms);
    QPixmap pixamp(":/img/wifi.png");
    ui->label_wifi->setPixmap(pixamp.scaled(ui->widget_6->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->switchToPage(COUNTERS_PAGE);
}

void MainWindow::switchToPage(int page)
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->stackedWidget_2->setCurrentIndex(page);
    ui->label_pageName->setText(PAGE_NAME[page]);
}

void MainWindow::on_pushButton_2_clicked()
{
    this->switchToPage(ROOMS_PAGE);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}
