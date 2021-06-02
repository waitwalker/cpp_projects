//
//  main.cpp
//  this_pointer
//
//  Created by waitwalker on 2021/6/2.
//

#include <iostream>
#include "Data.hpp"
#include "Room.hpp"

/// 友元基本使用
void test01() {
    
    Room r1 = Room("卧室1111", "客厅1111");
    
    visit(r1);
    
    //cout<<"客厅:"<<r1.sittingRoom<<endl;
    //cout<<"卧室:"<<r1.bedRoom<<endl;
}

int main(int argc, const char * argv[]) {
    
    test01();
    return 0;
    
    
    /// const 修饰对象叫常对象 只能调用常函数
    const Data ob22 = Data(200);
    ob22.setNum(20);
    ob22.myFun();
    return 0;
    
    /// const 修饰成员函数 如果想修改普通成员变量,得用mutable关键字修饰
    Data ob111;
    ob111.setNum(20);
    ob111.myFun();
    
    
    return 0;
    
    /// this 关键字
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
