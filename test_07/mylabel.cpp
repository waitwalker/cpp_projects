#include "mylabel.h"
#include <QMouseEvent>

MyLabel::MyLabel(QWidget *parent) : QLabel(parent)
{
    // 设置鼠标跟踪功能
    this->setMouseTracking(true);

    // 1. 加载事件过滤器
    this->installEventFilter(this);
}

void MyLabel::enterEvent(QEnterEvent *event)
{
    qDebug()<<"enterEvent鼠标进入了";
}

void MyLabel::leaveEvent(QEvent *event)
{
    qDebug()<<"leaveEvent鼠标离开了";
}

void MyLabel::mouseDoubleClickEvent(QMouseEvent *event)
{
    qDebug()<<"mouseDoubleClickEvent鼠标双击了";
}

void MyLabel::mouseMoveEvent(QMouseEvent *event)
{
    qDebug()<<"mouseMoveEvent鼠标移动事件";
    qDebug()<<"相对x:"<<event->x();
    qDebug()<<"相对y:"<<event->y();

    qDebug()<<"绝对x:"<<event->globalX();
    qDebug()<<"绝对y:"<<event->globalY();
}

void MyLabel::mousePressEvent(QMouseEvent *event)
{
    qDebug()<<"mousePressEvent鼠标按下事件";
    if (event->button() == Qt::LeftButton) {
        qDebug()<<"鼠标左键按下";
    } else if (event->button() == Qt::RightButton) {
        qDebug()<<"鼠标右键按下";
    }
}

void MyLabel::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug()<<"mouseReleaseEvent鼠标松开事件";
    if (event->button() == Qt::LeftButton) {
        qDebug()<<"鼠标左键松开";
    } else if (event->button() == Qt::RightButton) {
        qDebug()<<"鼠标右键松开";
    }
}

/// 事件分发器
bool MyLabel::event(QEvent *event)
{
    // 鼠标按下事件
    if (event->type() == QEvent::MouseButtonPress) {
        qDebug()<<"鼠标单击了";

        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        if (mouseEvent->button() == Qt::LeftButton) {
            qDebug()<<"=======event mouseEvent鼠标左键按下";
        } else if (mouseEvent->button() == Qt::RightButton) {
            qDebug()<<"=======event mouseEvent鼠标右键按下";
        }
        // 这里拦截了鼠标单击事件了,该事件不会再向下传递了
        return true;
    }
    return QLabel::event(event);
}

bool MyLabel::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == this) {
        if (event->type() == QEvent::MouseButtonPress) {
            qDebug()<<"鼠标单击了";
            QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
            if (mouseEvent->button() == Qt::LeftButton) {
                qDebug()<<"eventFilter====== mouseEvent鼠标左键按下";
            } else if (mouseEvent->button() == Qt::RightButton) {
                qDebug()<<"eventFilter====== mouseEvent鼠标右键按下";
            }
            return false;// 过滤true, 不过滤false
        }
    }
    return QLabel::eventFilter(watched,event);
}
