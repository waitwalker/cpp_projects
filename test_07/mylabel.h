#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>


class MyLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MyLabel(QWidget *parent = nullptr);

    // 重写鼠标进入事件
    virtual void enterEvent(QEnterEvent *event);

    // 鼠标离开事件
    virtual void leaveEvent(QEvent *event);

    // 鼠标双击事件
    virtual void mouseDoubleClickEvent(QMouseEvent *event);

    // 鼠标移动事件
    virtual void mouseMoveEvent(QMouseEvent *event);

    // 鼠标按下事件
    virtual void mousePressEvent(QMouseEvent *event);

    // 鼠标松开事件
    virtual void mouseReleaseEvent(QMouseEvent *event);

signals:

};

#endif // MYLABEL_H
