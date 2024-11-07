#include <stdio.h>

#define SIZE 10

int sum_ar(const int* ar, int length)
{
    int sum = 0;
    for(int i = 0; i < length; i++)
        sum += ar[i];

    return sum;
}

int main(void)
{
    int ar[SIZE] = {0};
    short cnt = 0;
    while (scanf("%d", &ar[cnt]) == 1) cnt++;
    int res = sum_ar(ar, SIZE);
    printf("%d", res);

    return 0;
}
