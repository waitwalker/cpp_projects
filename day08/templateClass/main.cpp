//
//  main.cpp
//  templateClass
//
//  Created by waitwalker on 2021/6/10.
//

#include <iostream>

using namespace std;

/// 模板类
template <class T1, class T2>
class Data {
private:
    T1 name;
    T2 num;
    
public:
    Data(T1 name, T2 num) {
        this->name = name;
        this->num = num;
    }
    
    ~Data() {
        
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
