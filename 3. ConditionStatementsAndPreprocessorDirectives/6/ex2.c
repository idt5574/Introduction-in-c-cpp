#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int a = rand() % (N + 1);
    int b = rand() % (N + 1);
    int c = rand() % (N + 1);
    int d = rand() % (N + 1);
    int e = rand() % (N + 1);
    int f = rand() % (N + 1);
    int g = rand() % (N + 1);

    printf("%d %d %d %d %d %d %d", a, b, c, d, e, f, g);

    return 0;
}