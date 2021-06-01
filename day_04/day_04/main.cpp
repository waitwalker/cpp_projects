//
//  main.cpp
//  day_04
//
//  Created by waitwalker on 2021/5/31.
//

#include <iostream>
#include "Data.hpp"
#include "Person.hpp"
#include "Student.hpp"


using namespace std;


class A {
private:
    int m_a;
    
public:
    A(){
        cout<<"A无参数构造"<<endl;
    }
    A(int a) {
        m_a = a;
        cout<<"A有参数构造"<<endl;
    }
    ~A(){
        cout<<"A析构函数"<<endl;
    }
};

class B {
private:
    int m_b;
    
public:
    B(){
        cout<<"B无参数构造"<<endl;
    }
    B(int b) {
        m_b = b;
        cout<<"B有参数构造"<<endl;
    }
    ~B(){
        cout<<"B析构函数"<<endl;
    }
};

class DataSource {
private:
    A oba;
    B obb;
    int data;
    
public:
    DataSource(){
        cout<<"DataSource无参数构造"<<endl;
    }
    
    DataSource(int a, int b, int c):oba(a),obb(b),data(c){
        //data = c;
        cout<<"DataSource有参数构造"<<endl;
    }
    
    ~DataSource(){
        cout<<"DataSource析构函数"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    
    /// 隐式转换构造
    Student stu = 10;
    
    
    return 0;
    
    
    //DataSource ob1;
    DataSource ob2(10,20, 30);
    
    
    return 0;
    
    /// 初始化列表
    Person person(10,20,30);
    person.showPerson();
    
    
    
    return 0;
    
    // insert code here...
    Data data((char*)"lucy",20);
    
    data.showData();
    
    Data data2 = data;
    
    cout << "Hello, World!\n";
    return 0;
}
