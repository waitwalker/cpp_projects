//
//  main.cpp
//  my_array
//
//  Created by waitwalker on 2021/6/3.
//

#include <iostream>
#include "MyArray.hpp"


using namespace std;

int main(int argc, const char * argv[]) {
    
    MyArray arr1;
    
    cout<<"容量:"<<arr1.getCapacity()<<endl;
    cout<<"大小:"<<arr1.getSize()<<endl;
    
    MyArray arr2(50);
    
    
    for (int i = 0; i < 20; i++) {
        arr2.puashBack(i);
    }
    
    cout<<"容量:"<<arr2.getCapacity()<<endl;
    cout<<"大小:"<<arr2.getSize()<<endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
