#ifndef CUB_H
#define CUB_H


class Cub
{
private:
    int m_l;//长
    int m_w;//宽
    int m_h;//高
public:
    Cub();
    void setL(int l);

    void setW(int w);

    void setH(int h);

    int getL();

    int getW();

    int getH();

    /// 计算面积
    int getS();

    /// 计算体积
    int getV();

};

#endif // CUB_H
