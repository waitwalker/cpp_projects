//
//  Remote.hpp
//  sample_tv
//
//  Created by waitwalker on 2021/6/3.
//

#ifndef Remote_hpp
#define Remote_hpp

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "TV.hpp"

class Remote {
private:
    TV *p_tv;
    
public:
    Remote();
    Remote(TV *pTv);
    Remote(const Remote &remote);
    
    /// 打开或关闭
    void onOrOff();
    
    /// 加大音量
    void volumeUp();
    
    /// 调小音量
    void volumeDown();
    
    /// 增加频道
    void channelUp();
    
    /// 减少频道
    void channelDown();
    
    ~Remote();
};

#endif /* Remote_hpp */
