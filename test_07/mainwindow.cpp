#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->setButton,&QPushButton::clicked,[=](){
        ui->widget->setSliderValue(50);
    });

    connect(ui->getvalueButton,&QPushButton::clicked,[=](){
        qDebug()<<ui->widget->getSliderValue();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

