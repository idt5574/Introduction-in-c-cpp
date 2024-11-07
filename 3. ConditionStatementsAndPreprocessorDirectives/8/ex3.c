#include <stdio.h>
#include <math.h>

#define GIPOT(A, B) sqrt((A) * (A) + (B) *(B))

int main(void)
{
    int a, b;
    if(scanf("%d, %d", &a, &b) != 2) {
        printf("Input error");
        return 0;
    }
    
    double length = GIPOT(a + 3, b - 2);
    printf("%.2f", length);

    return 0;
}