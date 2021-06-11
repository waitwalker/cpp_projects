//
//  main.cpp
//  vectorTest1
//
//  Created by waitwalker on 2021/6/11.
//

#include <iostream>
#include <algorithm>
#include <vector>
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

int main(int argc, const char * argv[]) {
    test1();
    std::cout << "Hello, World!\n";
    return 0;
}
