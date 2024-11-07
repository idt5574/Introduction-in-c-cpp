#include <stdio.h>

int main(void)
{
    int s = 0, n = 0;

    scanf("%d", &n);

    for(int i = 6; i <= n + 1; i++) s += i;

    printf("%d", s);    

    return 0;
}