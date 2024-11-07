#include <stdio.h>

typedef struct {
    double re; // действительная часть 
    double im; // мнимая часть
} COMPLEX;

COMPLEX complex_sum(COMPLEX cmp_1, COMPLEX cmp_2)
{
    return (COMPLEX) {cmp_1.re + cmp_2.re, cmp_1.im + cmp_2.im};
}

int main(void)
{
    COMPLEX cmp_1, cmp_2;
    scanf("%lf, %lf,", &cmp_1.re, &cmp_1.im);
    scanf("%lf, %lf", &cmp_2.re, &cmp_2.im);

    COMPLEX res = complex_sum(cmp_1, cmp_2);  

    return 0;
}