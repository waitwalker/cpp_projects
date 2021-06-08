//
//  Html.hpp
//  day05
//
//  Created by waitwalker on 2021/6/8.
//

#ifndef Html_hpp
#define Html_hpp

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Html {
    
    
public:
    Html();
    Html(const Html &html);
    
    void header();
    
    void leftNavigation();
    ~Html();
};

#endif /* Html_hpp */
