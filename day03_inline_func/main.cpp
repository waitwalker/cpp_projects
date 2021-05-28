#include <iostream>
#include "Person.h"

/// 在声明处添加默认参数值
int my_add(int a = 20, int b = 0);

using namespace std;

/// 函数参数默认值
int my_add(int a, int b) {
    return a + b;
}

void test02(){

}

/// 内联函数的定义 和普通函数相比省去出栈的开销
inline int my_num(int a, int b) {
    return a * b;
}

void test01() {
    cout<<"test01 没有参数"<<endl;
}

void test01(int a) {
    cout<<"test01 有 一个参数"<<endl;
}

void test01(int a, int b) {
    cout<<"test01 有两个参数"<<endl;
}

int main()
{
    myName();

    return 0;

    test01();
    test01(1);
    test01(1,2);
    return 0;

    cout<<my_add()<<endl;
    return 0;

    cout<<my_num(10,20)<<endl;

    cout << "Hello World!" << endl;
    return 0;
}
