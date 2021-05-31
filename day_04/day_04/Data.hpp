//
//  Data.hpp
//  day_04
//
//  Created by waitwalker on 2021/5/31.
//

#ifndef Data_hpp
#define Data_hpp

#include <iostream>

#include <stdio.h>

using namespace std;

class Data {
        
    
public:
    int num;
    char *name;
    Data();
    Data(char *na, int nu);
    Data(const Data &ob);
    void showData();
    ~Data();
};

#endif /* Data_hpp */
