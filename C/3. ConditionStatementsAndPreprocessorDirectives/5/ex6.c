#include <stdio.h>

int main(void)
{
    unsigned int num;
    scanf("%d", &num);

    num = num >> 2;
    printf("%d", num);

    return 0;
}