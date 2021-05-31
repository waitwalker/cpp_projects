#include <iostream>

using namespace std;

class Person {
private:
    int m_money;//私有数据
protected:
    int age;
public:
    int num;
    void desc() {
        m_money = 100;
        age = 18;
        cout<<"This is Person class"<<endl;
        cout<<"年龄"<<age<<endl;
    }
};

int main() {
    Person lucy;
    lucy.num = 20;
    lucy.desc();
    cout << "Hello World!" << endl;
    return 0;
}
