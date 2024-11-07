#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);

    bool wi = rect_width % w != 0;
    bool he = rect_height % h != 0;

    int res = rect_width / w * wi + rect_height / h * he + 1 * (wi || he);
    printf("%d", res);

    return 0;
}