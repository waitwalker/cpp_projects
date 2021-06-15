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
    printDeque(d);
}

int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
