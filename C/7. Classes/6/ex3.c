#include <stdio.h>

struct tag_vector
{
    int x;
    int y;
    int z;
};


int main(void)
{
    struct tag_vector vector;
    scanf("%d %d %d", &vector.x, &vector.y, &vector.z);
    

    return 0;
}