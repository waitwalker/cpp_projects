//
//  Html.cpp
//  day05
//
//  Created by waitwalker on 2021/6/8.
//

#include "Html.hpp"


Html::Html() {
    cout<<"无参数构造"<<endl;
}

Html::Html(const Html &html) {
    cout<<"拷贝构造"<<endl;
}

void Html:: header() {
    cout<<"Html header"<<endl;
}

Html::~Html() {
    cout<<"析构函数"<<endl;
}
