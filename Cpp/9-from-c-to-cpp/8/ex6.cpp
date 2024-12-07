#include <iostream>
#include <math.h>

enum {corners = 4};

struct point {
    int x, y;
};

double line_length(point p1, point p2)
{
    return sqrt(pow((double)p2.x - (double)p1.x, 2.0) + pow((double)p2.y - (double)p1.y, 2.0));
}

double triangle_area(point p1, point p2, point p3)
{
    const double len_a = line_length(p1, p2);
    const double len_b = line_length(p2, p3);
    const double len_c = line_length(p3, p1);

    const double half_meter = (len_a + len_b + len_c) / 2.0;

    return sqrt(half_meter * (half_meter - len_a) * (half_meter - len_b) * (half_meter - len_c));
}

double quadrilateral_area(point p1, point p2, point p3, point p4)
{
    return abs(((double)p1.x - (double)p2.x) * ((double)p1.y + (double)p2.y) 
    + ((double)p2.x - (double)p3.x) * ((double)p2.y + (double)p3.y) 
    + ((double)p3.x - (double)p4.x) * ((double)p3.y + (double)p4.y)
     + ((double)p4.x - (double)p1.x) * ((double)p4.y + (double)p1.y)) / 2.0;
}

bool is_point_include(point arg, point* figure, short count_of_points)
{
    const double quad_area = quadrilateral_area(figure[0], figure[1], figure[2], figure[3]);
    double area_sum{0.0};

    for(int i = 0; i < count_of_points; i++) {
        if(i == (count_of_points - 1)) {
            area_sum += triangle_area(arg, figure[i], figure[0]);
            break;
        }

        area_sum += triangle_area(arg, figure[i], figure[i + 1]);
    }
    
    if(abs(quad_area - area_sum) < 0.00001)
        return true;
    else return false;
}

int main()
{
    point figure[corners];
    int count_of_points{0};
    int min_x = 1000, min_y = 1000, max_x = -1000, max_y = -1000;

    int count = 0;
    while(count < corners && scanf("%d; %d", &figure[count].x, &figure[count].y) == 2)
    {
        if(figure[count].x < min_x) min_x = figure[count].x;
        if(figure[count].x > max_x) max_x = figure[count].x;

        if(figure[count].y < min_y) min_y = figure[count].y;
        if(figure[count].y > max_y) max_y = figure[count].y;

        count++;
    }

    if(count != corners) {
        puts("Неверное количество или формат входных данных.");
        return 1;
    }

    for(int i = min_x; i <= max_x; i++)
        for(int j = min_y; j <= max_y; j++)
            if(is_point_include((point) {i, j}, figure, 4))
                count_of_points++;
    
    std::cout << count_of_points << std::endl;

    return 0;
}