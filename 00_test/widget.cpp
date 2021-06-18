#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QDebug>
#include <iostream>
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    // this 指针代表的是当前的主窗口
    ui->setupUi(this);
    this->setWindowTitle("SourceTree");

    QString str = this->windowTitle();
    qDebug()<<str;
    cout<<str<<endl;
}

Widget::~Widget()
{
    delete ui;
}

