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

int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
