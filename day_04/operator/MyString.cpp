//
//  MyString.cpp
//  operator
//
//  Created by waitwalker on 2021/6/8.
//

#include "MyString.hpp"

MyString::MyString(){
    cout<<"无参数构造"<<endl;
}

MyString::MyString(char *str) {
    cout<<"有参数构造"<<endl;
    this->str = new char[strlen(str) + 1];
    strcpy(this->str, str);
    this->size = (int)strlen(str);
}

MyString::MyString(const MyString &string) {
    cout<<"拷贝构造"<<endl;
    if (this->str != NULL) {
        delete [] this->str;
        this->str = NULL;
    }
    
    this->str = new char[strlen(string.str) + 1];
    strcpy(this->str, string.str);
    this->size = string.size;
}

MyString::~MyString() {
    cout<<"析构函数"<<endl;
    if (this->str != NULL) {
        delete [] this->str;
        this->str = NULL;
    }
}
