#include <stdio.h>

int main(void)
{
    int value;
    char ar_d[4];
    scanf("%d", &value);
    char *d = (char *)&value;
    for(int i = 0; i < 4; i++)
    {
        ar_d[i] = *d;       
        d++;
        printf("%d ", ar_d[i]);
    }       
    return 0;
}