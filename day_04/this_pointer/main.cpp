//
//  main.cpp
//  this_pointer
//
//  Created by waitwalker on 2021/6/2.
//

#include <iostream>
#include "Data.hpp"

int main(int argc, const char * argv[]) {
    
    Data ob1;
    ob1.setNum(10);
    cout<<"ob1 num:"<<ob1.num<<endl;
    
    Data ob2;
    ob2.setNum(20);
    cout<<"ob2 num:"<<ob2.num<<endl;
    
    Data ob3;
    ob3.setNum(30);
    cout<<"ob3 num:"<<ob3.num<<endl;
    
    ob1.myCout((char *)"张三").myCout((char *)"李四");
    
    std::cout << "Hello, World!\n";
    return 0;
}
