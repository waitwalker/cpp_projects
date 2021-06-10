//
//  Person.hpp
//  templateClass
//
//  Created by waitwalker on 2021/6/10.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Person {
    
    
public:
    T1 name;
    T2 age;
    Person(T1 name, T2 age);
    void showPerson();
};

template <typename T1, typename T2>
Person<T1, T2>::Person(T1 name, T2 age) {
    this->name = name;
    this->age = age;
}

template <typename T1, typename T2>
void Person<T1, T2>:: showPerson() {
    cout<<"name="<<name<<",age="<<age<<endl;
}


#endif /* Person_hpp */
