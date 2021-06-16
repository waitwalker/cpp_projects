//
//  main.cpp
//  day11-list
//
//  Created by waitwalker on 2021/6/16.
//

#include <iostream>
#include <list>

using namespace std;

void printList(list<int> &L) {
    for (list<int>::iterator it = L.begin(); it != L.end(); it++) {
        cout<<"元素:"<<*it<<" ";
    }
    cout<<endl;
}

void test1() {
    list<int> L;
    L.push_back(10);
    L.push_back(20);
    L.push_front(9);
    printList(L);
    // list迭代器不支持+n操作,但是支持++操作
    list<int>::iterator it = L.begin();
    it++;
    it++;
    L.insert(it, 2, 100);
    printList(L);
    
    //L.remove(100);
    //printList(L);
    //排序
    L.sort();
    printList(L);
}

int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
