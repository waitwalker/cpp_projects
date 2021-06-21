#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>
#include <QString>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

    // 自定义信号函数
signals:
    void hungry();
    void hungry(QString foodName);

};

#endif // TEACHER_H
