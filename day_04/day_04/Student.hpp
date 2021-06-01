//
//  Student.hpp
//  day_04
//
//  Created by waitwalker on 2021/6/1.
//

#ifndef Student_hpp
#define Student_hpp
#include <iostream>


#include <stdio.h>

using namespace std;

class Student {
private:
    int m_num;
    
public:
    Student();
    Student(int a);
    Student(const Student &stu);
    ~Student();
};


#endif /* Student_hpp */
