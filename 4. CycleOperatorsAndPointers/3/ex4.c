#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hiddenNumber, m, a = 1, b = 1000;
    scanf("%d", &hiddenNumber);

    do
    {
        m = rand() % (b + 1 - a) + a;
        if(m < hiddenNumber) a = m;
        else b = m;
    } while (m != hiddenNumber);

    printf("%d", m);

    return 0;
}