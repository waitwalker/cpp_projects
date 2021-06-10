//
//  main.cpp
//  day06-1
//
//  Created by waitwalker on 2021/6/9.
//

#include <iostream>
using namespace std;

class Animal {
    
    
public:
    Animal() {
        cout<<"动物的构造"<<endl;
    }
    
    virtual void sleep() =0;
    
    virtual ~Animal() {
        cout<<"动物析构函数"<<endl;
    }
};

class Cat:public Animal {
    
    
public:
    Cat() {
        cout<<"Cat的构造"<<endl;
    }
    
    virtual void sleep() {
        cout<<"Cat睡觉"<<endl;
    }
    
    virtual ~Cat() {
        cout<<"Cat析构函数"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    /// 抽象类可以实例化对象指针
    Animal *p = new Cat;
    p->sleep();
    delete p;
    
    /// 子类必须实现所有的抽象父类纯虚函数(接口),否则子类也是抽象类
    
    /// 抽象类不能实例化对象
    //Animal an;
    std::cout << "Hello, World!\n";
    return 0;
}
