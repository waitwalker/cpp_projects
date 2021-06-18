//
//  main.cpp
//  transform
//
//  Created by waitwalker on 2021/6/18.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



void test1() {
    
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    
    vector<int> v2;
    // 将v2的大小置为和v1相同
    v2.resize(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), [](int va){
        cout<<"搬运的元素:"<<va<<" ";
        return va + 10;
    });
    cout<<endl;
    
    for_each(v2.begin(), v2.end(), [](int value){
        cout<<"元素:"<<value<<" ";
    });
    cout<<endl;
    
}

/// 查找find
void test2() {
    vector<int> v;
    v.push_back(12);
    v.push_back(234);
    v.push_back(4);
    v.push_back(67);
    v.push_back(2);
    v.push_back(432);
    v.push_back(23);
    v.push_back(45);
    v.push_back(6);
    v.push_back(78);
    vector<int>::iterator it = find(v.begin(), v.end(), 23);
    cout<<"查找到的元素:"<<*it<<endl;
}

class Person {
    
    
public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    
    bool operator==(const Person &ob1){
        return ob1.name == this->name && ob1.age == this->age;
    }
};

void test3() {
    vector<Person> v;
    v.push_back(Person("张三", 12));
    v.push_back(Person("张1", 13));
    v.push_back(Person("张2", 14));
    v.push_back(Person("张5", 15));
    // find查找自定义类型数据 需要重载赋值相等运算符
    Person tmp("张三",12);
    vector<Person>::iterator it = find(v.begin(), v.end(), tmp);
    cout<<"查找到的元素:"<<(*it).name<<endl;
    
}

bool myGrater(int value) {
    return value > 30;
}

class Grater {
    
    
public:
    bool operator()(int value){
        return value > 30;
    }
};

void test4() {
    vector<int> v;
    v.push_back(12);
    v.push_back(234);
    v.push_back(4);
    v.push_back(67);
    v.push_back(2);
    v.push_back(432);
    v.push_back(23);
    v.push_back(45);
    v.push_back(6);
    v.push_back(78);
    
    // 普通函数方式实现
    vector<int>::iterator it = find_if(v.begin(), v.end(), myGrater);
    cout<<"查找到的元素:"<<*it<<endl;
    
    // 通过函数对象(仿函数)实现
    vector<int>::iterator it1 = find_if(v.begin(), v.end(), Grater());
    cout<<"查找到的元素:"<<*it1<<endl;
}

void test5() {
    vector<int> v;
    v.push_back(12);
    v.push_back(234);
    v.push_back(4);
    v.push_back(67);
    v.push_back(2);
    v.push_back(432);
    v.push_back(6);
    v.push_back(23);
    v.push_back(45);
    v.push_back(6);
    
    v.push_back(78);
    
    // 查找相邻重复元素
    vector<int>::iterator it = adjacent_find(v.begin(), v.end());
    cout<<"查找到的元素:"<<*it<<endl;
    
    vector<Person> v1;
    v1.push_back(Person("张三", 12));
    v1.push_back(Person("张1", 13));
    v1.push_back(Person("张2", 14));
    v1.push_back(Person("张5", 15));
    v1.push_back(Person("张5", 15));
    // find查找自定义类型数据 需要重载赋值相等运算符
    Person tmp("张三",12);
    vector<Person>::iterator it1 = adjacent_find(v1.begin(), v1.end());
    cout<<"查找到的元素:"<<(*it1).name<<endl;
}

/// 二分法查找
void test6(){
    vector<int> v;
    v.push_back(12);
    v.push_back(13);
    v.push_back(124);
    bool ret = binary_search(v.begin(), v.end(), 67);
    cout<<"查找结果:"<<ret<<endl;
}

void test7() {
    vector<int> v;
    v.push_back(12);
    v.push_back(13);
    v.push_back(124);
    size_t num = count(v.begin(), v.end(), 12);
    cout<<"统计元素出现个数:"<<num<<endl;
}

int main(int argc, const char * argv[]) {
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
    test7();
    return 0;
}

