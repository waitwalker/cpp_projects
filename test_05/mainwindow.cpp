#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRadioButton>
#include <QListWidget>

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

    // 列表控件
    // 往列表控件里面添加 item
    QListWidgetItem *item = new QListWidgetItem("北京");
    ui->listWidget->addItem(item);

    QStringList list;
    list.append("积水潭");
    list.append("天安门");
    list.append("谷歌");
    ui->listWidget->addItems(list);

}

MainWindow::~MainWindow()
{
    delete ui;
}

