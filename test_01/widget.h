#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    // 监测显示 这个可以定义 一般用lambda表达式
    void listenShow();
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
