#include "rooms.h"
#include "ui_rooms.h"

Rooms::Rooms(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rooms)
{
    ui->setupUi(this);

    // QPixmap pixamp(":/img/timeline.png");
    // ui->timeline_1->setPixmap(pixamp.scaled(ui->scrollAreaWidgetContents->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

Rooms::~Rooms()
{
    delete ui;
}

void Rooms::make_trigger_active(QWidget* btn)
{
    ui->btn_bathroom->setStyleSheet("");
    ui->btn_kitchen->setStyleSheet("");
    ui->btn_livingroom->setStyleSheet("");
    btn->setStyleSheet("background: #333");
}

void Rooms::on_btn_bathroom_clicked()
{
    this->make_trigger_active(ui->btn_bathroom);
    ui->stackedWidget->setCurrentWidget(ui->page_bathroom);
}

void Rooms::on_btn_kitchen_clicked()
{
    this->make_trigger_active(ui->btn_kitchen);
    ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
}

void Rooms::on_btn_livingroom_clicked()
{
    this->make_trigger_active(ui->btn_livingroom);
    ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
}
