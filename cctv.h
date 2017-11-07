#ifndef CCTV_H
#define CCTV_H

#include <QWidget>

namespace Ui {
class CCTV;
}

class CCTV : public QWidget
{
    Q_OBJECT

public:
    explicit CCTV(QWidget *parent = 0);
    ~CCTV();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_widget_12_destroyed();

    void on_pushButton_14_clicked();

private:
    Ui::CCTV *ui;
};

#endif // CCTV_H
