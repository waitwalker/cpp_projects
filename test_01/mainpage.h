#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QWidget>

class MainPage : public QWidget
{
    Q_OBJECT
public:
    explicit MainPage(QWidget *parent = nullptr);

signals:
    // 发出返回信号
    void hideMainPageSignal();

};

#endif // MAINPAGE_H
