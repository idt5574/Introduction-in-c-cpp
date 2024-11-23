#include <stdio.h>

int is_even(int n)
{
    int x = n % 2 == 0 ? 1 : 0;
    return x;
}

int main(void)
{
    int x;
    while(scanf("%d", &x) == 1) {
        if(is_even(x)) printf("%d ", x);
    }

    return 0;
}