//
//  Data.cpp
//  day_04_new
//
//  Created by waitwalker on 2021/6/1.
//

#include "Data.hpp"

/// 类外定义 & 初始化
int Data::data = 100;

Data::Data(){
    cout<<"Data无参数构造"<<endl;
}

Data::Data(int n):num(n) {
    cout<<"Data有参数构造"<<endl;
}

Data::Data(const Data &data){
    cout<<"Data构造拷贝"<<endl;
}

void Data::showDesc() {
    cout<<"静态成员 函数"<<data<<endl;
}

Data::~Data(){
    cout<<"Data析构函数"<<endl;
}
