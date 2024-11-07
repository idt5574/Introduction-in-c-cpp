#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

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

double reley(double x1, double x2)
{
    double y = sqrt(pow(x1, 2) + pow(x2, 2));
    return y;
}

int main(void)
{
    double res = reley(norm(0, 5), norm(0, 5));

    return 0;
}