#include <stdio.h>

int fact(int n)
{
    if(n < 0) return -1;
    if(n == 0) return 1;
    if(n == 1) return n;
    return n * fact(n - 1);
}

int main(void) 
{
    int x = fact(6);
    printf("%d", x);

    return 0;
}