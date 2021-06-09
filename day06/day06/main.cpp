//
//  main.cpp
//  day06
//
//  Created by waitwalker on 2021/6/9.
//

#include <iostream>

using namespace std;

class Base {
    
    
public:
    Base() {}
    virtual void sleep() {
        cout<<"父亲在睡觉"<<endl;
    }
};


class Son1: public Base {
public:
    Son1(){}
    virtual void sleep() {
        cout<<"Son1在睡觉"<<endl;
    }
};

class Son2: public Base {
public:
    Son2(){}
    virtual void sleep() {
        cout<<"Son2在睡觉"<<endl;
    }
};

class Son3: public Base {
public:
    Son3(){}
    virtual void sleep() {
        cout<<"Son3在睡觉"<<endl;
    }
};

class Son4: public Base {
public:
    Son4(){}
    virtual void sleep() {
        cout<<"Son4在睡觉"<<endl;
    }
};

void sleepFun(Base &ob) {
    ob.sleep();
}


int main(int argc, const char * argv[]) {
    
    Son1 ob1;
    Son2 ob2;
    Son3 ob3; 
    Son4 ob4;
    
    Base base;
    sleepFun(ob1);
    sleepFun(ob2);
    sleepFun(ob3);
    sleepFun(ob4);
    
    std::cout << "Hello, World!\n";
    return 0;
}
