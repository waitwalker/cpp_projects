#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->loginButton,&QPushButton::clicked,[=](){
        QString userAccout = ui->userInput->text();
        qDebug()<<"输入的用户名:"<<userAccout;
        QString password = ui->lineEdit_2->text();
        qDebug()<<"输入的密码:"<<password;
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

