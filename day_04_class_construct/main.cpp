#include <iostream>
#include "data.h"

using namespace std;

int main()
{
    /// 隐式调用构造函数
    Data data1;

    /// 显示调用构造函数
    Data data2 = Data();
    cout << "Hello World!" << endl;
    return 0;
}
