//
//  main.cpp
//  operator
//
//  Created by waitwalker on 2021/6/4.
//

#include <iostream>
#include "Person.hpp"

using namespace std;

/// 全局函数作为友元 完成运算符重载
ostream& operator<<(ostream &out, Person &per){
    out<<per.name<<per.num<<endl;
    return out;
}

/// 重载加法
Person operator+(Person &ob1, Person &ob2) {
    char *name = new char[strlen(ob1.name) + strlen(ob2.name) + 1];
    strcpy(name, ob1.name);
    strcat(name, ob2.name);
    
    Person tmp(name, ob1.num + ob2.num);
    if (name != NULL) {
        delete [] name;
        name = NULL;
    }
    return tmp;
}

void test01() {
    Person ob1((char *)"lucy",18);
    //ob1.printPerson();
    /// 方法1
    //operator<<(cout, ob1);
    
    /// 方法2
    cout<<ob1<<endl;///等价于 operator<<(cout,ob1);
}

void test02() {
    Person ob1((char *)"lucy",18);
    Person ob2((char *)"bob",19);
    cout<<ob1<<endl;
    cout<<ob2<<endl;
    
    Person ob3 = ob1 + ob2;
    
    cout<<ob3<<endl;
}

int main(int argc, const char * argv[]) {
    
    test02();
    
    std::cout << "Hello, World!\n";
    return 0;
}
