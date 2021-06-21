#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    // this 指针代表的是当前的主窗口
    ui->setupUi(this);
    this->setWindowTitle("SourceTree");

    // 固定窗口
    this->setFixedSize(400,500);

    QString str = this->windowTitle();
    qDebug()<<str;
}

Widget::~Widget()
{
    delete ui;
}

