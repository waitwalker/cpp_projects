//
//  main.cpp
//  abstractClass
//
//  Created by waitwalker on 2021/6/10.
//

#include <iostream>

using namespace std;

class AbstractBase {
    
public:
    /// 第一步 virtual修饰 变成虚析构函数
    /// 第二步 =0 变成纯虚析构函数
    virtual ~AbstractBase() = 0;
};

/// 第三步 在外部实现 
AbstractBase::~AbstractBase() {
    
}

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    return 0;
}
