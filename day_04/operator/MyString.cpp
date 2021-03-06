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

MyString MyString:: operator=(const char *str) {
    /// 首先释放旧值
    if (this->str != NULL) {
        delete [] this->str;
        this->str = NULL;
    }
    
    /// 根据ob中str长度申请空间
    this->str = new char[strlen(str) + 1];
    /// 将ob中的str拷给this->str
    strcpy(this->str, str);
    this->size = (int)strlen(str);
    return *this;
}

MyString& MyString:: operator+(const MyString &ob) {
    
    /// 计算两个待拼接字符串的总长度
    int newSize = this->size + ob.size + 1;
    /// 依据总长度申请空间
    char *tmpStr = new char[newSize];
    
    /// 将tmpStr全部清空
    memset(tmpStr, 0, newSize);
    
    /// 先将this->str拷贝到tmp中取
    strcpy(tmpStr, this->str);
    
    /// 然后将ob.str拼接在后面
    strcat(tmpStr, ob.str);
    
    static MyString newStr(tmpStr);
    if (tmpStr != NULL) {
        delete [] tmpStr;
        tmpStr = NULL;
    }
    return newStr;
}

MyString& MyString:: operator+(const char *str) {
    
    /// 计算两个待拼接字符串的总长度
    int newSize = this->size + (int)strlen(str) + 1;
    /// 依据总长度申请空间
    char *tmpStr = new char[newSize];
    
    /// 将tmpStr全部清空
    memset(tmpStr, 0, newSize);
    
    /// 先将this->str拷贝到tmp中取
    strcpy(tmpStr, this->str);
    
    /// 然后将ob.str拼接在后面
    strcat(tmpStr, str);
    
    static MyString newStr(tmpStr);
    if (tmpStr != NULL) {
        delete [] tmpStr;
        tmpStr = NULL;
    }
    return newStr;
}

bool MyString:: operator==(const MyString &ob) {
    return (strcmp(this->str, ob.str) == 0 && this->size == ob.size)? true : false;
}

MyString::~MyString() {
    cout<<"析构函数"<<endl;
    if (this->str != NULL) {
        delete [] this->str;
        this->str = NULL;
    }
}
