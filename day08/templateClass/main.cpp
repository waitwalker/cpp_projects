//
//  main.cpp
//  templateClass
//
//  Created by waitwalker on 2021/6/10.
//

#include <iostream>
#include "Person.hpp"
#include "MyArray.hpp"

using namespace std;

/// 模板类 泛型编程
template <typename T1, typename T2>
class TemplateClassName {
private:
    T1 name;
    T2 num;
    
public:
    TemplateClassName(T1 name, T2 num) {
        this->name = name;
        this->num = num;
    }
    
    ~TemplateClassName() {
    }
    
    void showData() {
        cout<<"name="<<this->name<<",num="<<this->num<<endl;
    }
};


/// 类模板作为子类的父类,子类在实现是必须指定类型
class Son:public TemplateClassName<string, int> {
    
private:
    string name;
    int num;
public:
    Son(string name, int num):TemplateClassName(name,num) {
        this->name = name;
        this->num = num;
    }
};

void test01() {
    TemplateClassName<string, int> ob1("zhangsan",20);
    ob1.showData();
    
    
    TemplateClassName<int, string> ob2(12, "kk");
    ob2.showData();
    
    Son son("张三",21);
    son.showData();
}

template <typename T1, typename T2>
class TemplateClass {
    
    
public:
    T1 name;
    T2 age;
    TemplateClass(T1 name, T2 age);
    void showDatas();
};

template <typename T1, typename T2>
TemplateClass<T1, T2>::TemplateClass(T1 name, T2 age) {
    this->name = name;
    this->age = age;
}

template <typename T1, typename T2>
void TemplateClass<T1, T2>::showDatas() {
    cout<<"name="<<name<<",age="<<age<<endl;
}

void test02() {
    /// 这里报错,不识别.类模板会经过两次编译
    /// 第一次:类模板本身编译
    /// 第二次:类模板函数调用的时候编译
    Person<string, int> ob1("张三", 12);
    ob1.showPerson();
}


int main(int argc, const char * argv[]) {
    //test01();
    
    MyArray<char> ob(10);
    ob.pushBack('a');
    ob.pushBack('b');
    ob.pushBack('c');
    ob.pushBack('d');
    ob.pushBack('e');
    ob.printArray();
    
    
    MyArray<int> ob2(10);
    ob2.pushBack(1);
    ob2.pushBack(2);
    ob2.pushBack(3);
    ob2.pushBack(4);
    ob2.pushBack(5);
    ob2.printArray();
    
    std::cout << "Hello, World!\n";
    return 0;
}
