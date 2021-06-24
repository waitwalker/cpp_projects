#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimerEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // 重写定时器事件
    virtual void timerEvent(QTimerEvent *event);

private:
    Ui::MainWindow *ui;
    // 定时器 id
    int id1;
    int id2;
};
#endif // MAINWINDOW_H
