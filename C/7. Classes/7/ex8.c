#include <stdio.h>

typedef struct
{
    int x;
    int y;
} POINT;

typedef struct
{
    double mean_x;
    double mean_y;
} DATA;

DATA get_means(POINT* ar, size_t count)
{
    DATA temp = {0.0,  0.0};

    for(int i = 0; i < count; i++)
    {
        temp.mean_x += ar[i].x;
        temp.mean_y += ar[i].y;
    }

    temp.mean_x /= count;
    temp.mean_y /= count;

    return temp;
}

int main(void)
{
    POINT points[20];
    size_t i = 0;

    while (i < 20 && scanf("%d %d", &points[i].x, &points[i].y) == 2) i++;

    DATA res = get_means(points, i);

    printf("%.2f %.2f", res.mean_x, res.mean_y);

    return 0;
}