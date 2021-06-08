//
//  MyString.hpp
//  operator
//
//  Created by waitwalker on 2021/6/8.
//

#ifndef MyString_hpp
#define MyString_hpp

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class MyString {
private:
    int size;
    char *str;
    
public:
    /// 构造函数
    MyString();
    MyString(char *str, int size);
    MyString(const MyString &str);
    
    /// 析构函数
    ~MyString();
};

#endif /* MyString_hpp */
