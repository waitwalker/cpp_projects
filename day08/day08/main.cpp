//
//  main.cpp
//  day08
//
//  Created by waitwalker on 2021/6/10.
//

#include <iostream>

using namespace std;

void mySwap(int &a, int &b) {
    cout<<"调用的是普通"<<endl;
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
    cout<<"调用的是函数模板"<<endl;
    T tmp = a;
    a = b;
    b = tmp;
}

void test01() {
    int a = 100;
    int b = 200;
    cout<<"a:"<<a<<"\nb:"<<b<<endl;
    mySwap(a, b);
    cout<<"a:"<<a<<"\nb:"<<b<<endl;
    
    char c = 'c';
    char d = 'd';
    cout<<"c:"<<c<<"\nd:"<<d<<endl;
    swapChar(c, d);
    cout<<"c:"<<c<<"\nd:"<<d<<endl;
    
    mySwap<char>(c, d);
    cout<<"c:"<<c<<"\nd:"<<d<<endl;
}

template <typename T1> void myPrintArray(T1 &t1, int t2) {
    for (int i = 0; i < t2; i++) {
        cout<<t1[i]<<"  "<<endl;
        cout<<endl;
    }
}

template <typename T>
void mySort(T *arr, int len) {
    for (int i = 0; i < len -1; i++) {
        int min = i;
        for (int j = min + 1; j < len; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        
        if (min != i) {
            T tmp = arr[min];
            arr[min] = arr[i];
            arr[i] = tmp;
        }
    }
    return;
}

class A {
        
    
public:
    
};

class B {
        
    
public:
    int x;
};

int main(int argc, const char * argv[]) {
    
    //test01();
    char str[] = "hello template";
    int strLength = (int)strlen(str);
    
    int arr[] = {24,3,6,7,36,8};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    
    
    A ob1;
    B ob2;
    mySwap(ob1, ob2);
    myPrintArray(str, strLength);
    myPrintArray(arr, arrLength);
    std::cout << "Hello, World!\n";
    mySort(arr, arrLength);
    myPrintArray(arr, arrLength);
    std::cout << "Hello, World!\n";
    return 0;
}
