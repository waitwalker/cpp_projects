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

Student::Student(Student *p){
    pStudent = p;
}

void Student:: showStudent() {
    cout<<"student num:"<<this->num<<endl;
}

Student::Student(const Student &stu) {
    
}

Student::~Student() {
    cout<<"析构函数"<<endl;
    if (pStudent != NULL) {
        delete pStudent;
        pStudent = NULL;
    }
}

Student* Student:: operator->() {
    return this->pStudent;
}
