//
//  main.cpp
//  day07
//
//  Created by waitwalker on 2021/6/10.
//

#include <iostream>
using namespace std;

class Animal {
    
    
public:
    virtual void sleep() = 0;
};


class Cat: public Animal {
    
    
public:
    
};

int main(int argc, const char * argv[]) {
    
    Cat cat;
    
    std::cout << "Hello, World!\n";
    return 0;
}
