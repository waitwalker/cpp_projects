//
//  main.cpp
//  sample_tv
//
//  Created by waitwalker on 2021/6/2.
//

#include <iostream>
#include "TV.hpp"
#include "Remote.hpp"

int main(int argc, const char * argv[]) {
    
    /// 遥控器使用
    TV p_Tv;
    Remote remote(&p_Tv);
    remote.onOrOff();
    
    remote.channelUp();
    remote.volumeUp();
    
    remote.showTVState();
    
    return 0;
    
    TV tv;
    /// 开机
    tv.onOrOff();
    
    /// 调节音量
    tv.volumeUp();
    tv.volumeUp();
    tv.volumeUp();
    tv.volumeUp();
    
    /// 调频道
    tv.channelUp();
    tv.channelUp();
    
    tv.showTVState();
    
    std::cout << "Hello, World!\n";
    return 0;
}
