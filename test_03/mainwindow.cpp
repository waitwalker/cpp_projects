#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMenuBar *menuBar = new QMenuBar(this);
    this->setMenuBar(menuBar);
    menuBar->setNativeMenuBar(false);

    QMenu *file = new QMenu("文件",this);
    menuBar->addMenu(file);


    QAction *newFile = new QAction("创建文件",this);
    file->addAction(newFile);
    newFile->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_N));

    QAction *saveFile = new QAction("保存文件",this);
    file->addAction(saveFile);
    saveFile->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_S));

    connect(newFile,&QAction::triggered,[=](){
        qDebug()<<"创建文件成功";
    });

    connect(saveFile,&QAction::triggered,[=](){
        qDebug()<<"保存文件成功";
    });

    // 创建一个图片控件
    QPixmap pixMap;
    // 图片控件添加资源
    //:+加号图片在资源文件中的路径
    pixMap.load(":/images/new_file.png");
    newFile->setIcon(QIcon(pixMap));

    QPixmap savePix;
    savePix.load(":/images/save_file.png");
    saveFile->setIcon(QIcon(savePix));
}

MainWindow::~MainWindow()
{
    delete ui;
}

