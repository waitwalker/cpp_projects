#include "mylabel.h"

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
}

void MyLabel::mousePressEvent(QMouseEvent *event)
{
    qDebug()<<"鼠标按下事件";
}

void MyLabel::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug()<<"鼠标松开事件";
}
