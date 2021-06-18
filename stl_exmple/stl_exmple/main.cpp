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

int main(int argc, const char * argv[]) {
    
    // 创建24名选手 将选手<编号,选手>放入map容器中,选手编号放vector<>容器中
    vector<int> v;
    map<int, Speaker> m;
    
    // 创建选手24名
    createSpeaker(v,m);
    
    // 进行第一轮比赛
    
    
    for (map<int, Speaker>::iterator it = m.begin(); it != m.end(); it++) {
        cout<<(*it).first<<" "<<((*it).second).name<<endl;
    }
    
    return 0;
}
