//
//  Fun.cpp
//  operator
//
//  Created by waitwalker on 2021/6/7.
//

#include "Fun.hpp"

int Fun:: my_add(int x, int y) {
    return x + y;
}

int Fun:: operator()(int x, int y) {
    return x + y;
}
