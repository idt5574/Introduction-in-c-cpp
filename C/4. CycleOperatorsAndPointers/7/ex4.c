#include <stdio.h>

int main(void)
{
    double value;

    scanf("%lf", &value);

    char *ptr_val = (char *)&value;
    for(int i = 0; i < sizeof(double); i++) {
        printf("%d ", *ptr_val);
        ptr_val++;
    }

    return 0;
}