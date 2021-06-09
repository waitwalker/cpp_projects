//
//  main.cpp
//  day05ClassInherit
//
//  Created by waitwalker on 2021/6/9.
//

#include <iostream>
using namespace std;

class Base1 {
    
    
public:
    int a;
};

class Base2 {
    
    
public:
    int a;
};

class Son: public Base1, public Base2 {
    
    
public:
    
};

int main(int argc, const char * argv[]) {
    
    Son son;
    son.a = 100;
    //son.b = 300;
    
    std::cout << "Hello, World!\n";
    return 0;
}
