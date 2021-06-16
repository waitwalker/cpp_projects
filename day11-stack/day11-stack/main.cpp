//
//  main.cpp
//  day11-stack
//
//  Created by waitwalker on 2021/6/16.
//

#include <iostream>
#include <stack>
using namespace std;

void test1() {
    stack<int> sta;
    sta.push(1);
    sta.push(2);
    sta.push(3);
    cout<<"size:"<<sta.size()<<endl;
    
    bool isEmpty = sta.empty();
    cout<<"isEmpty:"<<isEmpty<<endl;
}

int main(int argc, const char * argv[]) {
    test1();
    
    return 0;
}
