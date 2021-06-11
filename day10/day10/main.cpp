//
//  main.cpp
//  day10
//
//  Created by waitwalker on 2021/6/11.
//

#include <iostream>

using namespace std;

int myDiv(int a, int b) {
    if (b == 0) {
        return -1;
    }
    return a/b;
}

void test01() {
    int ret = myDiv(10, -10);
    if (ret == -1) {
        cout<<"程序异常了"<<endl;
    } else {
        cout<<"程序正常"<<endl;
    }
}

int myDiv02(int a, int b) {
    if (b == 0) {
        throw 0.0f;
    }
    return a/b;
}

void test02() {
    try {
        int ret = myDiv02(10, 0);
        cout<<"ret = "<<ret<<endl;
    } catch (int e) {
        cout<<"exception = " <<e<<endl;
    } catch (...) {
        cout<<"捕获到其他异常"<<endl;
    }
}

class Person {
    
private:
    string name;
public:
    Person(string name) {
        cout<<"Person有参数构造 name="<<name<<endl;
        this->name = name;
    }
    
    ~Person() {
        cout<<"析构函数"<<endl;
    }
    
};

void test03() {
    try {
        Person ob1("a");
        Person ob2("b");
        Person ob3("c");
        Person ob4("d");
        throw 10;
    } catch (...) {
        cout<<"异常捕获到了"<<endl;
    }
}

int main(int argc, const char * argv[]) {
    //test01();
    //test02();
    test03();
    std::cout << "Hello, World!\n";
    return 0;
}