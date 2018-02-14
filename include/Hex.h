#ifndef HEX_H
#define HEX_H


class Hex
{
    public:
        Hex(int step, Hex *n, Hex *ne, Hex *se, Hex *s, Hex *sw, Hex *nw);
        Hex(int step);
        Hex();
        const int getStep();
        const Hex* getN();
        const Hex* getNE();
        const Hex* getSE();
        const Hex* getS();
        const Hex* getSW();
        const Hex* getNW();
        void setStep(int const &step);
        void setN(Hex *n);
        void setNE(Hex *ne);
        void setSE(Hex *se);
        void setS(Hex *s);
        void setSW(Hex *sw);
        void setNW(Hex *nw);

    protected:

    private:
        int m_step;
        Hex *m_n;
        Hex *m_ne;
        Hex *m_se;
        Hex *m_s;
        Hex *m_sw;
        Hex *m_nw;
};

#endif // HEX_H
