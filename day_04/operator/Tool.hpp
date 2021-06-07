//
//  Tool.hpp
//  operator
//
//  Created by waitwalker on 2021/6/7.
//

#ifndef Tool_hpp
#define Tool_hpp

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Tool {
private:
    char *name;
    
public:
    Tool();
    Tool(char *name);
    
    Tool(const Tool &tool);
    ~Tool();
};

#endif /* Tool_hpp */
