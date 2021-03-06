//
//  main.cpp
//  virtualInherit
//
//  Created by waitwalker on 2021/6/9.
//

#include <iostream>

using namespace std;

class Base {
public:
    int num;
};

/// Son的虚基类
class Base1: virtual public Base {
public:
    //int a;
};

/// Son的虚基类
class Base2: virtual public Base {
public:
    //int a;
};

class Son: public Base1, public Base2 {
public:
    
};

void test01() {
    Son son;
    son.num = 100;
    
    /// *(int *)&son虚基类表的起始位置
    int offSet = (*(int *)&son) + 1;///偏移量
    cout<<"偏移量:"<<offSet<<endl;
}


class Animal {
public:
    /// 使用virtual修饰的就函数就是虚函数
    virtual void sleep() {
        cout<<"Animal 睡觉"<<endl;
    }
};

class Cat: public Animal {
public:
    virtual void sleep() {
        cout<<"Cat 睡觉"<<endl;
    }
};

void test02() {
    Cat cat;
    cat.sleep();
    cat.Animal::sleep();
    
    /// p不会出现越界情况
    Animal *p = new Cat;
    p->sleep();
    
    /// 这样不能初始化成功&&也不安全,会出现访问非法内存
    //Cat *pCat = new Animal;
    //pCat->sleep();
    
    Cat a;
    Animal &ob = a;
    ob.sleep();
}


int main(int argc, const char * argv[]) {
    //test01();
    //test02();
    
    Animal an;
    an.sleep();
    std::cout << "Hello, World!\n";
    return 0;
}
