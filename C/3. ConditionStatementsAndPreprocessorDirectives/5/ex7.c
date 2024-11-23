#include <stdio.h>

int main(void)
{
    unsigned int num;
    scanf("%d", &num);

    num = num << 3;
    printf("%d", num);

    return 0;
}