//
//  main.cpp
//  day10
//
//  Created by waitwalker on 2021/6/11.
//

#include <iostream>

using namespace std;

int myDiv(int a, int b) {
    if (b == 0) {
        return -1;
    }
    return a/b;
}

int main(int argc, const char * argv[]) {
    
    int ret = myDiv(10, -10);
    if (ret == -1) {
        cout<<"程序异常了"<<endl;
    } else {
        cout<<"程序正常"<<endl;
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
