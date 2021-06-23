#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QComboBox>

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

}

MainWindow::~MainWindow()
{
    delete ui;
}

