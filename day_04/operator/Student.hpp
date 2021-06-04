//
//  Student.hpp
//  operator
//
//  Created by waitwalker on 2021/6/4.
//

#ifndef Student_hpp
#define Student_hpp
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Student {
private:
    int num;
    
public:
    Student *pStudent;
    Student();
    Student(Student *p);
    Student(int num);
    Student(const Student &stu);
    void showStudent();
    ~Student();
};

#endif /* Student_hpp */
