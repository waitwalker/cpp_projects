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

class MyGreater2 : public unary_function<int, bool>{
    
    
public:
    bool operator()(int v1, int v2) const{
        return v1 > v2;
    }
};

void test2() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for_each(v.begin(), v.end(), [](int value){
        cout<<value<<" ";
    });
    cout<<endl;
    sort(v.begin(), v.end(), not2(greater<int>()));
    for_each(v.begin(), v.end(), [](int value){
        cout<<value<<" ";
    });
    cout<<endl;
}

class Person {
    
    
public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    
    void showPerson() {
        cout<<"name = "<<this->name<<", age = "<<this->age<<endl;
    }
};

void myPrintPerson(Person &ob) {
    cout<<"name = "<<ob.name<<", age = "<<ob.age<<endl;
}

void test3() {
    vector<Person> v;
    v.push_back(Person("张三", 12));
    v.push_back(Person("张2", 11));
    v.push_back(Person("张4", 5));
    v.push_back(Person("张5", 18));
    
    // 普通函数遍历
    //for_each(v.begin(), v.end(), myPrintPerson);
    
    // 成员函数
    for_each(v.begin(), v.end(), mem_fun_ref_t<int, void>(&Person::showPerson));
}

int main(int argc, const char * argv[]) {
    
    //test1();
    //test2();
    test3();
    return 0;
}
