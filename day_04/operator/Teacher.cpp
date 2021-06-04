//
//  Teacher.cpp
//  operator
//
//  Created by waitwalker on 2021/6/4.
//

#include "Teacher.hpp"
Teacher::Teacher(){
    cout<<"无参数构造"<<endl;
}

Teacher::Teacher(int a, int b){
    cout<<"有参数构造"<<endl;
    this->a = a;
    this->b = b;
}

Teacher::Teacher(const Teacher &teacher){
    cout<<"拷贝构造"<<endl;
}

Teacher::~Teacher(){
    cout<<"析构函数"<<endl;
}


void Teacher:: showTeacher() {
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
}
