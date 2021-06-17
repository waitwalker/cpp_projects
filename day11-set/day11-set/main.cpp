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
    
}

int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
