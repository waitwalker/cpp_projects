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
    /// 全局友元函数 重载输出&输入运算符
    friend ostream& operator<<(ostream &out, MyString &ob);
    friend istream& operator>>(istream &in, MyString &ob);
private:
    int size;
    char *str;
    
public:
    /// 构造函数
    MyString();
    MyString(char *str);
    MyString(const MyString &str);
    
    /// 获取字符串大小
    int getSize();
    
    /// 重载[] 根据index获取值 返回引用 因为支持修改
    char& operator[](int index);
    
    /// 重载赋值运算符 参数是对象
    MyString operator=(const MyString &ob);
    
    /// 重载赋值运算符 参数是字符串
    MyString operator=(const char *str);
    /// 析构函数
    ~MyString();
};

#endif /* MyString_hpp */
