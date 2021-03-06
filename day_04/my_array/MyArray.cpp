//
//  MyArray.cpp
//  my_array
//
//  Created by waitwalker on 2021/6/3.
//

#include "MyArray.hpp"

MyArray::MyArray() {
    cout<<"MyArray无参数构造"<<endl;
    this->capacity = 100;
    this->size = 0;
    this->addr = new int[this->capacity];
}

MyArray::MyArray(int capacity) {
    this->capacity = capacity;
    this->size = 0;
    this->addr = new int[capacity];
}

MyArray::MyArray(const MyArray &array) {
    
}

void MyArray::puashBack(int data) {
    if (this->size >= this->capacity) {
        cout<<"数组已满"<<endl;
        return;
    }
    
    /// 第n个元素位置
    this->addr[this->size] = data;
    /// 位置往后移一位
    this->size++;
}

MyArray::~MyArray() {
    if (this->addr != NULL) {
        delete [] this->addr;
        this->addr = NULL;
    }
}

int MyArray:: getData(int pos) {
    if (pos >= this->size || pos < 0) {
        cout<<"位置索引无效"<<endl;
        return -1;
    }
    
    return this->addr[pos];
}


void MyArray:: setData(int pos, int data) {
    if (pos >= this->size || pos < 0) {
        cout<<"位置索引无效"<<endl;
        return;
    }
    
    this->addr[pos] = data;
}

int MyArray:: getCapacity() {
    return this->capacity;
}


int MyArray:: getSize() {
    return this->size;
}

void MyArray:: printMyArray() {
    if (this->getSize() <= 0) {
        cout<<"数组元素为空"<<endl;
        return;
    }
    
    for (int i = 0; i < this->getSize(); i++) {
        cout<<"当前元素:"<<this->addr[i]<<endl;
    }
}
