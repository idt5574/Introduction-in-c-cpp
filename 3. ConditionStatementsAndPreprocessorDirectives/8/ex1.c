#include <stdio.h>

#define MAX_WIDTH       1280
#define GET_WIDTH(W)    W <= MAX_WIDTH ? W : MAX_WIDTH

int main(void)
{
    int width;
    scanf("%d", &width);

    printf("width = %d", GET_WIDTH(width));

    return 0;
}