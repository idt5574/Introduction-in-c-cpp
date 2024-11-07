#include <stdio.h>

int is_par(const int a)
{
    return a % 2 == 0;
}

int sum_ar(const int *ar, size_t len_ar, int (*func) (int))
{
    int sum;

    for(int i = 0; i < len_ar; i++)
        sum += func(ar[i]) ? ar[i] : 0;

    return sum;
}

int main(void)
{
    int marks[20] = {0};
    int x, i = 0;
    while(scanf("%d", &x) == 1 && i < 20) {
        marks[i++] = x;
    }

    x = sum_ar(marks, i, is_par);
    printf("%d", x);

    return 0;
}