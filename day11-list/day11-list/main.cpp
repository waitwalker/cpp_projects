//
//  main.cpp
//  day11-list
//
//  Created by waitwalker on 2021/6/16.
//

#include <iostream>
#include <list>
#include <vector>

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
    
    bool operator==(const Person &ob) {
        if (this->name == ob.name && this->age == ob.age) {
            return true;
        }
        return false;
    }
    
    bool operator<(const Person &ob) {
        if (this->age < ob.age) {
            return true;
        }
        return false;
    }
};

bool myCompare(const Person &ob1, const Person &ob2) {
    if (ob1.age < ob2.age) {
        return true;
    }
    return false;
}

void printListPerson(list<Person> &L) {
    for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
        cout<<"name:"<<(*it).name<<", age:"<<(*it).age<<" "<<endl;
    }
    cout<<endl;
}

void printVectorPerson(vector<Person> &v) {
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
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
    Person tmp("张三", 10);
    //L.remove(tmp);
}

void test3() {
    list<Person> L;
    L.push_front(Person("张三", 18));
    L.push_back(Person("李四", 11));
    L.push_back(Person("王二", 12));
    printListPerson(L);
    L.sort(myCompare);
    printListPerson(L);
}

/// 通过指定函数实现排序规则
void test4() {
    vector<Person> v;
    v.push_back(Person("张三", 10));
    v.push_back(Person("李四", 11));
    v.push_back(Person("王二", 12));
    sort(v.begin(), v.end(), myCompare);
}

class MyCamaprePerson {
    
    
public:
    // 重载小括号的叫做 仿函数
    bool operator()(Person &ob1, Person &ob2) {
        return ob1.age < ob2.age;
    }
};

/// 通过仿函数指定排序规则
void test5() {
    vector<Person> v;
    v.push_back(Person("张三", 20));
    v.push_back(Person("李四", 11));
    v.push_back(Person("王二", 12));
    sort(v.begin(), v.end(), MyCamaprePerson());
    printVectorPerson(v);
}

/// lambda表达式
void test6() {
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<*it<<endl;
    }
    
    for_each(v.begin(), v.end(), [](int value){
        cout<<value<<endl;
    });
}

int main(int argc, const char * argv[]) {
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    test6();
    return 0;
}
