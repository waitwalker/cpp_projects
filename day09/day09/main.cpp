//
//  main.cpp
//  day09
//
//  Created by waitwalker on 2021/6/10.
//

#include <iostream>
using namespace std;
class Base {
    
    
public:
    int num;
};

class Son: public Base {
public:
    
};

/// static_cast静态类型转换
void test01 () {
    /// 向上转换
    Base *p1 = new Son;
    
    /// 向下转换
    //Son *p2 = new Base;
    
    /// static_cast 用于基本类型转换
    char ch = 'a';
    double d = static_cast<double>(ch);
    
    /// static 用于类指针之间的转换
    Son *p2;
    p2 = static_cast<Son *>(p1);
    delete p1;
    
    Base *p3 = static_cast<Base *>(new Son);
    delete p3;
}

class Animal {
    
    
public:
    
};

/// 动态类型转换
void test02() {
    /// 动态类型转换不能用于基本类型
    //char ch = 'a';
    //double d = dynamic_cast<double>(ch);
    
    /// 动态类型可以用于向上类型转换
    Base *p1 = dynamic_cast<Base *>(new Son);
    
    /// 动态类型不能用于向下类型转换
    //Son *p2 = dynamic_cast<Son *>(new Base);
    
    /// 动态类型不支持没有关系的类型转换
    //Base *p3 = dynamic_cast<Base *>(new Animal);
    
}

/// const_cast 常量转换
void test03() {
    /// const_cast 类型转换
    const int *p = NULL;
    int *p1 = const_cast<int *>(p);
    
    /// 这种转换
    int *p2 = NULL;
    const int *p3 = const_cast<const int *>(p2);
    
    /// consta_cast不支持非指针或引用的转换,const_cast只能用于指针或引用的转换
    const int a = 100;
    //int b = const_cast<int>(a);
    
    int data = 100;
    const int &ob = data;
    int &ob2 = const_cast<int &>(ob);
}

int main(int argc, const char * argv[]) {
    //test02();
    test03();
    std::cout << "Hello, World!\n";
    return 0;
}
