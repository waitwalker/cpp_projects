//
//  Person.hpp
//  day_04_new
//
//  Created by waitwalker on 2021/6/1.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Person {
private:
    char name[32];
    int num;
    
public:
    Person();
    Person(char *na, int nu);
    Person(const Person &per);
    void showDesc();
    ~Person();
};

#endif /* Person_hpp */
