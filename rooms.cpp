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

void Rooms::on_pushButton_47_clicked()
{
    Rooms::i = 1;
    ui->stackedWidget->setCurrentWidget(ui->page_lamp);
}

void Rooms::on_pushButton_75_clicked()
{
    Rooms::i = 2;
    ui->stackedWidget->setCurrentWidget(ui->page_lamp);
}

void Rooms::on_pushButton_114_clicked()
{
    Rooms::i = 3;
    ui->stackedWidget->setCurrentWidget(ui->page_lamp);
}


void Rooms::on_pushButton_71_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_dzhakuzi);
}

void Rooms::on_pushButton_29_clicked()
{
    Rooms::i = 1;
    ui->stackedWidget->setCurrentWidget(ui->page_conder);
}
void Rooms::on_pushButton_83_clicked()
{
    Rooms::i = 2;
    ui->stackedWidget->setCurrentWidget(ui->page_conder);
}

void Rooms::on_pushButton_35_clicked()
{
    Rooms::i = 1;
    ui->stackedWidget->setCurrentWidget(ui->page_warmfloor);
}

void Rooms::on_pushButton_91_clicked()
{
    Rooms::i = 2;
    ui->stackedWidget->setCurrentWidget(ui->page_warmfloor);
}

void Rooms::on_pushButton_106_clicked()
{
    Rooms::i = 3;
    ui->stackedWidget->setCurrentWidget(ui->page_warmfloor);
}

void Rooms::on_pushButton_38_clicked()
{
    Rooms::i = 1;
    ui->stackedWidget->setCurrentWidget(ui->page_battery);
}


void Rooms::on_pushButton_87_clicked()
{
    Rooms::i = 2;
    ui->stackedWidget->setCurrentWidget(ui->page_battery);
}

void Rooms::on_pushButton_17_clicked()
{
    Rooms::i = 1;
    ui->stackedWidget->setCurrentWidget(ui->page_rozetka);
}
void Rooms::on_pushButton_95_clicked()
{
    Rooms::i = 2;
    ui->stackedWidget->setCurrentWidget(ui->page_rozetka);

}


void Rooms::on_pushButton_99_clicked()
{
    Rooms::i = 2;
    ui->stackedWidget->setCurrentWidget(ui->page_rozetka);
}

void Rooms::on_pushButton_110_clicked()
{
    Rooms::i = 3;
    ui->stackedWidget->setCurrentWidget(ui->page_rozetka);
}

void Rooms::on_pushButton_79_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_coffe);
}

void Rooms::on_pushButton_41_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_humidifier);
}

void Rooms::on_pushButton_30_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_bathroom);
}

void Rooms::on_pushButton_31_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_bathroom);
}

void Rooms::on_pushButton_2_clicked()
{
    switch(Rooms::i) {
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
        break;
    case 3:
        ui->stackedWidget->setCurrentWidget(ui->page_bathroom);
        break;
    }
}

void Rooms::on_pushButton_clicked()
{
    switch(Rooms::i) {
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
        break;
    case 3:
        ui->stackedWidget->setCurrentWidget(ui->page_bathroom);
        break;
    }
}

void Rooms::on_pushButton_61_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
}

void Rooms::on_pushButton_62_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
}

void Rooms::on_pushButton_49_clicked()
{
    switch(Rooms::i) {
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
        break;
    }
}

void Rooms::on_pushButton_50_clicked()
{
    switch(Rooms::i) {
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
        break;
    }
}

void Rooms::on_pushButton_59_clicked()
{
    switch(Rooms::i) {
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
        break;
    }
}

void Rooms::on_pushButton_60_clicked()
{
    switch(Rooms::i) {
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
        break;
    }
}

void Rooms::on_pushButton_57_clicked()
{
    switch(Rooms::i) {
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
        break;
    case 3:
        ui->stackedWidget->setCurrentWidget(ui->page_bathroom);
        break;
    }
}

void Rooms::on_pushButton_58_clicked()
{
    switch(Rooms::i) {
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
        break;
    case 3:
        ui->stackedWidget->setCurrentWidget(ui->page_bathroom);
        break;
    }
}

void Rooms::on_pushButton_66_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
}

void Rooms::on_pushButton_67_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
}

void Rooms::on_pushButton_32_clicked()
{
    switch(Rooms::i) {
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
        break;
    case 3:
        ui->stackedWidget->setCurrentWidget(ui->page_bathroom);
        break;
    }
}

void Rooms::on_pushButton_48_clicked()
{
    switch(Rooms::i) {
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_livingroom);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_kitchen);
        break;
    case 3:

        ui->stackedWidget->setCurrentWidget(ui->page_bathroom);
        break;
    }
}


