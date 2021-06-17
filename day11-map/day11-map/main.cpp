//
//  main.cpp
//  day11-map
//
//  Created by waitwalker on 2021/6/17.
//

#include <iostream>
#include <string.h>
#include <map>
using namespace std;

void test1() {
    map<string, int> m;
    // 第一种插入方式 不推荐
    m.insert(pair<string, int>("key1",123));
    
    // 第二种插入方式 推荐
    m.insert(make_pair("key2", 1234));
    
    // 第三种插入方式 不推荐
    m.insert(map<string,int>::value_type("key3",12345));
    
    // 第四种插入方式 读推荐 写不推荐
    m["key4"] = 123456;
    
    for_each(m.begin(), m.end(), [](pair<string, int> element){
        cout<<"key:"<<element.first<<",value:"<<element.second<<endl;
    });
    
}


int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
