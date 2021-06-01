//
//  main.cpp
//  day_04_new
//
//  Created by waitwalker on 2021/6/1.
//

#include <iostream>
#include "Person.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    /// 通过new 来创建对象数组
    Person *arr3 = new Person[5]{Person("zhangsan1", 10)};
    delete [] arr3;
    return 0;
    
    /// 对象数组 & 初始化对象
    Person arr2[5] = {Person("zhangsan1", 18),Person("zhangsan2", 19)};
    
    return 0;
    
    
    /// new 为对象申请空间&&初始化
    Person *per = new Person((char *)"zhangsan",20);
    per->showDesc();
    delete per;
    return 0;
    
    
    /// 这种初始化方式在qt creator中不行的 错误的,不过在Xcode是可以的
    char *arr1 = new char[32]{"hehe"};
    
    /// 这样初始化才行 或者同 strcpy
    //char *arr1 = new char[32]{'h','e','h','e'};
    cout<<arr1<<endl;
    delete [] arr1;
    
    
    return 0;
    
    ///new 申请int数组空间
    int *arr = NULL;
    arr = new int[5]{1,3,5,72,1};///这里new时进行初始化
    for (int i = 0; i< 5; i++) {
        cout<<arr[i]<<endl;
    }
    /// 如果释放是数组, 需要这样
    delete [] arr;
    return 0;
    
    /// 基本类型使用new 关键字
    int *p = NULL;
    p = new int;
    *p = 100;
    cout<<"*p:"<<*p<<endl;
    delete p;
    
    std::cout << "Hello, World!\n";
    return 0;
}
