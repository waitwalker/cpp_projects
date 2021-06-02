//
//  Data.cpp
//  this_pointer
//
//  Created by waitwalker on 2021/6/2.
//

#include "Data.hpp"

Data::Data() {
    cout<<"Data无参数构造"<<endl;
}

Data::Data(int nu):num(nu) {
    cout<<"Data有参数构造"<<endl;
}

Data& Data::myCout(char *name) {
    cout<<name;
    return * this;
}

void Data::setNum(int num) {
    this->num = num;
}

Data::Data(const Data &data) {
    cout<<"Data拷贝构造"<<endl;
}

Data::~Data() {
    cout<<"Data析构函数"<<endl;
}
