#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double norm(int a, int b)
{
    int N = 100;
    double sum = 0;
    srand(time(NULL));
    for(int i = 0; i < N; i++)
    {
        sum += (1.0 / (double)N) *(rand() % (b - a + 1) + a);
    }
    return sum;
}

int main(void)
{
    double y = norm(-2, 10);

    return 0;
}