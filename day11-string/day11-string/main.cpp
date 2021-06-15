//
//  main.cpp
//  day11-string
//
//  Created by waitwalker on 2021/6/11.
//

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

void test1() {
    string str1("hello ");
    cout<<str1<<endl;
    
    string st2 = str1;
    cout<<st2<<endl;
    
    string str3;
    str3 = "1szjk";
    cout<<str3<<endl;
    
    string str4 = str3.assign("123456",2,3);
    cout<<str4<<endl;
}

void test2() {
    string str1 = "hello string";
    cout<<str1[1]<<endl;
    str1.at(1) = 'E';
    cout<<str1[1]<<endl;
    str1[1]= 'X';
    cout<<str1<<endl;
    str1[20]='G';
    cout<<str1<<endl;
}

void test3() {
    string str1 = "hello";
    string str2 = " world";
    str1+=str2;
    cout<<str1<<endl;
    
    str1+="你好";
    cout<<str1<<endl;
    
    str1.append("张三");
    cout<<str1<<endl;
    
    str1.append("12", 2);
    cout<<str1<<endl;
    
    string str3 = "hehehahaxixiheihei";
    int position = static_cast<int>(str3.find("fi"));
    cout<<"position:"<<position<<endl;
    string sst = "xixi";
    int len = static_cast<int>(sst.length());
    str3.replace(str3.find("xi"), sst.length(), "99####");
    
    cout<<str3<<endl;
    
    string str5 = "hehaehamxhaxmxiximxheimxhei";
    string str6 = "mx";
    while (1) {
        size_t a = str5.find(str6);
        if (a >str5.size()) {
            break;
        }
        str5.replace(a, str6.length(), "**");
    }
    
    cout<<"str5替换后:"<<str5<<endl;
    
}

/// 字符串比较
void test4() {
    string str1 = "sh";
    string str2 = "d";
    int result = str1.compare(str2);
    cout<<"比较结果:"<<result<<endl;
}

void test5() {
    string str = "Today is very hot";
    // 截串的起始位置,长度
    string sub = str.substr(0,5);
    cout<<"字符串的提取/截串:"<<sub<<endl;
}

void test6() {
    string str = "Today:is:very:hot";
    size_t position = str.find(":",0);
    cout<<"position="<<position<<endl;
    string subStr = str.substr(0,position);
    cout<<"first="<<subStr<<endl;
    
    size_t position2 = str.find(":",position + 1);
    string subStr2 = str.substr(position + 1, position2 - position - 1);
    cout<<"position2="<<position2<<endl;
    cout<<"subStr2="<<subStr2<<endl;
}

/// 字符串的插入&删除
void test7() {
    string str = "Today";
    str.insert(str.length(), " is very hot.");
    cout<<"字符串插入:"<<str<<endl;
    // 字符串的删除 删除位置 删除长度
    str.erase(5,10);
    cout<<"字符串删除:"<<str<<endl;
    
    // 字符串的删除
    str.erase(0, str.size());
    cout<<"字符串的擦除:"<<str<<endl;
}

/// 字符串和C语言风格字符串转换
void test8() {
    
    // c语言赋值给C++
    string str;
    char *str2 = (char *)"hao";
    str = str2;
    cout<<"str转换后:"<<str<<endl;
    
    // C++赋值给C语言
    string str3 = "zhangsan";
    char *str4;
    str4 = (char *)str3.c_str();
    cout<<"str4:"<<str4<<endl;
}

/// vector的未雨绸缪机制
void test9() {
    vector<int> v;
    for (int i = 0; i < 100; i++) {
        v.push_back(i);
    }
    cout<<"capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;
    
    int *p = NULL;
    
    for (int i = 100; i < 200; i++) {
        v.push_back(i);
        if (p != &v[0]) {
            cout<<"另寻了空间"<<endl;
        }
    }
    cout<<"capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;
}

void printVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<"元素:"<<*it<<endl;
    }
}

/// vector 的构造函数
void test10() {
    // 10个5 构造
    vector<int> v1(5,10);
    printVector(v1);
    
    // 区间构造
    // v1的第2开始,结束位置减少2个
    vector<int> v2(v1.begin() + 2, v1.end() - 2);
    printVector(v2);
    
    // 拷贝构造
    vector<int> v3(v1);
    printVector(v3);
}

/// vector 赋值
void test11() {
    vector<int> v1(5,10);
    vector<int> v2;
    v2 = v1;
    printVector(v2);
    
    vector<int> v3;
    v3.assign(5, 100);
    printVector(v3);
    
    vector<int> v4;
    v4.assign(v3.begin(), v3.end());
    printVector(v4);
    
    // 两个vector容器交换
    vector<int> v5(5,20);
    vector<int> v6(10,40);
    printVector(v5);
    printVector(v6);
    v5.swap(v6);
    printVector(v5);
    printVector(v6);
}

/// vector的大小操作
void test12() {
    vector<int> v1(10,22);
    // 获取vector容器的大小
    cout<<"vi size:"<<v1.size()<<endl;
    
    bool isEmpty = v1.empty();
    cout<<"vector容器是否为空:"<<isEmpty<<endl;
    
    v1.resize(5);
    printVector(v1);
    
    v1.resize(30);
    printVector(v1);
    
    cout<<"vi的容量:"<<v1.capacity()<<endl;
}

void test13() {
    vector<int> v1;
    for (int i = 0; i < 100; i++) {
        v1.push_back(i);
    }
    cout<<"v1 size:"<<v1.size()<<endl;
    cout<<"v1 capacity:"<<v1.capacity()<<endl;
    
    // 收缩vector的容量  通过swap和匿名容器交换 收缩容器容量
    vector<int>(v1).swap(v1);
    cout<<"v1 capacity:"<<v1.capacity()<<endl;
}

/// vector reserve预留空间大小
void test14() {
    vector<int> v;
    v.reserve(1000);
    int *p = NULL;
    int count = 0;
    for (int i = 0; i < 1000; i++) {
        v.push_back(i);
        if (p != &v[0]) {
            cout<<"另寻空间:"<<count<<endl;
            count++;
            p = &v[0];
        }
    }
    cout<<"另寻空间的次数:"<<count<<endl;
}

/// 尾插法&取值 中括号索引取值越界 不会抛出异常
void test15() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    printVector(v);
    
    cout<<v[2]<<endl;
    v[2]=300;
    cout<<v[2]<<endl;
    v.pop_back();
    printVector(v);
    
    // 插入
    v.insert(v.begin() + 1, 100);
    printVector(v);
}

int main(int argc, const char * argv[]) {
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
    //test7();
    //test8();
    //test9();
    //test10();
    //test11();
    //test12();
    //test13();
    //test14();
    test15();
    return 0;
}
