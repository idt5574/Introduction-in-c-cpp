#include <stdio.h>

int main(void)
{
    int a, b;
    if(scanf("%d %d", &a, &b) != 2) {
        printf("Input error.");
        return 0;
    }

    if(a == b) printf("%d", a);
    else if(a > b) printf("%d %d", b, a);
    else printf("%d %d", a, b);

    return 0;
}