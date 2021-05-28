#include <iostream>

using namespace std;

int my_add(int a = 20, int b = 0) {
    return a + b;
}

void test02(){

}

/// 内联函数的定义 和普通函数相比省去出栈的开销
inline int my_num(int a, int b) {
    return a * b;
}

int main()
{
    cout<<my_add(10,30)<<endl;
    return 0;

    cout<<my_num(10,20)<<endl;

    cout << "Hello World!" << endl;
    return 0;
}
