#include <stdio.h>

int main(void)
{
    int digits[5];
    scanf("%d %d %d %d %d", &digits[0], &digits[1], &digits[2], &digits[3], &digits[4]);

    for(int i = 0; i < 5; i++) printf("%d ", digits[i]);

    return 0;
}