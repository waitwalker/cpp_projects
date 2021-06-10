//
//  MyArray.hpp
//  templateClass
//
//  Created by waitwalker on 2021/6/10.
//

#ifndef MyArray_hpp
#define MyArray_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

template <typename T>
class MyArray {
private:
    T *addr;
    int capacity;
    int size;
    
public:
    /// 带参数构造
    MyArray(int capacity);
    
    /// 拷贝构造
    MyArray(const MyArray &ob);
    
    /// 析构函数
    ~MyArray();
    
    /// 尾插法
    void pushBack(const T &val);
};

#endif /* MyArray_hpp */

/// 类模板成员函数的实现
template <typename T>
MyArray<T>::MyArray(int capacity) {
    this->addr = new T[capacity];
    this->capacity = capacity;
    this->size = 0;
}

template <typename T>
MyArray<T>::MyArray(const MyArray &ob) {
    this->addr = new T[this->capacity];
    this->capacity = ob.capacity;
    
    for (int i = 0; i < size; i++) {
        this->addr[i] = ob.addr[i];
    }
    this->size = ob.size;
}

template <typename T>
MyArray<T>::~MyArray<T>() {
    if (this->addr != NULL) {
        delete [] addr;
        this->addr = NULL;
    }
}

template <typename T>
void MyArray<T>::pushBack(const T &val) {
    /// size不能超过容量 并且不能小于0
    if (this->size >= 0 && this->size < this->capacity) {
        this->addr[this->size] = val;
    } else {
        cout<<"容器已满"<<endl;
        return;
    }
}
