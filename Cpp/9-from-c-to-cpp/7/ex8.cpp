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

int main()
{
    point figure[corners];
    point pt;

    int count = 0;
    while(count < corners && scanf("%d; %d", &figure[count].x, &figure[count].y) == 2)
        count++;

    if(count != corners) {
        puts("Неверное количество или формат входных данных.");
        return 1;
    }

    if(scanf("%d; %d", &pt.x, &pt.y) != 2) {
        puts("Неверное количество или формат входных данных.");
        return 2;        
    }

    const double quad_area = quadrilateral_area(figure[0], figure[1], figure[2], figure[3]);
    double area_sum{0.0};

    for(int i = 0; i < 4; i++) {
        if(i == 3) {
            area_sum += triangle_area(pt, figure[i], figure[0]);
            break;
        }

        area_sum += triangle_area(pt, figure[i], figure[i + 1]);
    }

    //std::cout << quad_area << ' ' << area_sum << std::endl;
    
    if(abs(quad_area - area_sum) < 0.00001)
        std::cout << "yes";
    else std::cout << "no";

    return 0;
}