#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // 初始化应用程序
    QApplication a(argc, argv);

    // 创建一个窗口
    Widget w;

    // 显示窗口
    w.show();

    // 窗口默认是隐藏的
    //w.hide();

    // 主事件循环 带阻塞的,等待用户在窗口上操作
    return a.exec();
}
