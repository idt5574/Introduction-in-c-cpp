#include <stdio.h>

#define START_NUM 2

int range(void)
{
    static int num = START_NUM;
    num += 3;
    return num;
}

int main(void)
{
    for(int i = 0; i < 7; i++)
        printf("%d ", range());
}