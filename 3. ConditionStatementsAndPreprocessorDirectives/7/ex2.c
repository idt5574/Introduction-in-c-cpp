#include <stdio.h>

#define PI 3.1415
#define GRAD rad * 180.0 / PI 

int main(void)
{
    double rad;
    scanf("%lf", &rad);

    double grad = GRAD;
    printf("%.2f", grad);

    return 0;
}