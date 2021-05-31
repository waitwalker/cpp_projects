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
    void setL(int l) {
        m_l = l;
    }

    void setW(int w) {
        m_w = w;
    }

    void setH(int h) {
        m_h = h;
    }

    int getL() {
        return m_l;
    }

    int getW() {
        return m_w;
    }

    int getH() {
        return m_h;
    }

    /// 计算面积
    int getS() {
        return 2 * (m_l * m_w + m_l * m_h + m_w * m_h);
    }

    /// 计算体积
    int getV() {
        return m_l * m_w * m_h;
    }

};

#endif // CUB_H
