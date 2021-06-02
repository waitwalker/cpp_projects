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
