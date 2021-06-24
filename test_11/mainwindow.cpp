#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QPixmap>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(800,600);
    ui->pushButton->setGeometry((800 - 100) * 0.5, this->height() - 100, 100, 50);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        // 重新绘制 重新加载绘图事件
        this->update();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    static int x = 0;

    // 1.定义一个画笔
    QPainter *painter = new QPainter(this);
    // 定义一个图片控件
    QPixmap pixMap;
    pixMap.load(":/images/123.png");

    // 修改图片大小
    pixMap.scaled(pixMap.width() * 0.5, pixMap.height() * 0.5);

    // 在主窗口上进行绘制
    painter->drawPixmap(x++,0,pixMap.width() * 0.5, pixMap.height() * 0.5, pixMap);

    x+=2;

}

