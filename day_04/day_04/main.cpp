//
//  main.cpp
//  day_04
//
//  Created by waitwalker on 2021/5/31.
//

#include <iostream>
#include "Data.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    Data data((char*)"lucy",20);
    
    data.showData();
    
    Data data2 = data;
    
    cout << "Hello, World!\n";
    return 0;
}
