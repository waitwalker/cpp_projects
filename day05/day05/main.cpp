//
//  main.cpp
//  day05
//
//  Created by waitwalker on 2021/6/8.
//

#include <iostream>
#include "IOTHtml.hpp"

class Student {
    
    
public:
    void sayName() {
        cout<<"this name is Student"<<endl;
    }
    
    void comeOn() {
        cout<<"Come on"<<endl;
    }
};

class Lucy: public Student {
    
    
public:
    void sayName() {
        cout<<"name is Lucy"<<endl;
    }
};

class Base {
private:
    int b;
public:
    int a;
protected:
    int c;
};

//public方式继承,子类内外都可以访问父类public数据,父类中private类型数据在子类中不可见.父类protected类型,在子类中也是protected,子类内部可以访问,外部不可见.
class Son1:public Base {
    
public:
    Son1() {
        a = 1000;
        //b = 20;
        c = 30;
    }
    void getData() {
        cout<<"a:"<<this->a<<endl;
        cout<<"c:"<<c<<endl;
    }
};

/// 父类中public,proteced在子类内部可以访问,子类外部不可见.父类中private类型在子类内外不可见
class Son2:protected Base {
    
    
public:
    Son2() {
        a = 1000;
        //b = 2000;
        c = 3000;
    }
    void getData() {
        cout<<"a:"<<this->a<<endl;
        cout<<"c:"<<c<<endl;
    }
};

class Son3:private Base {
    
    
public:
    Son3() {
        a = 1000;
        //b = 2000;
        c = 3000;
    }
    void getData() {
        cout<<"a:"<<this->a<<endl;
        cout<<"c:"<<c<<endl;
    }
};

void test01(){
    Son1 son;
    son.a = 100;
    son.getData();
}

void test02(){
    Son2 son;
    //son.a = 100;
    son.getData();
}

void test03(){
    Son3 son;
    //son.a = 100;
    son.getData();
}

int main(int argc, const char * argv[]) {
//    IOTHtml html;
//    html.mainBody();
//
//    Lucy lucy;
//    lucy.comeOn();
    //test01();
    //test02();
    test03();
    
    std::cout << "Hello, World!\n";
    return 0;
}
