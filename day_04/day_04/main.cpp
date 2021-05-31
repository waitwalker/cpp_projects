//
//  main.cpp
//  day_04
//
//  Created by waitwalker on 2021/5/31.
//

#include <iostream>
#include "Data.hpp"
#include "Person.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    
    Person person(10,20,30);
    person.showPerson();
    
    
    
    return 0;
    
    // insert code here...
    Data data((char*)"lucy",20);
    
    data.showData();
    
    Data data2 = data;
    
    cout << "Hello, World!\n";
    return 0;
}
