//
//  Student.cpp
//  operator
//
//  Created by waitwalker on 2021/6/4.
//

#include "Student.hpp"
Student::Student() {
    
}

Student::Student(int num) {
    this->num = num;
}

void Student:: showStudent() {
    cout<<"student num:"<<this->num<<endl;
}

Student::Student(const Student &stu) {
    
}

Student::~Student() {
    
}
