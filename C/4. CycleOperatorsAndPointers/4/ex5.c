#include <stdio.h>

int main(void)
{
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    for(int i = 0; i <= a; i++) {
        for(int j = 0; j <= b; j++) {
            if(i + j < 10) {
                sum += i + j;
            } else {
                goto PRINT_SUM;
            }
        }
    }

    PRINT_SUM : printf("%d", sum);

    return 0;
}