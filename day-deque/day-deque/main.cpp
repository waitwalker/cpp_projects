//
//  main.cpp
//  day-deque
//
//  Created by waitwalker on 2021/6/15.
//

#include <iostream>
#include <deque>
#include <string.h>
using namespace std;

void printDeque(deque<int> &d) {
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
        cout<<"元素:"<<*it<<endl;
    }
}

void test1() {
    deque<int> d;
    d.push_back(1);
    d.push_front(0);
    d.insert(d.begin() + 1, 100);
    d.insert(d.end() - 0, 200);
    d[3] = 300;
    printDeque(d);
    
    deque<int> d1(2,10);
    deque<int> d2(3,22);
    d1.swap(d2);
    printDeque(d1);
    
    
    // 尾部&头部删除
    d.pop_back();
    d.pop_front();
    printDeque(d);
    d.clear();
    printDeque(d);
}

int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
