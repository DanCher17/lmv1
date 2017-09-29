#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <counters.h>
#include <QStackedWidget>

const int COUNTERS_PAGE = 1;

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

private:
    Ui::MainWindow *ui;
    Counters counters;
    void switchToPage(int page);
};

#endif // MAINWINDOW_H
