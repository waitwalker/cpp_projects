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
};

#endif /* MyArray_hpp */

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
