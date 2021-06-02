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
    mutable int num;
    Data();
    Data(int nu);
    Data(const Data &data);
    
    Data& myCout(char *name);
    
    void setNum(int num);
    
    void myFun() const;
    ~Data();
};

#endif /* Data_hpp */
