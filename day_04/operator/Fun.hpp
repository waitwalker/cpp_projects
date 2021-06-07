//
//  Fun.hpp
//  operator
//
//  Created by waitwalker on 2021/6/7.
//

#ifndef Fun_hpp
#define Fun_hpp

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Fun {
    
    
public:
    int my_add(int x, int y);
    /// 重载小括号  第一个小括号是重载的  第二个是传参的
    int operator()(int x, int y);
};

#endif /* Fun_hpp */
