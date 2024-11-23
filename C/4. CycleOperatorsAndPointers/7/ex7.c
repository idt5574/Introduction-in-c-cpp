#include <stdio.h>

#define SIZE_OF_INT 4

int main(void)
{
    int a, turner = 61;
    scanf("%d", &a);
    char *ptr = (char *)&a;

    for(int i = 0; i < SIZE_OF_INT; i++) {
        *ptr = *ptr & turner;
        ptr++;
    }

    printf("%d", a);

    return 0;
}