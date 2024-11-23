#include <stdio.h>

double get_qm(double qm_1, int m, int x)
{
    return (m - 1) / m * qm_1 + 1 / m * x;
}

int main(void)
{
    int x;
    int m = 1;
    double qm, qm_1;

    while(scanf("%d", &x) == 1) {
        qm = get_qm(qm_1, m, x);
        qm_1 = qm;
        m++;
    }

    printf("%.3f", qm);

    return 0;
}