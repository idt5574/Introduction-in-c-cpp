#include <stdio.h>

int main(void)
{
    int value;
    scanf("%d", &value);
    short *ptr_val = (short *)&value;

    for(int i = 0; i < sizeof(int); i++) {
        *ptr_val += 1;
        ptr_val++;
    }

    printf("%d", value);

    return 0;
}