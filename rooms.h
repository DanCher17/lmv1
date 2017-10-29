#ifndef ROOMS_H
#define ROOMS_H

#include <QWidget>

namespace Ui {
class Rooms;
}

class Rooms : public QWidget
{
    Q_OBJECT

public:
    explicit Rooms(QWidget *parent = 0);
    ~Rooms();

private slots:

    void on_btn_bathroom_clicked();

    void on_btn_kitchen_clicked();

    void on_btn_livingroom_clicked();

private:
    Ui::Rooms *ui;
    void make_trigger_active(QWidget* btn);
};

#endif // ROOMS_H
