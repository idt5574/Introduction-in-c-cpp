#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    for(int i = 1; i < a; i++) {
        if(i * i < a) printf("%d ", i);
        else break;
    }

    return 0;
}