#include <stdio.h>

int main(void)
{
    int a;
    if(scanf("%d", &a) != 1) {
        printf("Input error.");
        return 0;
    }

    if(a % 10 == 3) printf("yes");
    else printf("no");

    return 0;
}