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

void Html:: leftNavigation() {
    cout<<"Html leftNavigation"<<endl;
}

void Html:: mainBody() {
    cout<<"Html mainBody"<<endl;
}

void Html:: footer() {
    cout<<"Html footer"<<endl;
}

void Html:: title() {
    cout<<"Html title"<<endl;
}


Html::~Html() {
    cout<<"析构函数"<<endl;
}
