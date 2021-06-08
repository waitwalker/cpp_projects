//
//  main.cpp
//  inherit
//
//  Created by waitwalker on 2021/6/8.
//

#include <iostream>

using namespace std;

class Base {
    
    
public:
    /// 父类中同名成员变量(属性)
    int num;
    Base() {
        this->num = 0;
        cout<<"父类无参数构造"<<endl;
    }
    Base(int num) {
        cout<<"父类有参数构造"<<endl;
        this->num = num;
    }
    
    void getNum() {
        cout<<"父类中getNum"<<endl;
        cout<<this->num<<endl;
    }
    
    void getNum2() {
        cout<<"父类中getNum2"<<endl;
    }
};

class Son: public Base {
    
    
public:
    /// 子类中同名成员变量(属性)
    int num;
    Son(int num1, int num2):Base(num1) {
        this->num = num2;
        cout<<"子类有参数构造"<<endl;
    }
    
    void showNum() {
        cout<<"父类中的成员num:"<<Base::num<<endl;
        cout<<"子类中的成员num:"<<this->num<<endl;
    }
    
    void getNum() {
        cout<<"子类类中getNum"<<endl;
        cout<<this->num<<endl;
    }
};

void test01() {
    Son son(10,20);
    son.showNum();
    son.getNum();
    son.Base::getNum();
    son.getNum2();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    test01();
    cout << "Hello, World!\n";
    return 0;
}
