//
//  Data.hpp
//  this_pointer
//
//  Created by waitwalker on 2021/6/2.
//

#ifndef Data_hpp
#define Data_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Data {
private:
    
public:
    int num;
    Data();
    Data(int nu);
    Data(const Data &data);
    
    void setNum(int nu);
    ~Data();
};

#endif /* Data_hpp */
