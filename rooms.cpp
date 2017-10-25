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

//DEVICES
void Rooms::on_koridor_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->koridor_devices);
}
void Rooms::on_livingroom_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->livingr_devices);
}
void Rooms::on_kitchen_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->kitchen_devices);
}
void Rooms::on_sleeproom_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->sleep_devices);
}
void Rooms::on_pushButton_73_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->vanna_devices);
}
void Rooms::on_pushButton_99_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->other);
}


//ROZETKI
void Rooms::on_pushButton_30_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->rozetki);
}
void Rooms::on_pushButton_28_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->rozetki);
}
void Rooms::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->rozetki);
}
void Rooms::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->rozetki);
}
void Rooms::on_pushButton_75_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->rozetki);
}

//LIGHT
void Rooms::on_pushButton_37_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->light);
}
void Rooms::on_pushButton_81_clicked()
{
        ui->stackedWidget->setCurrentWidget(ui->light);
}
void Rooms::on_pushButton_10_clicked()
{
        ui->stackedWidget->setCurrentWidget(ui->light);
}
void Rooms::on_pushButton_50_clicked()
{
        ui->stackedWidget->setCurrentWidget(ui->light);
}
void Rooms::on_pushButton_62_clicked()
{
        ui->stackedWidget->setCurrentWidget(ui->light);
}

//WINDOWS
void Rooms::on_pushButton_32_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->windows);
}
void Rooms::on_pushButton_14_clicked()
{
        ui->stackedWidget->setCurrentWidget(ui->windows);
}
void Rooms::on_pushButton_52_clicked()
{
        ui->stackedWidget->setCurrentWidget(ui->windows);
}
void Rooms::on_pushButton_64_clicked()
{
        ui->stackedWidget->setCurrentWidget(ui->windows);
}

//CONDITION
void Rooms::on_pushButton_35_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->condition);
}
void Rooms::on_pushButton_16_clicked()
{
        ui->stackedWidget->setCurrentWidget(ui->condition);
}
void Rooms::on_pushButton_58_clicked()
{
        ui->stackedWidget->setCurrentWidget(ui->condition);
}
void Rooms::on_pushButton_70_clicked()
{
        ui->stackedWidget->setCurrentWidget(ui->condition);
}

//WET
void Rooms::on_pushButton_40_clicked()
{
            ui->stackedWidget->setCurrentWidget(ui->wet);
}
void Rooms::on_pushButton_44_clicked()
{
                ui->stackedWidget->setCurrentWidget(ui->wet);
}
void Rooms::on_pushButton_56_clicked()
{
                ui->stackedWidget->setCurrentWidget(ui->wet);
}
void Rooms::on_pushButton_66_clicked()
{
                ui->stackedWidget->setCurrentWidget(ui->wet);
}

//DOORS
void Rooms::on_pushButton_38_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->doors);
}
void Rooms::on_pushButton_85_clicked()
{
         ui->stackedWidget->setCurrentWidget(ui->doors);
}
void Rooms::on_pushButton_42_clicked()
{
         ui->stackedWidget->setCurrentWidget(ui->doors);
}
void Rooms::on_pushButton_48_clicked()
{
         ui->stackedWidget->setCurrentWidget(ui->doors);
}
void Rooms::on_pushButton_68_clicked()
{
         ui->stackedWidget->setCurrentWidget(ui->doors);
}
//JACUZI
void Rooms::on_pushButton_83_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->jacuzi);
}

//COFFEE
void Rooms::on_pushButton_72_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->coffee);
}

//OTHER
void Rooms::on_pushButton_103_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->signaling);
}

void Rooms::on_pushButton_105_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->garage);
}

