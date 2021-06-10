//
//  main.cpp
//  day09
//
//  Created by waitwalker on 2021/6/10.
//

#include <iostream>
using namespace std;
class Base {
    
    
public:
    int num;
};

class Son: public Base {
public:
    
};

int main(int argc, const char * argv[]) {
    /// 向上转换
    Base *p1 = new Son;
    
    /// 向下转换
    Son *p2 = new Base;
    std::cout << "Hello, World!\n";
    return 0;
}
