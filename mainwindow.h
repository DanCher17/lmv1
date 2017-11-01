#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <counters.h>
#include <rooms.h>
#include <QStackedWidget>

const int COUNTERS_PAGE = 0;
const int ROOMS_PAGE = 1;

const QString PAGE_NAME[] = {
    "Лічильники",
    "Кімнати"
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void updateTime();
private:
    Ui::MainWindow *ui;
    Counters counters;
    Rooms rooms;
    QTimer *tmr;
    void switchToPage(int page);
};

#endif // MAINWINDOW_H
