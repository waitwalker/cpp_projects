//
//  TV.hpp
//  sample_tv
//
//  Created by waitwalker on 2021/6/2.
//

#ifndef TV_hpp
#define TV_hpp
#include <string.h>
#include <stdio.h>

class TV {
    
    enum {On, Off};///电视状态
    enum {minVol, maxVol = 100}; /// 音量从0到100
    enum {minChannel = 1, maxChannel = 255}; //电视频道从1到255
    
private:
    int mState; /// 电视剧状态 开/关
    int mVolume; /// 电视剧音量
    int mChannel; /// 电视剧频道
    
public:
    TV();
    TV(int state, int volume, int channel);
    TV(const TV &tv);
    
    /// 打开或关闭
    void onOrOff();
    
    /// 加大音量
    void volumeUp();
    
    /// 调小音量
    void volumeDown();
    
    ~TV();
};

#endif /* TV_hpp */
