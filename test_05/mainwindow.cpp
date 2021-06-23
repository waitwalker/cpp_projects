#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRadioButton>

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

    connect(ui->radioButton,&QRadioButton::clicked,[=](){
        qDebug()<<"选中男了";
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

