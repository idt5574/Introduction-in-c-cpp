#include <stdio.h>

int main(void)
{
    unsigned short time_h = 10; // часы
    unsigned short time_m = 33; // минуты
    unsigned short time_s = 5; // секунды

    unsigned short h, m, s; // добавляемое время: h - часы; m - минуты; s - секунды
    scanf("%hu; %hu; %hu", &h, &m, &s);

    unsigned int sourceTime = time_s + (time_m * 60) + (time_h * 3600);
    unsigned int inputedTime = s + (m * 60) + (h * 3600);
    unsigned int resTime = sourceTime + inputedTime;

    unsigned int resH = resTime / 3600;
    unsigned int resM = (resTime % 3600) / 60;
    unsigned int resS = resTime % 60;

    printf("%02d:%02d:%02d", resH, resM, resS);


    return 0;
}