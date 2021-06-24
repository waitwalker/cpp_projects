#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    // 1.定义一个画笔
    QPainter *painter = new QPainter(this);
    // 定义一个图片控件
    QPixmap pixMap;
    pixMap.load(":/images/123.png");

    // 修改图片大小
    pixMap.scaled(this->size().width(), this->size().height());

    // 在主窗口上进行绘制
    painter->drawPixmap(0,0,this->size().width(), this->size().height(), pixMap);

}

