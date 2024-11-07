#include <stdio.h>

int main(void)
{
    int a, b, c;
    if(scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Input error");
        return 0;
    }

    printf(a + b > c && a + c > b && c + b > a ? "yes" : "no");

    return 0;
}