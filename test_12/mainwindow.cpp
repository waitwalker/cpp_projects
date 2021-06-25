#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPaintEvent>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(800,600);
    // 定义一个QImage图片
    QImage img;
    img.load(":/images/123.png");

    // 定义一个画笔
    QPainter painter(&img);
    painter.drawEllipse(QPoint(100,100),100,100);
    img.save("/Users/waitwalker/Desktop/工作/github_projects/cpp_projects/test_12/img1.jpg");


//    // 定义QBitMap 一会绘图设备
//    QBitmap bitMap(200,200);
//    // 定义个画笔
//    QPainter painter(&bitMap);
//    painter.drawEllipse(50,50,50,50);
//    bitMap.save("/Users/waitwalker/Desktop/工作/github_projects/cpp_projects/test_12/bit1.jpg");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    // 定义个画笔
    QPainter *painter = new QPainter(this);
    painter->setPen(Qt::red);

    // 划线 起点,终点
    painter->drawLine(0,0,200,200);

    // 画矩形
    painter->drawRect(50,50,100,100);

    // 画圆
    painter->drawEllipse(200,200,200,200);

    // 画椭圆
    painter->drawEllipse(500,100,100,200);
}

