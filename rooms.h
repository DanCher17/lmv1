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
    int i;
    ~Rooms();

private slots:

    void on_btn_bathroom_clicked();

    void on_btn_kitchen_clicked();

    void on_btn_livingroom_clicked();

    void on_pushButton_75_clicked();

    void on_pushButton_71_clicked();

    void on_pushButton_83_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_106_clicked();

    void on_pushButton_91_clicked();

    void on_pushButton_87_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_79_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_61_clicked();

    void on_pushButton_62_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_59_clicked();

    void on_pushButton_60_clicked();

    void on_pushButton_57_clicked();

    void on_pushButton_58_clicked();

    void on_pushButton_66_clicked();

    void on_pushButton_67_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_110_clicked();

    void on_pushButton_99_clicked();

    void on_pushButton_95_clicked();

    void on_pushButton_114_clicked();

    void on_pushButton_47_clicked();

private:
    Ui::Rooms *ui;
    void make_trigger_active(QWidget* btn);
};

#endif // ROOMS_H
