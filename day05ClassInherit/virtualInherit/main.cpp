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
    int a;
};

/// Son的虚基类
class Base2: virtual public Base {
public:
    int a;
};

class Son: public Base1, public Base2 {
public:
    
};

int main(int argc, const char * argv[]) {
    
    Son son;
    son.num = 100;
    
    std::cout << "Hello, World!\n";
    return 0;
}
