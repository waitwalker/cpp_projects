//
//  main.cpp
//  day11
//
//  Created by waitwalker on 2021/6/11.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void myPrintValue(int value) {
    cout<<"element:"<<value<<endl;
}

int main(int argc, const char * argv[]) {
    
    // 单端动态数组vector 类模板
    vector<int> v;//v就是一个具体的容器
    // 尾插法
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);
    
    // 访问数据
    // 定义一个迭代器 存储v的起始迭代器 迭代器依赖于容器的
    vector<int>::iterator beginIt = v.begin();
    
    // 定义一个迭代器 存储v的结束迭代器
    vector<int>::iterator endId = v.end();
    // for循环遍历1
    for (; beginIt != endId;beginIt++) {
        // 对迭代器取* 代表的是 容器的元素
        cout<<*beginIt<<endl;
    }
    
    // for循环遍历2
    for (vector<int>::iterator it= v.begin(); it != v.end(); it++) {
        cout<<"元素:"<<*it<<endl;
    }
    
    // for_each方式
    for_each(v.begin(), v.end(), myPrintValue);
    
    std::cout << "Hello, World!\n";
    return 0;
}
