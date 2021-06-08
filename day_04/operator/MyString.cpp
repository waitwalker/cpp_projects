//
//  MyString.cpp
//  operator
//
//  Created by waitwalker on 2021/6/8.
//

#include "MyString.hpp"

MyString::MyString(){
    cout<<"无参数构造"<<endl;
    this->size = 0;
    this->str = NULL;
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

int MyString:: getSize() {
    return this->size;
}

char& MyString:: operator[](int index) {
    if (index >= 0 && index < this->size) {
        return this->str[index];
    } else {
        cout<<"index无效"<<endl;
        char *tmp = (char *)"-1";
        return tmp[0];
    }
}

MyString MyString:: operator=(const MyString &ob) {
    /// 首先释放旧值
    if (this->str != NULL) {
        delete [] this->str;
        this->str = NULL;
    }
    
    /// 根据ob中str长度申请空间
    this->str = new char[strlen(ob.str) + 1];
    /// 将ob中的str拷给this->str
    strcpy(this->str, ob.str);
    this->size = ob.size;
    return *this;
}

MyString::~MyString() {
    cout<<"析构函数"<<endl;
    if (this->str != NULL) {
        delete [] this->str;
        this->str = NULL;
    }
}
