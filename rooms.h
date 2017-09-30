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
    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Rooms *ui;
};

#endif // ROOMS_H
