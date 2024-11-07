#include <stdio.h>
#include <math.h>

int main(void)
{
    int m, n, k;
    double sum = 0, sumF = 0;
    scanf("%d %d %d", &m, &n, &k);

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            for(int t = 1; t <= k; t++){
                sum += pow((double)j, 2.0) / (pow((double)i + (double)t, 3.0) - (double)t);
            }
        }
    }

    sumF = sum * (1.0 / ((double)n + (double)m + (double)k));
    printf("%.4f", sumF);

    return 0;
}