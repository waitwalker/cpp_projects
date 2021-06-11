//
//  main.cpp
//  vectorTest1
//
//  Created by waitwalker on 2021/6/11.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
    
    
public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

void myPrint(Person &per) {
    cout<<"name = "<<per.name<<",age = "<<per.age<<endl;
}

// 容器存放自定义数据类型
void test1() {
    Person ob1("张1",11);
    Person ob2("张2",12);
    Person ob3("张3",13);
    Person ob4("张4",14);
    
    vector<Person> vec;
    vec.push_back(ob1);
    vec.push_back(ob2);
    vec.push_back(ob3);
    vec.push_back(ob4);
    
    for_each(vec.begin(), vec.end(), myPrint);
}

// 容器嵌套
void test2() {
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(300);
    
    v3.push_back(1000);
    v3.push_back(2000);
    v3.push_back(3000);
    
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    
    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
        for (vector<int>::iterator tmpIt = (*it).begin(); (*it).begin() != (*it).end(); tmpIt++) {
            cout<<*tmpIt<<endl;
        }
    }
}

int main(int argc, const char * argv[]) {
    //test1();
    
    test2();
    std::cout << "Hello, World!\n";
    return 0;
}
