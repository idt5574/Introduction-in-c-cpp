#include <stdio.h>

int main(void)
{
    int angle;
    scanf("%d", &angle);
    int x = angle % 360;
    printf("%d", x);
    
    return 0;
}