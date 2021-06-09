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
    void sleep() {
        cout<<"Animal 睡觉"<<endl;
    }
};

class Cat: public Animal {
    
    
public:
    void sleep() {
        cout<<"Cat 睡觉"<<endl;
    }
};


int main(int argc, const char * argv[]) {
    
    Cat cat;
    cat.sleep();
    
    std::cout << "Hello, World!\n";
    return 0;
}
