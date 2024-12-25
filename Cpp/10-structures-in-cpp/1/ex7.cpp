#include <iostream>

struct tag_time {
    unsigned char hours;
    unsigned char minutes;
    unsigned char seconds;

    char* get_time(char* str, size_t max_length)
    {
        sprintf(str, "%02u:%02u:%02u", hours, minutes, seconds);
        return str;
    }
    
    static tag_time sum_time(const tag_time& t1, const tag_time& t2)
    {
        unsigned char h1 = t1.hours, 
        m1 = t1.minutes, 
        s1 = t1.seconds;

        unsigned char h2 = t2.hours,
        m2 = t2.minutes,
        s2 = t2.seconds;

        unsigned char hn = (h1 + h2 + (((s1 + s2) / 60) + m1 + m2) / 60) % 24;
        unsigned char mn = (((s1 + s2) / 60) + m1 + m2) % 60;
        unsigned char sn = (s1 + s2) % 60;

        tag_time tm_res = {hn, mn, sn};

        return tm_res;
    }

};

int main(void)
{
    tag_time tm1, tm2;
    char* time = (char*)malloc(8);

    int h1, m1, s1, h2, m2, s2;

    scanf("%d %d %d", &h1, &m1, &s1);
    scanf("%d %d %d", &h2, &m2, &s2);

    tm1 = {(unsigned char)h1, (unsigned char)m1, (unsigned char)s1};
    tm2 = {(unsigned char)h2, (unsigned char)m2, (unsigned char)s2};

    tag_time time_res = time_res.sum_time(tm1, tm2);

    std::cout << time_res.get_time(time, 8);
    free(time);
    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}