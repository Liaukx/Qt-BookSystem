#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPushButton>

#include"homepage.h"
namespace Ui {
class MainWindow;
}


class homePage;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_Login_clicked();

    void on_Exit_clicked();


private:
    Ui::MainWindow *ui;
    QPushButton *Exit, *Login;
    QLabel *info;
    homePage * new_win;
};

#endif // MAINWINDOW_H
