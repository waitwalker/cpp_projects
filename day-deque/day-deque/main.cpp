//
//  main.cpp
//  day-deque
//
//  Created by waitwalker on 2021/6/15.
//

#include <iostream>
#include <deque>
#include <string.h>
#include <vector>
#include <time.h>
using namespace std;

void printDeque(deque<int> &d) {
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
        cout<<"元素:"<<*it<<endl;
    }
}

void test1() {
    deque<int> d;
    d.push_back(1);
    d.push_front(0);
    d.insert(d.begin() + 1, 100);
    d.insert(d.end() - 0, 200);
    d[3] = 300;
    printDeque(d);
    
    deque<int> d1(2,10);
    deque<int> d2(3,22);
    d1.swap(d2);
    printDeque(d1);
    
    
    // 尾部&头部删除
    d.pop_back();
    d.pop_front();
    printDeque(d);
    // 清空空间
    d.erase(d.begin());
    d.clear();
    printDeque(d);
    cout<<"size:"<<d.size()<<endl;
}

class Person {
    
    
public:
    string name;
    int score;
    Person(string name, int score){
        this->name = name;
        this->score = score;
    }
};

void createPerson(vector<Person> &v) {
    string nameTmp = "ABCDE";
    for (int i = 0; i < 5; i++) {
        string name = "选手";
        name += nameTmp[i];
        v.push_back(Person(name, 0));
    }
}

void printVector(vector<Person> &v) {
    for (vector<Person>::iterator it = v.begin();  it != v.end(); it++) {
        cout<<"name:"<<(*it).name<<",score:"<<(*it).score<<endl;
    }
}

void playGame(vector<Person> &v) {
    
    srand(time(NULL));
    
    // 容器中的每个人逐一比赛
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
        // 每个选手要被10个评委打分 放入deque容器中
        deque<int> d;
        for (int i = 0; i < 10; i++) {
            int score = rand() %41 + 60;
            d.push_back(score);
        }
        //排序
        sort(d.begin(), d.end());
        // 去掉一个最低分 & 去掉一个最高分
        d.pop_front();
        d.pop_back();
        int sum = 0;
        //打印结果
        for (int i = 0; i < d.size(); i++) {
            sum += d[i];
            cout<<"值:"<<d[i];
        }
        // 总分
        cout<<"总分:"<<sum<<endl;
        // 平均分
        (*it).score = sum/(d.size());
        cout<<"平均分:"<<(*it).score<<endl;
        cout<<"-------------"<<endl;
    }
}

void test2() {
    // 定义一个vector 存放5名选手
    vector<Person> v;
    createPerson(v);
    
    // 遍历容器
    printVector(v);
    
    // 5名选手逐一比赛
    playGame(v);
    
    // 将5名选手的成绩打印出来
    printVector(v);
}

void test3() {
    // 设置基准值 随机数种子
    srand(2);
    for (int i = 0; i < 10; i++) {
        int num = rand();
        cout<<"随机数:"<<num<<endl;
    }
}

int main(int argc, const char * argv[]) {
    //test1();
    //test2();
    test3();
    return 0;
}
