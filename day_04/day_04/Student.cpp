//
//  Student.cpp
//  day_04
//
//  Created by waitwalker on 2021/6/1.
//

#include "Student.hpp"

Student::Student(){
    cout<<"Student无参数构造"<<endl;
}

Student::Student(int a):m_num(a) {
    cout<<"Student有参数构造"<<endl;
}

Student::Student(const Student &stu) {
    cout<<"Student构造拷贝"<<endl;
}

Student::~Student(){
    cout<<"Student析构函数"<<endl;
}

