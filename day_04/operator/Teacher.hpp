//
//  Teacher.hpp
//  operator
//
//  Created by waitwalker on 2021/6/4.
//

#ifndef Teacher_hpp
#define Teacher_hpp

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Teacher {
private:
    int a, b;
    
public:
    Teacher();
    Teacher(int a, int b);
    Teacher(const Teacher &teacher);
    void showTeacher();
    ~Teacher();
};

#endif /* Teacher_hpp */
