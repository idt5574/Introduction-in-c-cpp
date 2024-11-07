#include <stdio.h>

int main(void)
{
    int sum = 0, a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++) sum += i % 5 == 0 || i % 3 == 0 ? i : 0;
    printf("%d", sum);

    return 0;
}