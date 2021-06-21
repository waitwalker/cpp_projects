#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }

QT_END_NAMESPACE

class Widget : public QWidget
{
    // 这个宏 让Widget支持信号和槽机制
    Q_OBJECT

public:
    // 构造和析构函数
    Widget(QWidget *parent = nullptr);
    void buttonAction();
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
