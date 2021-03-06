#include "mywidget.h"
#include "ui_mywidget.h"
#include <QSpinBox>
#include <QSlider>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    ui->progressBar->setMaximum(100);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setValue(0);

    ui->horizontalSlider->setMaximum(100);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setValue(0);
    connect(ui->spinBox,&QSpinBox::valueChanged,[=](int index){
        qDebug()<<index;
        if (index <= 100) {
            ui->progressBar->setValue(index);
            ui->horizontalSlider->setValue(index);
        }
    });

    connect(ui->horizontalSlider,&QSlider::valueChanged,[=](int value){
        if (value <= 100) {
            ui->progressBar->setValue(value);
            ui->spinBox->setValue(value);
        }
    });


}

void MyWidget::setSliderValue(int value) {
    ui->horizontalSlider->setValue(value);
}

int MyWidget::getSliderValue() {
    return ui->horizontalSlider->value();
}


MyWidget::~MyWidget()
{
    delete ui;
}
