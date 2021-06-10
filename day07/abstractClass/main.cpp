//
//  main.cpp
//  abstractClass
//
//  Created by waitwalker on 2021/6/10.
//

#include <iostream>

using namespace std;

class AbstractBase {
    
public:
    /// 第一步 virtual修饰 变成虚析构函数
    /// 第二步 =0 变成纯虚析构函数
    virtual ~AbstractBase() = 0;
};

/// 第三步 在外部实现  原因:通过基类指针 释放子类对象时 先调用子类的析构 再主动调用父类的析构,如果父类没有实现析构,无法调用
AbstractBase::~AbstractBase() {
    cout<<"抽象类析构成功"<<endl;
}

class Son: AbstractBase {
    
    
public:
    virtual ~Son() {
        cout<<"子类析构成功"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    
    Son son;
    std::cout << "Hello, World!\n";
    return 0;
}
