//
//  Person.cpp
//  day_04
//
//  Created by waitwalker on 2021/5/31.
//

#include "Person.hpp"

Person::Person(int a, int b, int c):m_a(a),m_b(b),m_c(c) {
//    m_a = a;
//    m_b = b;
//    m_c = c;
    cout<<"有参数构造函数"<<endl;
}

void Person::showPerson() {
    cout<<"a:"<<m_a<<endl;
    cout<<"b:"<<m_b<<endl;
    cout<<"c:"<<m_c<<endl;
}

Person::~Person() {
    cout<<"析构函数"<<endl;
}
