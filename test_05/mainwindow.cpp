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

    connect(ui->radioButton_2,&QRadioButton::clicked,[=](){
        qDebug()<<"选中女了";
    });

    // 列表控件
    // 往列表控件里面添加 item
    QListWidgetItem *item = new QListWidgetItem("北京");
    ui->listWidget->addItem(item);

    // 往listwidget添加list数据(链表)
    QStringList list;
    list.append("积水潭");
    list.append("天安门");
    list.append("谷歌");
    ui->listWidget->addItems(list);

    // 监听item点击
    connect(ui->listWidget,&QListWidget::itemClicked,[](QListWidgetItem *item){
        qDebug()<<item->text();
    });

    // 设置树控件的头部信息
    QStringList treeList;
    treeList.append("姓名");
    treeList.append("年龄");
    treeList.append("学号");
    treeList.append("班级");
    ui->treeWidget->setHeaderLabels(treeList);



    // 添加顶层控件
    QTreeWidgetItem *treeItem = new QTreeWidgetItem(QStringList()<<"张三丰"<<"11"<<"110220"<<"1班");
    ui->treeWidget->addTopLevelItem(treeItem);

}

MainWindow::~MainWindow()
{
    delete ui;
}

