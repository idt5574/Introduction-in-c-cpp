#include <iostream>

struct dtime {

private:
    unsigned char hs;
    unsigned char ms;
    unsigned char sc;

public:
    dtime(unsigned char hs = 0, unsigned char ms = 0, unsigned char sc = 0)
    {
        this->hs = hs;
        this->ms = ms;
        this->sc = sc;
    }

    std::string get_time()
    {
        char str[9];
        sprintf(str, "%02hhu:%02hhu:%02hhu", hs, ms, sc);
        std::string res = str;

        return str;
    }

    void set_time(unsigned char hours, unsigned char minutes, unsigned char seconds)
    {
        hs = hours;
        ms = minutes;
        sc = seconds;
    }
    
    static dtime sum_time(const dtime& t1, const dtime& t2)
    {
        unsigned char h1 = t1.hs, 
        m1 = t1.ms, 
        s1 = t1.sc;

        unsigned char h2 = t2.hs,
        m2 = t2.ms,
        s2 = t2.sc;

        unsigned char hn = (h1 + h2 + (((s1 + s2) / 60) + m1 + m2) / 60) % 24;
        unsigned char mn = (((s1 + s2) / 60) + m1 + m2) % 60;
        unsigned char sn = (s1 + s2) % 60;

        dtime tm_res = {hn, mn, sn};

        return tm_res;
    }

};

int main(void)
{
    char* time = (char*)malloc(8);

    int h1, m1, s1, h2, m2, s2;

    scanf("%d %d %d", &h1, &m1, &s1);
    scanf("%d %d %d", &h2, &m2, &s2);

    dtime tm1(h1, m1, s1),
        tm2(h2, m2, s2);

    dtime time_res = time_res.sum_time(tm1, tm2);

    std::cout << time_res.get_time();
    free(time);
    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}