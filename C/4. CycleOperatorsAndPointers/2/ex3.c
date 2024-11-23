#include <stdio.h>
#include <math.h>

int main(void)
{
    int b0, q, n;
    scanf("%d; %d; %d", &b0, &q, &n);

    for(int i = 0; i < n; i++) {
        printf("%d ", (b0 * (int)pow(q, i)));
    }

    return 0;
}