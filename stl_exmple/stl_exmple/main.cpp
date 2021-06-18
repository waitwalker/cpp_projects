//
//  main.cpp
//  stl_exmple
//
//  Created by waitwalker on 2021/6/18.
//

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>


using namespace std;

class Speaker {
    
    
public:
    string name;
    int score[3];
    Speaker(string name){
        this->name = name;
        // 清空
        memset(score, 0, sizeof(score));
    }
};

void createSpeaker(vector<int> &v, map<int, Speaker> &m) {
    string tmp = "ABCDEFGHIJKLMNOPQRSTUVWX";
    for (int i = 0; i < 24; i++) {
        //存放选手编号
        v.push_back(100 + i);
        //存放<编号,选手>
        string name = (string)"选手"+tmp[i];
        m.insert(make_pair(100+i, Speaker(name)));
    }
}

void speech_contest(int index, vector<int> &v, map<int, Speaker> &m, vector<int> &v1) {
    int count = 0;
    // 设计一个<分数,编号>的容器
    multimap<int,int,greater<int>> m2;
    // 选手逐一登台比赛
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        count++;
        // 10个评委打分
        deque<int> d;
        for (int i = 0; i < 10; i++) {
            int score = rand()%41+60;
            d.push_back(score);
        }
        // 排序
        sort(d.begin(), d.end());
        
        // 去掉最高分和最低分
        d.pop_back();
        d.pop_front();
        
        // 求平均分数
        int sum = 0;
        for_each(d.begin(), d.end(), [&](int value){
            sum += value;
        });
        int avg = sum/d.size();
        
        m[*it].score[index - 1] = avg;
        
        m2.insert(make_pair(avg, *it));
        if (count % 6 == 0) {
            // 遍历m2容器 取出前三名成绩
            int i =0;
            for (multimap<int, int,greater<int>>::iterator mit = m2.begin(); mit != m2.end() && i < 3; mit++,i++) {
                // 将晋级的编号放入晋级的容器中
                v1.push_back((*mit).second);
                m2.clear();
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    
    // 创建24名选手 将选手<编号,选手>放入map容器中,选手编号放vector<>容器中
    vector<int> v;
    map<int, Speaker> m;
    
    // 创建选手24名
    createSpeaker(v,m);
    
    
    for (map<int, Speaker>::iterator it = m.begin(); it != m.end(); it++) {
        cout<<(*it).first<<" "<<((*it).second).name<<endl;
    }
    
    // 设置种子
    srand(time(NULL));
    
    // 进行第一轮比赛
    random_shuffle(v.begin(), v.end());
    
    for_each(v.begin(), v.end(), [](int value){
        cout<<"编号:"<<value<<endl;
    });
    
    vector<int> v1;
    
    // 1第一轮 v选手编号 m选手信息 v1晋级容器
    speech_contest(1, v, m, v1);
    
    return 0;
}
