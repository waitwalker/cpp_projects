#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 创建一个定时器对象
    QTimer *timer = new QTimer(this);

    // 监听回调
    connect(timer,&QTimer::timeout,[=](){
        static int num = 0;
        ui->label->setText(QString::number(num++));
    });

    connect(ui->startButton,&QPushButton::clicked,[=](){
        timer->start(1000);
    });

    connect(ui->stopButton,&QPushButton::clicked,[=](){
        timer->stop();
    });

    // 延迟操作
    QTimer::singleShot(5000,[=](){
        ui->label->setText("延迟5s后到这里了");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

