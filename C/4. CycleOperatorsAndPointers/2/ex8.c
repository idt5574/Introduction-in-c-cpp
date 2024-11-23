#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a;
    bool x;
    while (scanf("%d", &a) != 0 && a != 0)
    {   
        x = true;
        printf("%d", a);
    }
    if(!x) printf("0");

    return 0;
}