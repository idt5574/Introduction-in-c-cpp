#include <stdio.h>

int main(void)
{
    int res = 0;
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 0; i <= a; i++)
        for(int j = 0; j <= b; j++)
        {
            if(i + j < 20)
                res += i + j;
            else
            {
                printf("%d", res);
                return 0;
            }
        }
    printf("%d", res);
    return 0;
}