#include <stdio.h>

int main(void)
{
    short x, y;
    if(scanf("%hd, %hd", &x, &y) != 2) {
        printf("Input error.");
        return 0;
    }

    if(x < y) printf("%d", x);
    else printf("%d", y);

    return 0;
}