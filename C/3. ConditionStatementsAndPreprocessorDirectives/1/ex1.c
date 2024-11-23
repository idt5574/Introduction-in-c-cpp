#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    bool x = a % 5 == 0;
    printf("%d", x * 100);
    
    return 0;
}