//
//  Person.hpp
//  operator
//
//  Created by waitwalker on 2021/6/4.
//

#ifndef Person_hpp
#define Person_hpp

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Person {
    /// 友元函数
    friend ostream& operator<<(ostream &out, Person &per);
    
    friend Person operator+(Person &ob1, Person &ob2);
private:
    char *name;
    int num;
    
public:
    Person();
    Person(char *name, int num);
    Person(const Person &per);
    
    void printPerson();
    ~Person();
};

#endif /* Person_hpp */
