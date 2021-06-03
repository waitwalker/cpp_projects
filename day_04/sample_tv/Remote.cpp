//
//  Remote.cpp
//  sample_tv
//
//  Created by waitwalker on 2021/6/3.
//

#include "Remote.hpp"

Remote::Remote() {
    
}

Remote::Remote(TV *pTv) {
    this->p_tv = pTv;
}


Remote::Remote(const Remote &remote) {
    
}

Remote::~Remote() {
    
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
