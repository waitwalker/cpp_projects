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
    
}

int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
