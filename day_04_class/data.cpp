#include "data.h"
#include <iostream>

using namespace std;

Data::Data()
{
    cout<<"初始化Data类"<<endl;
}

inline void Data::setNum(int n)
{
    num = n;
}

inline int Data::getNum()
{
    return num;
}
