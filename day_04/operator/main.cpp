//
//  main.cpp
//  operator
//
//  Created by waitwalker on 2021/6/4.
//

#include <iostream>
#include "Person.hpp"

using namespace std;

ostream& operator<<(ostream &out, Person &per){
    out<<per.name<<per.num<<endl;
    return out;
}

int main(int argc, const char * argv[]) {
    Person ob1((char *)"lucy",18);
    //ob1.printPerson();
    /// 方法1
    //operator<<(cout, ob1);
    
    /// 方法2
    cout<<ob1<<endl;///等价于 operator<<(cout,ob1);
    std::cout << "Hello, World!\n";
    return 0;
}
