#include <stdio.h>

double mean_ar(const int *ar, size_t len_ar, int (*cond) (const int))
{
    double res = 0;
    short i = 0, cnt = 0;
    //printf("%ld\n", len_ar);
    while (i < len_ar)
    {
        //printf("%d | %d | %d | %d | %.1f\n", i, ar[i], cond(ar[i]), len_ar, res);
        if(cond(ar[i]) != 0)
        {
            res += ar[i];
            cnt++;
        }
        i++;
    }
    //printf("%d | %d | %d | %d | %.1f\n", i, ar[i], cond(ar[i]), len_ar, res);
    return res / (double)cnt;
}

int condition(const int a)
{
    return (a >= 1 && a <= 5);
}

int main(void)
{
    int marks[20] = {0};
    int x;
    size_t i = 0;
    while(scanf("%d", &x) == 1 && i < 20) {
        marks[i++] = x;
    }

    double res = mean_ar(marks, i, condition);
    printf("%.1f", res);

    return 0;
}