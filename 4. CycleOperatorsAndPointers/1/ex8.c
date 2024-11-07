#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, mini, maxi;
    scanf("%d %d", &a, &b);
    mini = a < b ? a : b;
    maxi = a > b ? a : b;
    while (mini > 0)
    {
        maxi = maxi % mini;
        a = maxi;
        maxi = mini;
        mini = a;
    }

    printf("%d", maxi);
       
}