#include <iostream>

enum {
    total_points = 128
};

struct tag_point
{
    float x, y;
};

int main()
{
    double mean_x = 0, mean_y = 0;
    tag_point ps[total_points];

    for(int i = 0; i < total_points; i++)
    {
        ps[i].x = (float)(rand()) / (float)RAND_MAX * (200.0) - 100.0;
        ps[i].y = (float)(rand()) / (float)RAND_MAX * (200.0) - 100.0;

        mean_x += ps[i].x;
        mean_y += ps[i].y;
    }

    mean_x /= (float)total_points;
    mean_y /= (float)total_points;

    // __ASSERT_TESTS__
    return 0;
}