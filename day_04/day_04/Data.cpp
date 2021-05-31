//
//  Data.cpp
//  day_04
//
//  Created by waitwalker on 2021/5/31.
//

#include "Data.hpp"

Data::Data(){
    name = NULL;
    num = 0;
    cout<<"构造函数"<<endl;
}

Data::Data(char *na, int nu) {
    cout<<"有参数构造"<<endl;
    name = (char *)calloc(1, strlen(na) + 1);
    if (name == NULL) {
        return;
    }
    strcpy(name, na);
    num = nu;
}

Data::Data(const Data &ob) {
    cout<<"拷贝构造函数"<<endl;
    name = (char *)calloc(1, strlen(ob.name) +1);
    cout<<"空间已被申请"<<endl;
    strcpy(name, ob.name);
    num = ob.num;
}


void Data::showData(){
    cout<<"姓名:"<<name<<"\n num:"<<num<<endl;
}

Data::~Data(){
    cout<<"析构函数"<<endl;
     if (name != NULL) {
        free(name);
        name = NULL;
    }
}
