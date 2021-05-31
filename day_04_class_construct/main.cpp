#include <iostream>
#include "data.h"

using namespace std;

void test() {
    Data ob1 = Data(20);

    Data ob2 = ob1;
}

int main()
{

    test();
    return 0;

    /// 隐式调用构造函数
    //Data data1;

    /// 显示调用构造函数
    Data data2 = Data(10);

    /// 匿名对象 调用完马上释放
//    Data();

    cout << "Hello World!" << endl;
    return 0;
}
