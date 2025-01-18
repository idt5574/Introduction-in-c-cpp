#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short* data = malloc(4 * sizeof(short));
    
    data[1] = -4;
    data[2] = 3;
    data[3] = 0;
    data[4] = 100;

    free(data);

    return 0;
}