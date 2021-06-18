#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // 初始化应用程序
    QApplication a(argc, argv);

    // 创建一个窗口
    Widget w;
    w.show();

    // 主事件循环
    return a.exec();
}
