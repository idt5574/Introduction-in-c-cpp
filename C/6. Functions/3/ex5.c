#include <stdio.h>

int get_max(int, int);
int get_min(int, int);

int main(void)
{
    int a, b, t;
    scanf("%d, %d, %d", &a, &b, &t);

    int res;

    if(t == 1) res = get_max(a, b);
    else res = get_min(a, b);

    printf("%d", res);

    return 0;
}

int get_max(int n, int m)
{
    return n > m ? n : m;
}

int get_min(int n, int m)
{
    return n < m ? n : m;
}