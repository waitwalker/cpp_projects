//
//  main.cpp
//  templateClass
//
//  Created by waitwalker on 2021/6/10.
//

#include <iostream>

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
    void showData();
};

template <typename T1, typename T2>
TemplateClass<T1, T2>::TemplateClass(T1 name, T2 age) {
    
}


int main(int argc, const char * argv[]) {
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
