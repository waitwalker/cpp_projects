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

class Thing {
    
    
public:
    Thing() {
        cout<<"Thing无参数构造"<<endl;
    }
    
    ~Thing() {
        cout<<"Thing析构函数"<<endl;
    }
};

class Base {
private:
    int b;
public:
    int a;
    Base() {
        cout<<"Base 父类无惨初始化"<<endl;
    }
    ~Base() {
        cout<<"Base 父类析构函数"<<endl;
    }
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

/// 父类中public,protected在子类中可以访问,在子类外部不可见,public,protected类型数据到子类中变成private类型数据.父类中private类型在子类内外不可见
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

class Son4:public Base {
    
    
public:
    int d;
    int e;
    Thing ob;
    Son4() {
        cout<<"子类Son4无惨初始化"<<endl;
    }
    ~Son4() {
        cout<<"子类Son4析构函数"<<endl;
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

/// 子类构造和析构的顺序:父类构造->子类构造->子类析构->父类析构
/// 子类中有对象成员的构造和析构顺序:父类构造->子类中对象成员构造->子类构造->子类析构->子类中对象成员析构->父类析构
void test04() {
    cout<<sizeof(Son4)<<endl;
    Son4 son;
}

int main(int argc, const char * argv[]) {
//    IOTHtml html;
//    html.mainBody();
//
//    Lucy lucy;
//    lucy.comeOn();
    //test01();
    //test02();
    //test03();
    test04();
    
    std::cout << "Hello, World!\n";
    return 0;
}
