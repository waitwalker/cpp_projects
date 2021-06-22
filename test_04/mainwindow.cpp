#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QPushButton>
#include <QMessageBox>
#include <QFontDialog>
#include <QColorDialog>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionnew1,&QAction::triggered,[=](){
        qDebug()<<"new1";
    });

    this->resize(1200,1200);

    QPushButton *button1 = new QPushButton("模态",this);
    button1->setGeometry(200,100,100,100);

    connect(button1,&QPushButton::clicked,[&](){
        QDialog *dialog = new QDialog(this);
        dialog->resize(200,100);
        // 带阻塞的
        dialog->exec();
        qDebug()<<"显示模态对话框";
    });

    QPushButton *button2 = new QPushButton("非模态",this);
    button2->setGeometry(200,200,100,100);

    connect(button2,&QPushButton::clicked,[&](){
        QDialog *dialog = new QDialog(this);
        dialog->resize(200,100);
        // 不带阻塞的
        //dialog->exec();
        dialog->show();
        qDebug()<<"显示模态对话框";
    });

    QPushButton *button3 = new QPushButton("错误",this);
    button3->setGeometry(200,300,100,100);
    connect(button3,&QPushButton::clicked,[&](){
        // 错误对话框 是一个模态的对话框
        QMessageBox::critical(this,"错误","很严重的错误,留意");
    });


    QPushButton *button4 = new QPushButton("信息",this);
    button4->setGeometry(200,400,100,100);
    connect(button4,&QPushButton::clicked,[&](){
        // 信息对话框 是一个模态的对话框
        QMessageBox::information(this,"信息提示","重要信息提示");
    });

    QPushButton *button5 = new QPushButton("询问",this);
    button5->setGeometry(200,500,100,100);
    connect(button5,&QPushButton::clicked,[&](){
        // 询问对话框 是一个模态的对话框
        QMessageBox::StandardButton ret;

        ret = QMessageBox::question(this,
                              "询问",
                              "请立即续费",
                              QMessageBox::Save | QMessageBox::Cancel,
                              QMessageBox::Cancel);
        if (ret == QMessageBox::Save) {
            qDebug()<<"用户选择了保存";
        } else if (ret == QMessageBox::Cancel) {
            qDebug()<<"用户选择了取消";
        }
    });

    QPushButton *button6 = new QPushButton("字体",this);
    button6->setGeometry(300,100,100,100);
    connect(button6,&QPushButton::clicked,[&](){
        // 字体对话框 是一个模态的对话框 获取系统字体
        bool flag;
        QFont font;
        font = QFontDialog::getFont(&flag,QFont("Apple"),this);
        qDebug()<<"结果:"<<flag<<"family:"<<font.family()<<"font size:"<<font.pointSize();
    });

    QPushButton *button7 = new QPushButton("颜色",this);
    button7->setGeometry(300,200,100,100);
    connect(button7,&QPushButton::clicked,[&](){
        // 颜色对话框 是一个模态的对话框 获取系统字体
        QColor color;
        color = QColorDialog::getColor();
        qDebug()<<"R:"<<color.red()<<"G:"<<color.green()<<"B:"<<color.blue();
    });

    QPushButton *button8 = new QPushButton("文件",this);
    button8->setGeometry(300,300,100,100);
    connect(button8,&QPushButton::clicked,[&](){
        // 文件对话框 是一个模态的对话框
        QString fileName;
        fileName = QFileDialog::getOpenFileName(this,"文件","/Download","*.png *.jpg");
        qDebug()<<"文件路径结果:"<<fileName;
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

