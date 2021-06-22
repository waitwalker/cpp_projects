#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>
#include <QToolBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setFixedSize(300,400);
    this->setWindowTitle("登录");

    // 创建一个菜单栏
    QMenuBar *menuBar = new QMenuBar(this);

    // 将菜单栏添加到主窗口中
    this->setMenuBar(menuBar);
    menuBar->setNativeMenuBar(false);

    // 菜单栏添加菜单
    QMenu *file = new QMenu("文件",this);
    QMenu *edit = new QMenu("编辑",this);
    QMenu *view = new QMenu("View",this);
    menuBar->addMenu(file);
    menuBar->addMenu(edit);
    menuBar->addMenu(view);

    // 在菜单添加菜单项 item
    // 定义菜单项
    QAction *newFile = new QAction("新建",this);
    QAction *saveFile = new QAction("保存",this);
    QAction *recentFile = new QAction("最近",this);
    file->addAction(newFile);
    file->addSeparator();//分割线
    file->addAction(saveFile);
    file->addSeparator();//分割线
    file->addAction(recentFile);

    // 给菜单项 添加快捷键
    newFile->setShortcut(QKeySequence(Qt::CTRL|Qt::Key_N));
    saveFile->setShortcut(QKeySequence(Qt::CTRL|Qt::Key_S));

    // 添加事件
    connect(newFile,&QAction::triggered,[&](){
        qDebug()<<"新建文件成功";
    });

    connect(saveFile,&QAction::triggered,[&](){
        qDebug()<<"保存文件成功";
    });

    // 添加工具栏
    QToolBar *toolBar = new QToolBar(this);

    // 将工具栏添加到主窗口中
    this->addToolBar(toolBar);

    // 将菜单项item 放入到工具栏中
    QAction *upload = new QAction("上传",this);
    QAction *deleteA = new QAction("删除",this);

    toolBar->addAction(upload);
    toolBar->addAction(deleteA);
    upload->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_U));
    deleteA->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_D));

    connect(upload,&QAction::triggered,[=](){
        qDebug()<<"上传成功";
    });

    connect(deleteA,&QAction::triggered,[=](){
        qDebug()<<"删除成功";
    });





}

MainWindow::~MainWindow()
{
    delete ui;
}

