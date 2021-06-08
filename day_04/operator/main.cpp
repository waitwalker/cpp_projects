//
//  main.cpp
//  operator
//
//  Created by waitwalker on 2021/6/4.
//

#include <iostream>
//#include "Person.hpp"
//#include "Data.hpp"
//#include "Student.hpp"
//#include "Teacher.hpp"
//#include "Tool.hpp"
//#include "Fun.hpp"
#include "MyString.hpp"


using namespace std;


/// 全局友元函数
ostream& operator<<(ostream &out, MyString &ob) {
    cout<<"String:"<<ob.str<<"\nSize:"<<ob.size<<endl;
    return out;
}

/// 给对象输入数据
istream& operator>>(istream &in, MyString &ob) {
    
    cout<<"请输入字符:"<<endl;
    
    /// 输入之前要将原有数据擦除
    if (ob.str != NULL) {
        delete [] ob.str;
        ob.str = NULL;
    }
    
    /// 获取键盘输入
    char buf[1024] = "";
    
    /// 先得到键盘输入数据 然后根据buf的大小开辟空间
    in >> buf;
    ob.str = new char[strlen(buf) + 1];
    strcpy(ob.str, buf);
    ob.size = (int)strlen(buf);
    return in;
}

/// 全局函数作为友元 完成运算符重载
//ostream& operator<<(ostream &out, Person &per){
//    out<<per.name<<per.num<<endl;
//    return out;
//}

/// 重载加法
//Person operator+(Person &ob1, Person &ob2) {
//    char *name = new char[strlen(ob1.name) + strlen(ob2.name) + 1];
//    strcpy(name, ob1.name);
//    strcat(name, ob2.name);
//    
//    Person tmp(name, ob1.num + ob2.num);
//    if (name != NULL) {
//        delete [] name;
//        name = NULL;
//    }
//    return tmp;
//}

//void test01() {
//    Person ob1((char *)"lucy",18);
//    //ob1.printPerson();
//    /// 方法1
//    //operator<<(cout, ob1);
//
//    /// 方法2
//    cout<<ob1<<endl;///等价于 operator<<(cout,ob1);
//}
//
//void test02() {
//    Person ob1((char *)"lucy",18);
//    Person ob2((char *)"bob",19);
//    cout<<ob1<<endl;
//    cout<<ob2<<endl;
//
//    Person ob3 = ob1 + ob2;
//
//    cout<<ob3<<endl;
//}
//
//void test03() {
//    Person ob1((char *)"lucy",18);
//    Person ob2((char *)"bob",19);
//    cout<<ob1<<endl;
//    cout<<ob2<<endl;
//
//    Person ob3 = ob1.operator+(ob2);
//
//    cout<<ob3<<endl;
//}
//
//void test04(){
//    Data ob1(10,20);
//    ob1.showData();
//    ++ob1;
//    ob1.showData();
//    --ob1;
//
//
//    Data ob2(100, 200);
//
//    ob2++;
//    ob2.showData();
//    ob2--;
//}
//
//
//void test05() {
//    Student student(new Student(200));
//    student.pStudent->showStudent();
//}
//
//void test06() {
//    Teacher ob1(10,20);
//    ob1.showTeacher();
//
//    Teacher ob2 = ob1;///旧对象给新对象进行初始化 调用的是拷贝构造
//    ob2.showTeacher();
//
//    /// 有参构造会屏蔽有参数构造
//    Teacher ob3;
//    ob3 = ob1;/// 赋值运算
//    ob3.showTeacher();
//}
//
//void test07() {
//    Tool ob1((char *)"zhangsan");
//    /// 拷贝构造 实例化ob2
//    Tool ob2((char *)"Bob");
//
//    ob2 = ob1;
//}
//
//void test08() {
//    Tool ob1((char *)"lucy");
//    Tool ob2((char *)"lucy");
//    Tool ob3((char *)"bob");
//
//    if (ob1 == ob2) {
//        cout<<"ob1 和 ob2相等"<<endl;
//    }
//
//    if (ob1 == ob3) {
//        cout<<"ob1 和 ob3相等"<<endl;
//    } else {
//        cout<<"ob1 和 ob3不相等"<<endl;
//    }
//}
//
///// 重载小括号 也叫仿函数
//void test09() {
//    Fun fun;
//
//
//    cout<<"运算结果:"<<fun.my_add(100, 200)<<endl;
//    cout<<"重载小括号运算结果:"<<fun.operator()(100, 200)<<endl;
//    /// 简化 此处fun()不是函数名,只是上面的简化操作,仿函数
//    cout<<"重载小括号运算结果:"<<fun(100, 200)<<endl;
//    /// 匿名对象
//    cout<<"重载小括号运算结果:"<<Fun()(100, 200)<<endl;
//}

/// 综合练习
void test10() {
    MyString ob1((char *)"hehe");
    /// 全局友元函数实现自定义输出
    cout<<ob1<<endl;
    /// 获取键盘输入&将输入的赋给ob1
    cin>>ob1;
    cout<<ob1<<endl;
    cout<<ob1[2]<<endl;
    ob1[2] = 'g';
    cout<<ob1[2]<<endl;
    
    MyString ob2;
    ob2 = ob1;
    cout<<"ob2:"<<ob2<<endl;
    
    ob2 = "张三";
    cout<<"ob2:"<<ob2<<endl;
    
    MyString ob3((char *)"你好,");
    MyString ob4((char *)"北京");
    
    cout<<ob3 + ob4 << endl;
}

int main(int argc, const char * argv[]) {
    //test01();
    //test02();
    //test03();
    //test04();
    //test05();
    //test06();
    //test07();
    //test08();
    //test09();
    test10();
    
    std::cout << "Hello, World!\n";
    return 0;
}
