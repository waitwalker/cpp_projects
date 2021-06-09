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
    virtual void sleep() {
        cout<<"父亲在睡觉"<<endl;
    }
};


class Son1 {
public:
    virtual void sleep() {
        cout<<"Son1在睡觉"<<endl;
    }
};

class Son2 {
public:
    virtual void sleep() {
        cout<<"Son2在睡觉"<<endl;
    }
};

class Son3 {
public:
    virtual void sleep() {
        cout<<"Son3在睡觉"<<endl;
    }
};

class Son4 {
public:
    virtual void sleep() {
        cout<<"Son4在睡觉"<<endl;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
