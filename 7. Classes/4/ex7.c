#include <stdio.h>
#include <stdlib.h>

#define TOTAL   10

void* expand_array(short* ptr, size_t* len, short fill)
{
    *len = *len * 2;
    ptr = realloc(ptr, *len * sizeof(short));

    for(int i = *len / 2; i < *len; i++)
        ptr[i] = fill;

    return ptr;
}

int main(void)
{
   short * ptr_d = calloc(TOTAL,  sizeof(short));
   size_t len = TOTAL;
   if(ptr_d == NULL)
        return 0;

    int count = 0;
    while(count < TOTAL && scanf("%hd", &ptr_d[count]) == 1)
        count++;

    ptr_d = expand_array(ptr_d, &len, -1);

    for(int i = 0; i < len; i++) printf("%hd ", ptr_d[i]);

    free(ptr_d);
    return 0;
}