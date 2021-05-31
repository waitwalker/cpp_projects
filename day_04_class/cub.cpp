#include "cub.h"
#include <iostream>

using namespace std;

Cub::Cub()
{
    cout<<"初始化"<<endl;
}

void Cub::setL(int l) {
    m_l = l;
}

void Cub::setW(int w) {
    m_w = w;
}

void Cub::setH(int h) {
    m_h = h;
}

int Cub::getL() {
    return m_l;
}

int Cub::getW() {
    return m_w;
}

int Cub::getH() {
    return m_h;
}

/// 计算面积
int Cub::getS() {
    return 2 * (m_l * m_w + m_l * m_h + m_w * m_h);
}

/// 计算体积
int Cub::getV() {
    return m_l * m_w * m_h;
}
