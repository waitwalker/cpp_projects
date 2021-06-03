//
//  Remote.cpp
//  sample_tv
//
//  Created by waitwalker on 2021/6/3.
//

#include "Remote.hpp"

Remote::Remote() {
    cout<<"遥控器无参数构造"<<endl;
}

Remote::Remote(TV *pTv) {
    this->p_tv = pTv;
}


Remote::Remote(const Remote &remote) {
    cout<<"遥控器拷贝构造"<<endl;
}

Remote::~Remote() {
    cout<<"遥控器析构函数"<<endl;
}


void Remote::onOrOff() {
    this->p_tv->onOrOff();
}


void Remote::volumeUp() {
    this->p_tv->volumeUp();
}

void Remote::volumeDown() {
    this->p_tv->volumeDown();
}

void Remote::channelUp() {
    this->p_tv->channelUp();
}

void Remote::channelDown() {
    this->p_tv->channelDown();
}

void Remote::setChannel(int num) {
    /// 判断频道是否有效
    if (num >= TV::minChannel && num <= TV::maxChannel) {
        this->p_tv->mChannel = num;
    }
}

void Remote::showTVState() {
    this->p_tv->showTVState();
}

