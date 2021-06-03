//
//  main.cpp
//  sample_tv
//
//  Created by waitwalker on 2021/6/2.
//

#include <iostream>
#include "TV.hpp"

int main(int argc, const char * argv[]) {
    
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
