#include <stdio.h>

#define SIZE 20

int prod_ar(const int* ar, int length)
{
    int mpc = 1;
    for(int i = 0; i < length; i++)
        mpc *= ar[i];

    return mpc;
}

int main(void)
{
    int ar[SIZE];
    short cnt = 0;
    while (scanf("%d", &ar[cnt]) == 1) cnt++;
    int res = prod_ar(ar, cnt);
    printf("%d", res);

    return 0;
}
