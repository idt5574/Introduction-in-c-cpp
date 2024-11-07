#include <stdio.h>

int is_positive(int a)
{
    return a >= 0;
}

int main(void)
{
    int ar[10] = {0};
    int x, i = 0;
    while(scanf("%d", &x) == 1) {
        if(is_positive(x) == 1)
            ar[i++] = x;
    }

    for(int j = 0; j < i; j++) printf("%d ", ar[j]);

    return 0;
}