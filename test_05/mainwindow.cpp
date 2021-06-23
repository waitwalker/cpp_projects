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


    // 添加顶层控件 往树控件中添加item
    QTreeWidgetItem *treeItem = new QTreeWidgetItem(QStringList()<<"张三丰"<<"11"<<"110220"<<"1班");
    ui->treeWidget->addTopLevelItem(treeItem);

    // 树控件的item添加child
    QTreeWidgetItem *child = new QTreeWidgetItem(QStringList()<<"孩子");
    treeItem->addChild(child);

    // 树控件的点击事件
    connect(ui->treeWidget,&QTreeWidget::itemClicked,[&](QTreeWidgetItem *item, int column){
        qDebug()<<item->text(column)<<column;
    });

    // 设置表格列数
    ui->tableWidget->setColumnCount(3);

    // 设置水平表头信息
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"年龄"<<"性别");

    // 设置表格行数
    ui->tableWidget->setRowCount(12);

    // 设置垂直表头信息
    ui->tableWidget->setVerticalHeaderLabels(QStringList()<<"1");

    // 往表格里面添加item
    QStringList nameList;
    nameList<<"张飞"<<"刘备"<<"曹操"<<"诸葛亮"<<"赵云";
    QStringList ageList;
    ageList<<"3"<<"4"<<"5"<<"6"<<"7"<<"8"<<"9"<<"10"<<"11"<<"12"<<"13"<<"14"<<"15"<<"16"<<"17"<<"18";


    for (int i = 0; i < 5; i++) {
        ui->tableWidget->setItem(i,0, new QTableWidgetItem(nameList[i]));
        ui->tableWidget->setItem(i,1, new QTableWidgetItem(ageList[i]));
    }

    connect(ui->tableWidget,&QTableWidget::itemClicked,[&](QTableWidgetItem *item){
        qDebug()<<item->text();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

