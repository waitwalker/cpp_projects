//
//  main.cpp
//  transform
//
//  Created by waitwalker on 2021/6/18.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



void test1() {
    
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    
    vector<int> v2;
    // 将v2的大小置为和v1相同
    v2.resize(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), [](int va){
        cout<<"搬运的元素:"<<va<<" ";
        return va + 10;
    });
    cout<<endl;
    
    for_each(v2.begin(), v2.end(), [](int value){
        cout<<"元素:"<<value<<" ";
    });
    cout<<endl;
    
}


int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
