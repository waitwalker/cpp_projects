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
    
    void showData() {
        cout<<"name="<<this->name<<",num="<<this->num<<endl;
    }
};

int main(int argc, const char * argv[]) {
    
    Data<string, int> ob1("zhangsan",20);
    ob1.showData();
    
    
    Data<int, string> ob2(12, "kk");
    ob2.showData();
    
    std::cout << "Hello, World!\n";
    return 0;
}
