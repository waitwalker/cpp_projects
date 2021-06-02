//
//  Data.hpp
//  day_04_new
//
//  Created by waitwalker on 2021/6/1.
//

#ifndef Data_hpp
#define Data_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Data {
private:
    int sum;
    
public:
    int num;
    static int data;
    /// const 修饰的静态成员
    static const int age;
    
    Data();
    Data(int n);
    Data(const Data &data);
    
    static void showDesc();
    ~Data();
};

#endif /* Data_hpp */
