#include <stdio.h>

#define MAX_WIDTH 256.0
#define MAX_HEIGHT 500.0

int main(void)
{
    double width, height;
    scanf("%lf %lf", &width, &height);

    if(width > MAX_WIDTH) width = MAX_WIDTH;
    if(height > MAX_HEIGHT) height = MAX_HEIGHT;

    printf("%.1f %.1f", width, height);

    return 0;
}
