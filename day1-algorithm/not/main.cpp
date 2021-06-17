//
//  main.cpp
//  not
//
//  Created by waitwalker on 2021/6/17.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class MyGreater:public unary_function<int, bool> {
    
    
public:
    bool operator()(int value) const{
        return value > 3;
    }
};

void test1() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    // 取反适配器
    vector<int>::iterator it = find_if(v.begin(), v.end(), not1(MyGreater()));
    cout<<*it<<endl;
}

class MyGreater2 {
    
    
public:
    bool operator()(int v1, int v2) {
        return v1 > v2;
    }
};

void test2() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for_each(v.begin(), v.end(), [](int value){
        cout<<value<<" ";
    });
    cout<<endl;
    sort(v.begin(), v.end(), MyGreater2());
    for_each(v.begin(), v.end(), [](int value){
        cout<<value<<" ";
    });
    cout<<endl;
}

int main(int argc, const char * argv[]) {
    
    //test1();
    test2();
    
    return 0;
}
