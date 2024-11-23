#include <stdio.h>

int get_volume(int h, int w, int d)
{
    int volume = h * w * d;
    return volume;
}

int main(void)
{
    int h, w, d;
    scanf("%d %d %d", &h, &w, &d);
    int x = get_volume(h, w, d);
    printf("%d", x);

    return 0;
}