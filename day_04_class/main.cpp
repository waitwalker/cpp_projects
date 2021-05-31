#include <iostream>

using namespace std;

class Person {
private:
    char m_name[32];
    int m_age;
    int m_money;//私有数据
protected:
    int age;
public:
    int num;
    void init(char *name, int age){
        m_age = age;
        strcpy(m_name,name);
    }

    void setName(char *name) {
        strcpy(m_name,name);
    }

    char *getName() {
        return m_name;
    }

    void setAge(int age) {
        if (age > 0 && age < 100) {
            m_age = age;
        } else {
            cout<<"请输入合法年龄"<<endl;
        }

    }

    int getAge() {
        return age;
    }

    void desc() {
        m_money = 100;
        age = 18;
        cout<<"This is Person class"<<endl;
        cout<<"年龄"<<age<<endl;
    }

    void showPerson() {
        cout<<"姓名:"<<m_name<<"\n年龄:"<<m_age<<endl;
    }
};

int main() {
//    Person lucy;
//    lucy.num = 20;
//    lucy.desc();
    Person lucy;
    lucy.init("lucy",18);
    lucy.showPerson();
    lucy.setName("zhangsan");
    lucy.showPerson();
    cout << "Hello World!" << endl;
    return 0;
}
