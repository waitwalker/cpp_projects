//
//  main.cpp
//  day08
//
//  Created by waitwalker on 2021/6/10.
//

#include <iostream>

using namespace std;

void swapInt(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swapChar(char &a, char &b) {
    char tmp = a;
    a = b;
    b = tmp;
}

/// 函数模板
template <typename T>
void mySwap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, const char * argv[]) {
    
    int a = 100;
    int b = 200;
    cout<<"a:"<<a<<"\nb:"<<b<<endl;
    swapInt(a, b);
    cout<<"a:"<<a<<"\nb:"<<b<<endl;
    
    char c = 'c';
    char d = 'd';
    cout<<"c:"<<c<<"\nd:"<<d<<endl;
    swapChar(c, d);
    cout<<"c:"<<c<<"\nd:"<<d<<endl;
    
    mySwap<char>(c, d);
    cout<<"c:"<<c<<"\nd:"<<d<<endl;
    std::cout << "Hello, World!\n";
    return 0;
}
