#include <stdio.h>

int main(void)
{
    const char total = 5;
    short marks[100];

    for(int i = 0; i < total; i++) scanf("%d", &marks[i]);
    for(int i = total - 1; i >= 0; i--) printf("%d ", marks[i]);


    return 0;
}