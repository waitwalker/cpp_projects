#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QPushButton>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionnew1,&QAction::triggered,[=](){
        qDebug()<<"new1";
    });

    this->resize(1200,1200);

    QPushButton *button1 = new QPushButton("弹出",this);
    button1->setGeometry(200,100,100,100);

    connect(button1,&QPushButton::clicked,[&](){
        QDialog *dialog = new QDialog(this);
        dialog->resize(200,100);
        // 带阻塞的
        dialog->exec();
        qDebug()<<"显示模态对话框";
    });

    QPushButton *button2 = new QPushButton("弹出2",this);
    button2->setGeometry(200,300,100,100);

    connect(button2,&QPushButton::clicked,[&](){
        QDialog *dialog = new QDialog(this);
        dialog->resize(200,100);
        // 不带阻塞的
        //dialog->exec();
        dialog->show();
        qDebug()<<"显示模态对话框";
    });

    QPushButton *button3 = new QPushButton("打开",this);
    button3->setGeometry(200,400,100,100);
    connect(button3,&QPushButton::clicked,[&](){
        // 错误对话框 是一个模态的对话框
        QMessageBox::critical(this,"错误","很严重的错误,留意");
    });


    QPushButton *button4 = new QPushButton("打开",this);
    button4->setGeometry(200,500,100,100);
    connect(button4,&QPushButton::clicked,[&](){
        // 信息对话框 是一个模态的对话框
        QMessageBox::information(this,"信息提示","重要信息提示");
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

