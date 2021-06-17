//
//  main.cpp
//  day11-map
//
//  Created by waitwalker on 2021/6/17.
//

#include <iostream>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

void printMap(map<string, int> &m) {
    for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout<<"key:"<<(*it).first<<",value:"<<(*it).second<<endl;
    }
}

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
    
    printMap(m);
    
    cout<<"通过中括号形式取值:"<<m["key2"]<<endl;
    
    map<string,int>::iterator it = m.find("key2");
    cout<<"查找到的结果key:"<<(*it).first<<",查找到的结果value:"<<(*it).second<<endl;
    
}

void test2() {
    map<int, string> m;
    m.insert(make_pair( 1,"RNG"));
    m.insert(make_pair( 2,"IG"));
    m.insert(make_pair( 3, "WE"));
    m.insert(make_pair( 4, "EDG"));
    
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    random_shuffle(v.begin(), v.end());
    
    // 随机出场
    for_each(v.begin(), v.end(), [&](int value){
        cout<<m[value]<<endl;
    });
}


int main(int argc, const char * argv[]) {
    //test1();
    test2();
    return 0;
}
