//
//  main.cpp
//  predicate
//
//  Created by waitwalker on 2021/6/17.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool greaterThan(int value) {
    return value > 25;
}

class MyGreater {
    
    
public:
    bool operator()(int val) {
        return val > 30;
    }
};

void test1() {
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    for_each(v.begin(), v.end(), [](int value){
        cout<<"元素:"<<value<<" ";
    });
    cout<<endl;
    
    // 普通函数完成
    vector<int>::iterator it = find_if(v.begin(), v.end(), greaterThan);
    cout<<"找到第一个大于大于的元素:"<<*it<<endl;
    
    vector<int>::iterator it2 = find_if(v.begin(), v.end(), MyGreater());
    cout<<"找到第一个大于大于的元素:"<<*it2<<endl;
}

bool myGreater2(int value1, int value2) {
    return value1 > value2;
}

class MyGreater3 {
    
    
public:
    bool operator()(int v1, int v2){
        return v1 < v2;
    }
};

void test2() {
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    sort(v.begin(), v.end(), myGreater2);
    for_each(v.begin(), v.end(), [](int value){
        cout<<"元素:"<<value<<" ";
    });
    cout<<endl;
    
    sort(v.begin(), v.end(), MyGreater3());
    for_each(v.begin(), v.end(), [](int value){
        cout<<"元素:"<<value<<" ";
    });
    cout<<endl;
}

/// 内建函数对象
void test3() {
    // 加法函数对象
    plus<int> p;
    cout<<p(10,20)<<endl;
    
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    
    // 系统内建的函数对象
    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(), [](int value){
        cout<<"元素:"<<value<<" ";
    });
}

void myPrint(int value, int v2) {
    cout<<value+v2<<endl;
}

// 2 继承binary_function
class MyPrinter:public binary_function<int, int, void> {
        
    
public:
    void operator()(int value) const{
        cout<<value<<endl;
    }
};

void test4() {
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    //for_each(v.begin(), v.end(), myPrint);
    for_each(v.begin(), v.end(), binder2nd<int>(MyPrinter(),1000));
}

int main(int argc, const char * argv[]) {
    //test1();
    //test2();
    //test3();
    test4();
    return 0;
}
