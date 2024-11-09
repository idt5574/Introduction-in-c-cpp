#include <stdio.h>

enum TYPE_COORD
{
    coord_int = 1, coord_double = 2
};

typedef union
{
    int coord_i;
    double coord_d;
} COORD;

typedef struct tag_point2
{
    COORD x;
    COORD y;
    enum TYPE_COORD type;
} POINT2;

int main(void)
{
    POINT2 pt;

    scanf("%d", &pt.type);

    if(pt.type == 1) scanf("%d %d", &pt.x, &pt.y);
    else scanf("%lf %lf", &pt.x, &pt.y);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}