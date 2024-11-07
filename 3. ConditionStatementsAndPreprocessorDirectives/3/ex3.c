#include <stdio.h>

int main(void)
{
    int a, b;
    if(scanf("%d; %d", &a, &b) != 2) {
        printf("Input error.");
        return 0;
    }

    printf("%s", a == b ? "square" : "rectangle");  

    return 0;
}