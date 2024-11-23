#include <stdio.h>

#define MUL_VAR_NAME(A, B) int mul_ ##A ##_##B = A * B;

int main(void)
{
    int a, b;
    if((scanf("%d %d", &a, &b) != 2)) {
        printf("Error input.");
        return 0;
    }

    MUL_VAR_NAME(a, b);
    printf("%d", mul_a_b);

    return 0;
}