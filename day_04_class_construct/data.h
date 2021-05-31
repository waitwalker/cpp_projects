#ifndef DATA_H
#define DATA_H
#include <iostream>

using namespace std;

class Data
{
public:
    int num;
//    Data();
    Data(int n);
    ~Data();
    //Data(const Data &ob);
};

inline Data::Data(int n)
{
    cout<<"new construction"<<endl;
    num = n;
}




#endif // DATA_H
