#include <stdio.h>

int main(void)
{
    int a;
    if(scanf("%d", &a) != 1) {
        printf("Error input.");
        return 0;
    }

    printf(a / 1000 == 3 ? "yes" : "no");

    return 0;
}