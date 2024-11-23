#include <stdio.h>

int main(void)
{
    int ar[100], i = 0, a;
    int * const ptr_ar = ar;

    while (scanf("%d", &a) == 1 && a != 78)
    {
        ptr_ar[i] = a;
        i++;
    }

    for(int j = 0; j < i; j++) printf("%d ", ar[j]);
    
    return 0;
}