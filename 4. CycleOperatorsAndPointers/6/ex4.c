#include <stdio.h>

int main(void)
{
    int var;

    scanf("%d", &var);

    int *ptr_var = &var;
    char *ptr_ch = (char *)ptr_var;
    printf("%d", *ptr_ch); 

    return 0;
}