#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    while(a > 1)
    {
        for(int i = 2; i <= a; i++)
        {
            if(a % i == 0) 
            {
                printf("%d ", i);
                a /= i;
                break;
            }
        }
    }

    return 0;
}