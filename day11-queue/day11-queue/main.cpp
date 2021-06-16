//
//  main.cpp
//  day11-queue
//
//  Created by waitwalker on 2021/6/16.
//

#include <iostream>
#include <queue>
using namespace std;

void test1() {
    queue<int> que;
    que.push(10);
    que.push(20);
    que.push(30);
    
    cout<<"尾元素:"<<que.back()<<endl;
    cout<<"首元素:"<<que.front()<<endl;
    
    while (!que.empty()) {
        cout<<"首元素:"<<que.front()<<endl;
        // 出队操作
        que.pop();
    }}

int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
