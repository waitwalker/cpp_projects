#include "mylabel.h"
#include <QMouseEvent>

MyLabel::MyLabel(QWidget *parent) : QLabel(parent)
{

}

void MyLabel::enterEvent(QEnterEvent *event)
{
    qDebug()<<"鼠标进入了";
}

void MyLabel::leaveEvent(QEvent *event)
{
    qDebug()<<"鼠标离开了";
}

void MyLabel::mouseDoubleClickEvent(QMouseEvent *event)
{
    qDebug()<<"鼠标双击了";
}

void MyLabel::mouseMoveEvent(QMouseEvent *event)
{
    qDebug()<<"鼠标移动事件";
    qDebug()<<"相对x:"<<event->x();
    qDebug()<<"相对y:"<<event->y();

    qDebug()<<"绝对x:"<<event->globalX();
    qDebug()<<"绝对y:"<<event->globalY();
}

void MyLabel::mousePressEvent(QMouseEvent *event)
{
    qDebug()<<"鼠标按下事件";
    if (event->button() == Qt::LeftButton) {
        qDebug()<<"鼠标左键按下";
    } else if (event->button() == Qt::RightButton) {
        qDebug()<<"鼠标右键按下";
    }
}

void MyLabel::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug()<<"鼠标松开事件";
    if (event->button() == Qt::LeftButton) {
        qDebug()<<"鼠标左键松开";
    } else if (event->button() == Qt::RightButton) {
        qDebug()<<"鼠标右键松开";
    }
}
