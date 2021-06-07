//
//  Tool.cpp
//  operator
//
//  Created by waitwalker on 2021/6/7.
//

#include "Tool.hpp"

Tool::Tool() {
    cout<<"Tool无参数构造"<<endl;
}

Tool::Tool(char *name) {
    cout<<"Tool有参数构造"<<endl;
    /// 根据实际传入的参数 给this->name申请空间
    this->name = new char[strlen(name) + 1];
    /// 将name指向的字符串 拷贝到 this->name里面
    strcpy(this->name, name);
}

Tool Tool:: operator=(Tool &tool) {
    cout<<"赋值运算符重载"<<endl;
    
    if (this->name != NULL) {
        /// 如果之前空间存在,先释放
        cout<<"如果之前空间存在,先释放"<<endl;
        delete [] this->name;
        this->name = NULL;
    }
    
    /// 申请空间
    this->name = new char[strlen(tool.name) + 1];
    /// 拷贝内容
    strcpy(this->name, tool.name);
    return *this;
}

Tool::Tool(const Tool &tool) {
    cout<<"Tool拷贝构造"<<endl;
}

Tool::~Tool() {
    cout<<"Tool析构函数"<<endl;
    /// 析构的时候一定要释放申请的空间
    if (this->name != NULL) {
        delete [] this->name;
        this->name = NULL;
    }
}
