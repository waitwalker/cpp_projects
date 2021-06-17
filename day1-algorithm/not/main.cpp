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

int main(int argc, const char * argv[]) {
    
    test1();
    
    return 0;
}
