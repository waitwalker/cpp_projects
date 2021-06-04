//
//  Person.cpp
//  operator
//
//  Created by waitwalker on 2021/6/4.
//

#include "Person.hpp"

Person::Person(){
    
}

Person::Person(char *name, int num){
    /// 如果是指针 构造的时候一定要为其开辟空间
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->num = num;
}

void Person:: printPerson() {
    cout<<"姓名:"<<this->name<<"\n学号:"<<this->num<<endl;
}

Person::Person(const Person &per){
    
}

Person::~Person(){
    if (this->name != NULL) {
        delete [] this->name;
        this->name = NULL;
    }
}
