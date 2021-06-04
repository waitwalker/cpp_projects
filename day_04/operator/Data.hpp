//
//  Data.hpp
//  operator
//
//  Created by waitwalker on 2021/6/4.
//

#ifndef Data_hpp
#define Data_hpp

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Data {
private:
    int a;
    int b;
    
public:
    Data();
    Data(int a, int b);
    Data(const Data &data);
    void showData();
    /// 前置++ ,先加减后使用
    Data& operator++();
    ~Data();
};

#endif /* Data_hpp */
