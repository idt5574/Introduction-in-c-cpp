#include <stdio.h>

int main(void)
{
    short type = 0;
    double w, h;

    if(scanf("%hd %lf %lf", &type, &w, &h) != 3) {
        printf("Input error.");
        return 0;
    }

    double x = type == 1 ? (w * h) : (type == 2) ? (2.0 * (w + h)) : -1;
    printf(x == -1 ? "-1" : "%.1f", x);

    return 0;
}