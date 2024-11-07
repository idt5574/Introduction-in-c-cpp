#include <stdio.h>

enum calc_types
{
    _perimetr = 1,
    _square = 2
};

double calc_rect(double width, double height, int type)
{
    double res;
    switch (type)
    {
    case _perimetr: 
        res = (width + height) * 2.0;
        break;
    case _square:
        res = width * height;
    }
    return res;
}

int main(void)
{
    int t;
    double w, h;
    scanf("%d %lf %lf", &t, &w, &h);

    double res = calc_rect(w, h, t);
    printf("%.1f", res);

    return 0;
}