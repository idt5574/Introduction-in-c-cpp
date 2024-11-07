#include <stdio.h>
#include <stdbool.h>

#define TOTAL     10

int main(void)
{
    bool x = true;
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while(count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;

    for(int i = 0; i < count; i++) {
        if(digs[i] == 5) {
            for(int j = sz_ar - 1; j > i + 1; j--) digs[j] = digs[j - 1];
            digs[i + 1] = -5;
            x = false;
            count++;
            break;
        }
    }

    for(int i = 0; i < (count < sz_ar ? count : sz_ar); i++) printf("%d ", digs[i]);

    return 0;
}