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

class Son:public Base {
    
    
public:
    void getData() {
        cout<<"a:"<<this->a<<endl;
    }
};

void test01(){
    Son son;
    son.a = 100;
}

int main(int argc, const char * argv[]) {
//    IOTHtml html;
//    html.mainBody();
//
//    Lucy lucy;
//    lucy.comeOn();
    test01();
    
    std::cout << "Hello, World!\n";
    return 0;
}
