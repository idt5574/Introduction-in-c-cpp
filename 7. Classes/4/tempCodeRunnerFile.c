#include <stdio.h>
#include <stdlib.h>

#define TOTAL   10

void* expand_array(short* ptr, size_t* len, short fill)
{
    short* new_ar = malloc(*len * 2 * sizeof(short));
    
    for(int i = 0; i < *len * 2; i++)
    {
        if(i < *len) new_ar[i] = ptr[i];
        else new_ar[i] = fill;
    }

    free(ptr);

    return new_ar;
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

    short* new_ar = expand_array(ptr_d, &len, -1);

    for(int i = 0; i < count * 2; i++) printf("%hd ", new_ar[i]);

    free(ptr_d);
    return 0;
}