#include <stdio.h>

int main(void)
{
    int n = 5, m = 7;
    int total = 5;

    for(int i = 0;i < total; ++i) {
        int x, y;
        scanf("%d, %d", &x, &y);

        if((x >= 1 && x <= n) && (y >= 1 && y <= m)) printf("(%d, %d)\n", x, y);
    }

    return 0;
}