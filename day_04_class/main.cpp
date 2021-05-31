#include <iostream>
#include "cub.h"
#include "data.h"
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

/// 立方体
//class Cub
//{
//private:
//    int m_l;//长
//    int m_w;//宽
//    int m_h;//高
//public:
//    Cub();
//    void setL(int l) {
//        m_l = l;
//    }

//    void setW(int w) {
//        m_w = w;
//    }

//    void setH(int h) {
//        m_h = h;
//    }

//    int getL() {
//        return m_l;
//    }

//    int getW() {
//        return m_w;
//    }

//    int getH() {
//        return m_h;
//    }

//    /// 计算面积
//    int getS() {
//        return 2 * (m_l * m_w + m_l * m_h + m_w * m_h);
//    }

//    /// 计算体积
//    int getV() {
//        return m_l * m_w * m_h;
//    }

//};

bool compareCub(Cub &cub1, Cub &cub2) {
    if (cub1.getL() == cub2.getL() && cub1.getW() == cub2.getW() && cub1.getH() == cub2.getH()) {
        return true;
    }
    return false;
}

struct Point {
    int x;
    int y;
};

class circle {
private:
    Point m_p;
    int m_r;
public:
    void setPoint(Point point) {
        m_p = point;
    }

    void setR(int r) {
        m_r = r;
    }

};


int main() {

    Data data;

    return 0;

    Cub cub1, cub2;
    cub1.setL(10);
    cub1.setW(20);
    cub1.setH(30);

    cub2.setL(15);
    cub2.setW(30);
    cub2.setH(23);

    cout<<"面积1:"<<cub1.getS()<<endl;
    cout<<"面积2:"<<cub2.getS()<<endl;

    cout<<"比较结果:"<<compareCub(cub1,cub2)<<endl;

    return 0;
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
