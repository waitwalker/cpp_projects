//
//  Person.cpp
//  day_04_new
//
//  Created by waitwalker on 2021/6/1.
//

#include "Person.hpp"

Person::Person(){
    cout<<"Person无参数构造"<<endl;
}

Person::Person(char *na, int nu) {
    cout<<"Person有参数构造"<<endl;
    strcpy(name, na);
    num = nu;
}

Person::Person(const Person &per) {
    cout<<"Person拷贝构造"<<endl;
}
void Person::showDesc() {
    cout<<"name:"<<name<<"\n"<<"num:"<<num<<endl;
}

Person::~Person(){
    cout<<"Person析构函数"<<endl;
}
