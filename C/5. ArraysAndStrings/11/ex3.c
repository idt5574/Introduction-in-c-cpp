#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str[100] = {0};
    char alp[] = "0123456789";
    char counter = 0;
    int h = 0, w = 0 , d = 0;
    char j = 0;
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    ptr_n = strchr(str, ':');
    ptr_n += 2;
    h = atoi(ptr_n);
    ptr_n = strchr(ptr_n, 'x');
    ptr_n += 2;
    w = atoi(ptr_n);
    ptr_n = strchr(ptr_n, 'x');
    ptr_n += 2;
    d = atoi(ptr_n);

    printf("%d %d %d", h, w, d);
    

    return 0;
}