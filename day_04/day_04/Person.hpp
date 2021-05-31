//
//  Person.hpp
//  day_04
//
//  Created by waitwalker on 2021/5/31.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Person {
private:
    int m_a;
    int m_b;
    int m_c;
    
public:
    Person(int a, int b, int c);
    
    void showPerson();
    /// 如果没有指针成员 不需要释放空间
    ~Person();
};

#endif /* Person_hpp */
