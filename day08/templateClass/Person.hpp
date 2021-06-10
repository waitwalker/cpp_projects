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

#endif /* Person_hpp */
