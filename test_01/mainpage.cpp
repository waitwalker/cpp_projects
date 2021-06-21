#include "mainpage.h"
#include <QPushButton>


MainPage::MainPage(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("查询窗口");
    this->resize(800,500);
    QPushButton *backButton = new QPushButton("返回",this);
    backButton->setGeometry(100,50, 100, 50);

    connect(backButton,&QPushButton::clicked,[=](){
        this->hide();
        emit this->hideMainPageSignal();
    });
}
