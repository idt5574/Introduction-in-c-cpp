#include <stdio.h>

#define KMH (double)s_mc * 3600.0 / 1000.0

int main(void)
{
    int s_mc;
    scanf("%d", &s_mc);

    printf("%.2f", KMH);
    

    return 0;
}