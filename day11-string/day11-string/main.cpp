//
//  main.cpp
//  day11-string
//
//  Created by waitwalker on 2021/6/11.
//

#include <iostream>
#include <string.h>
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

int main(int argc, const char * argv[]) {
    //test1();
    test2();
    return 0;
}
