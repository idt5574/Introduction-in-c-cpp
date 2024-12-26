#include <iostream>

enum {
    total_points = 100
};

struct tag_point_3d
{
    int x, y, z;
};


int main()
{
    tag_point_3d points[total_points];
    short count = 0;

    while (count < total_points && std::cin >> points[count].x >> points[count].y >> points[count].z)
        count++;
    
    std::cout << points[0].x << ' ' << points[0].y << ' ' << points[0].z << std::endl;
 
    // __ASSERT_TESTS__
    return 0;
}