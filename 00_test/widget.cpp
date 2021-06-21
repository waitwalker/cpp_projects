#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QDebug>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    // this 指针代表的是当前的主窗口
    ui->setupUi(this);
    this->setWindowTitle("Window标题");

    // 固定窗口
    this->setFixedSize(400,500);

    // 按钮
    QPushButton *button = new QPushButton("关闭",this);
    button->setFixedSize(100,50);
    // 单击button 关闭主窗口
    // 信号发起者:按钮
    // 发出的信号:关闭窗口
    // 接收者:主窗口
    // 槽函数:close
    connect(button,&QPushButton::clicked,this,&QWidget::close);


    QPushButton *button1 = new QPushButton("Button");
    button1->move(200,100);
    button1->resize(150,80);
    button1->setFont(QFont("宋体",18));
    button1->setGeometry(200,350,120,80);
    button1->setEnabled(true);
    //connect(button1,&QPushButton::clicked,this,&QWidget::showFullScreen);

    QStringList list;
    // 字体颜色
    list.append("color:green");
    // 背景色
    list.append("background-color:rgb(85,170,255)");
    button1->setStyleSheet(list.join(';'));
    //button1->addAction(QAction());
    button1->setParent(this);

    connect(button1,&QPushButton::clicked,[=](){
        QString text = button->text();
        qDebug()<<text;
        QStringList list1;
        // 字体颜色
        list1.append("color:green");
        button->setStyleSheet(list1.join(';'));
    });

    QString str = this->windowTitle();
    qDebug()<<str;
}

void Widget::buttonAction() {

}

Widget::~Widget()
{
    delete ui;
}

