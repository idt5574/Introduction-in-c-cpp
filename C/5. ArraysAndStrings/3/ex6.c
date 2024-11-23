#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    short value, n = 10;
    while(scanf("%hd", &value) == 1 && n > 0) {
        if(value < 0 || value % 2 == 0) {
            printf("0");
            return 0;
        }
        n--;
    }

    printf("1");

    return 0;
}
