#include <stdio.h>
#define MAX_RECURSION    4

void recursive(int min_rec);

int main(void)
{
    recursive(1);

    printf("\n");
    return 0;
}

void recursive(int min_rec)
{
    if(min_rec < MAX_RECURSION)
        recursive(min_rec + 1);

    printf("%d ", min_rec);
}