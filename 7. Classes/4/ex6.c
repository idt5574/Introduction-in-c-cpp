#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int* lengths = malloc(1 * sizeof(int));
    int* ptr_lens = calloc(20, sizeof(int));
    size_t count = 0;
    int x;

    while (scanf("%d", &x) != 0)
    {   
        lengths[count] = x;
        count++;
        if(count < 20)
        {
            lengths = realloc(lengths, count * sizeof(int));
        }
        else break;
    }
    
    memcpy(ptr_lens, lengths, count * sizeof(int));

    for(int i = 0; i < 20; i++) printf("%d ", ptr_lens[i]);

    return 0;
}
