#include <stdio.h>

#define START_NUM -10000

int range(int start, int stop, int step)
{
    static int num = START_NUM;
    if(num == -10000)
    {
        num = start;
        return num;
    }
    num += step;
    if(num <= stop)
        return num;
    if(num > stop)
    {
        num = start;
        return num;
    }
}

int main(void)
{
    int start, stop, step;
    scanf("%d %d %d", &start, &stop, &step);

    for(int i = 0;i < 20; ++i)
        printf("%d ", range(start, stop, step));

    return 0;
}