//
//  MyArray.hpp
//  my_array
//
//  Created by waitwalker on 2021/6/3.
//

#ifndef MyArray_hpp
#define MyArray_hpp

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class MyArray {
private:
    /// 数组总容量
    int capacity;
    /// 数组实际存放的元素个数
    int size;
    /// 数组首元素地址
    int *addr;
    
public:
    MyArray();
    MyArray(int capacity);
    MyArray(const MyArray &array);
    
    /// 往数组尾部插入数据
    void puashBack(int data);
    
    /// 获取当前位置的数组
    int getData(int pos);
    
    /// 修改指定位置数据
    void setData(int pos, int data);
    ~MyArray();
};

#endif /* MyArray_hpp */
