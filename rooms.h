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
    void on_koridor_clicked();

    void on_livingroom_clicked();

    void on_kitchen_clicked();

    void on_sleeproom_clicked();

    void on_pushButton_73_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_75_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_81_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_62_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_52_clicked();

    void on_pushButton_64_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_58_clicked();

    void on_pushButton_70_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_56_clicked();

    void on_pushButton_66_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_85_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_68_clicked();

    void on_pushButton_83_clicked();

    void on_pushButton_72_clicked();

    void on_pushButton_103_clicked();

    void on_pushButton_105_clicked();

    void on_pushButton_99_clicked();

private:
    Ui::Rooms *ui;
};

#endif // ROOMS_H
