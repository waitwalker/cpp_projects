#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QComboBox>
#include <QLabel>
#include <QPixmap>
#include <QMovie>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList list;
    list.append("宝马");
    list.append("奔驰");
    list.append("特斯拉");
    list.append("奥迪");
    list.append("布加迪");
    list.append("五菱宏光");

    ui->comboBox->addItems(list);
    ui->comboBox->setCurrentIndex(7);

    connect(ui->comboBox,&QComboBox::currentIndexChanged,[&](int index){
        qDebug()<<index;
    });


    QLabel *label = new QLabel(this);
    label->setGeometry(200,200,100,150);
    // 设置文字
    //label->setText("布加迪");
    QPixmap pix;
    pix.load(":/images/save_file.png");
    label->setPixmap(pix);

    QMovie *movie = new QMovie(":/images/think.gif");
    ui->label2->setMovie(movie);


    connect(ui->play,&QPushButton::clicked,[=](){
        movie->start();
    });

    connect(ui->pause,&QPushButton::clicked,[=](){
        movie->stop();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

