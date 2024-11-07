#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    for(a; a <= b; a++) {
        int x = a / 100, y = (a / 10) % 10, z = a % 10;
        if(x != y && y != z && z != x) printf("%d ", a); 
    }

    return 0;
}