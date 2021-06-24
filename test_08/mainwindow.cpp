#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 启动定时器
    this->id1 = this->startTimer(1000);
    this->id2 = this->startTimer(2000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 监听定时器事件
void MainWindow::timerEvent(QTimerEvent *event)
{
    static int num1 = 0;
    static int num2 = 0;

    // 区分哪个定时器触发的定时器事件
    if (event->timerId() == this->id1) {
        ui->label->setText(QString::number(num1++));
    } else if (event->timerId() == this->id2) {
        ui->label_2->setText(QString::number(num2++));
    }
}

