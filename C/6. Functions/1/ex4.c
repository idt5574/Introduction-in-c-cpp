#include <stdio.h>

int pow_n(int n, int m) 
{
    int x = n;
    if(m == 0) return 1;
    if(m == 1) return n;
    for(int i = 1; i < m; i++) x *= n;
    return x;
}

int main(void)
{  
    int x = pow_n(2, 4);
    printf("%d", x);

    return 0;
}