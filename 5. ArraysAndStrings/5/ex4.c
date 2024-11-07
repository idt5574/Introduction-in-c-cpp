#include <stdio.h>

#define TOTAL     10

int main(void)
{
    int value = -1;
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while(count < sz_ar && scanf("%d", &digs[count]) == 1) {
        if(digs[count] == 5 && count < sz_ar - 1) {
            count++;
            digs[count] = value;
            value--;
        }
        count++;
    }

    for(int i = 0; i < count; i++) printf("%d ", digs[i]);

    return 0;
}