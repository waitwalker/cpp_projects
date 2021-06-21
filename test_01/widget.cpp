#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include "mainpage.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);

    this->setWindowTitle("登录");

    MainPage *mainPage = new MainPage();

    QPushButton *nextButton = new QPushButton("下一页",this);
    nextButton->setGeometry(100,100,100,60);
    connect(nextButton,&QPushButton::clicked,[=](){
        this->hide();
        mainPage->show();
    });

    connect(mainPage,&MainPage::hideMainPageSignal,[=](){
        qDebug()<<"接收到窗口显示信号";
        this->show();
    });
}

Widget::~Widget()
{
    delete ui;
}

