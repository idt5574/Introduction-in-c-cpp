#include <stdio.h>

#define TOTAL     20

int main(void)
{
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while(count < sz_ar && scanf("%f", &ws[count]) == 1)
        count++;

    for(int i = count / 2; i < count; i++) {
        for(int j = i; j < count; j++) {
            if(ws[i] < ws[j]) {
                float temp = ws[i];
                ws[i] = ws[j];
                ws[j] = temp;
            }
        }
    }

    for(int i = 0; i < count; i++) printf("%.2f ", ws[i]);

    return 0;
}