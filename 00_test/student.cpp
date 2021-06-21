#include "student.h"
#include <QDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::treat() {
    qDebug()<<"请老师吃饭了";
}


void Student::treat(QString foodName) {
    qDebug()<<"foodName";
    qDebug()<<foodName;
}
