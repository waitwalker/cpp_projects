#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(300,400);
    this->setWindowTitle("登录");

    // 创建一个菜单栏
    QMenuBar *menuBar = new QMenuBar(this);

    // 将菜单栏添加到主窗口中
    this->setMenuBar(menuBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

