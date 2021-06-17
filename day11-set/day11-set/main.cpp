//
//  main.cpp
//  day11-set
//
//  Created by waitwalker on 2021/6/16.
//

#include <iostream>
#include <string.h>
#include <set>


using namespace std;



void test1() {
    set<int> s;
    s.insert(10);
    s.insert(30);
    s.insert(1);
    s.insert(8);
    for_each(s.begin(), s.end(), [](int value){
        cout<<"value:"<<value<<endl;
    });
    set<int>::const_iterator it = s.begin();
    //*it = 100;
    // 删除元素 会把所有相同元素都删除
    s.erase(10);
    
    for_each(s.begin(), s.end(), [](int value){
        cout<<"value:"<<value<<endl;
    });
    
    set<int>::const_iterator ret;
    set<int>::const_iterator iter = s.find(8);
    if (ret == s.find(8)) {
        cout<<"找到的值:"<<*(ret)<<endl;
        
    } else {
        cout<<"没有找到"<<endl;
    }
    cout<<"找到的值:"<<*(iter)<<endl;
    //cout<<"找到的值:"<<*(ret)<<endl;
    
    size_t co = s.count(8);
    cout<<"查找元素是否存在的另一种方法:"<<co<<endl;
    
    set<int>::iterator iter1 = lower_bound(s.begin(), s.end(), 12);
    set<int>::iterator iter2 = upper_bound(s.begin(), s.end(), 50);
    cout<<"lower_bound:"<<*iter1<<endl;
    cout<<"upper_bound:"<<*iter2<<endl;
    
    
    pair<set<int>::const_iterator, set<int>::const_iterator> pair_ret;
    pair<set<int>::const_iterator, set<int>::const_iterator> ite = s.equal_range(30);
    cout<<"上限:"<<*(ite.first)<<endl;
    cout<<"下限:"<<*(ite.second)<<endl;
    
    // 对组
    pair<string, int> pair1("123",456);
    cout<<"string:"<<pair1.first<<endl;
    cout<<"int:"<<pair1.second<<endl;
    
    // 对组的初始化
    pair<int, string> pair2 = make_pair(9527, "华安");
    cout<<"int:"<<pair2.first<<endl;
    cout<<"string:"<<pair2.second<<endl;
}

class MyGreater {
    
    
public:
    bool operator()(int value1, int value2) {
        return value1 > value2;
    }
};

void test2() {
    set<int, MyGreater> s;
    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(50);
    s.insert(40);
    for_each(s.begin(), s.end(), [](int value){
        cout<<"元素:"<<value<<" ";
    });
    cout<<endl;
}

int main(int argc, const char * argv[]) {
    //test1();
    test2();
    return 0;
}
