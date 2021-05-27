#include <iostream> /// 标准输入输出流 类似stdio.h
#include <string.h>

/// std 标准; 使用标准的命名空间
using namespace std;

namespace veryLongName {
    int a = 100;
    int func() {
        cout <<"name"<<endl;
        return 1;
    }
}

namespace A {
    int a = 100;
    void home();
    int getAge(int age){
        return age;
    }
}

void A::home() {
    cout<<"home"<<endl;
}


namespace B {
    int a = 200;
    namespace C {
        int a = 300;
    }
}

namespace A {
    int c = 500;
}

namespace  {
    int m = 30;
}

/// 全局变量a
int a = 10;
void test01() {
    int a = 20;
    /// 局部变量a输出
    cout << "a="<<a <<endl;

    /// ::作用域运算符
    /// 全局变量输出
    cout<< "global a = "<<::a<<endl;
}

int main() {
    using namespace veryLongName;
    cout<<veryLongName::func()<<endl;
    func();

    namespace MM = A;
    cout<<"m="<<m<<endl;
    cout<<"A::a = "<<MM::a<<endl;
    cout<<"B::a= "<<B::a<<endl;
    cout<<"C::a= "<<B::C::a<<endl;
    cout<<"A::c= "<<A::c<<endl;
    cout<<"A::getAge="<<A::getAge(A::a)<<endl;

    test01();
    /// cout类似于c语言的printf
    /// endl类似于c语言的换行符
    /// cout代表输出设备
    /// << 代表流向
    cout << " Hello Beautiful World!" << endl;
    cout << "Come on Baby!" << endl;
    char buf[128] = "";
    strcpy(buf,"Hello String");
    cout<<"buf ="<<buf<<endl;
    int num = 0;
    cin >> num;
    cout << "num == "<< num << endl;
    int b = 0;
    while (b < 2) {
        printf("你好!\n");
        b++;
    }
    return 0;
}
