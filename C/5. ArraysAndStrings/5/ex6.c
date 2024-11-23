#include <stdio.h>

#define TOTAL     20

int main(void)
{   
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);

    while(count < sz_ar && scanf("%hd", &pows[count]) == 1) {
        if(pows[count] % 3 == 0) {
            continue;
        }
        count++;
    }

    for(int i = 0; i < count; i++) printf("%d", pows[i]);

    return 0;
}