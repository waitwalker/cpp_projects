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
    //Son *p2 = new Base;
    
    /// static_cast 用于基本类型转换
    char ch = 'a';
    double d = static_cast<double>(ch);
    
    /// static 用于类指针之间的转换
    Son *p2;
    p2 = static_cast<Son *>(p1);
    delete p1;
    
    Base *p3 = static_cast<Base *>(new Son);
    delete p3;
    std::cout << "Hello, World!\n";
    return 0;
}