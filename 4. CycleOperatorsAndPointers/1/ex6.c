#include <stdio.h>

int main(void)
{
    int n = 99;
    while (++n < 1000)
    {
        if(n % 47 == 6 || n % 53 == 45) printf("%d ", n);
    }
    

    return 0;
}