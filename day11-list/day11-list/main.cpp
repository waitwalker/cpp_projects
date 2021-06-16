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

class Person {
    
    
public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

void printListPerson(list<Person> &L) {
    for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
        cout<<"name:"<<(*it).name<<", age:"<<(*it).age<<" "<<endl;
    }
    cout<<endl;
}

void test2() {
    list<Person> L;
    L.push_front(Person("张三", 10));
    L.push_back(Person("李四", 11));
    L.push_back(Person("王二", 12));
    printListPerson(L);
}

int main(int argc, const char * argv[]) {
    //test1();
    test2();
    return 0;
}
