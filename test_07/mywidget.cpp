#include "mywidget.h"
#include "ui_mywidget.h"
#include <QSpinBox>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    ui->progressBar->setMaximum(100);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setValue(0);
    connect(ui->spinBox,&QSpinBox::valueChanged,[=](int index){
        qDebug()<<index;
        if (index <= 100) {
            ui->progressBar->setValue(index);
        }

    });
}

MyWidget::~MyWidget()
{
    delete ui;
}
