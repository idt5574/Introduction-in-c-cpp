#include <stdio.h>

int main(void)
{
    int rect_width = 1280, rect_height = 720;
    int w = 8, h = 8;
    scanf("%d; %d", &w, &h);

    int x = rect_width % w;
    int y = rect_height % h;
    printf("%d %d", x, y);

    return 0;
}