//
//  Data.cpp
//  operator
//
//  Created by waitwalker on 2021/6/4.
//

#include "Data.hpp"


Data::Data(){
    
}

Data::Data(int a, int b) {
    this->a = a;
    this->b = b;
}

Data::Data(const Data &data) {
    
}

void Data:: showData() {
    cout<<"a:"<<this->a<<"\nb:"<<this->b<<endl;
}

Data::~Data(){}
