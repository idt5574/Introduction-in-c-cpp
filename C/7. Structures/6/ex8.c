#include <stdio.h>

enum {
    total_points = 100
};

struct tag_point_3d
{
    int x;
    int y;
    int z;
};


int main(void)
{
    struct tag_point_3d points[total_points] = {0};
    short total = 0;

    while (1)
    {
        int temp_x, temp_y, temp_z;
        short temp = scanf("%d %d %d", &temp_x, &temp_y, &temp_z);
        if(temp == 3)
        {
            points[total].x = temp_x;
            points[total].y = temp_y;
            points[total++].z = temp_z;
        } else break;
    }

    printf("%d %d %d", points[total - 1].x, points[total - 1].y, points[total - 1].z);

    return 0;
}