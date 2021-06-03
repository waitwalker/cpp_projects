//
//  TV.cpp
//  sample_tv
//
//  Created by waitwalker on 2021/6/2.
//

#include "TV.hpp"

TV::TV(){
    this->mState = Off;
    this->mVolume = minVol;
    this->mChannel = minChannel;
}


TV::TV(int state, int volume, int channel){
    this->mState = state;
    this->mVolume = volume;
    this->mChannel = channel;
}

void TV::onOrOff() {
    this->mState = (this->mState == Off? On : Off);
}


void TV::volumeUp() {
    if (this->mVolume >= maxVol) {
        return;
    }
    
    this->mVolume++;
}

void TV::volumeDown() {
    if (this->mVolume <= minVol) {
        return;
    }
    this->mVolume--;
}

void TV::channelUp() {
    if (this->mChannel >= maxChannel) {
        return;
    }
    this->mChannel++;
}

void TV::channelDown() {
    if (this->maxChannel <= minChannel) {
        return;
    }
    this->mChannel--;
}

void TV::showTVState() {
    string state = this->mState==On? "开机" : "关机";
    cout<<"电视机的状态:"<<state<<endl;
    
    cout<<"电视机音量:"<<this->mVolume<<endl;
    
    cout<<"电视机频道:"<<this->mChannel<<endl;
}
