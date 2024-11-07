#include <stdio.h>
#include <math.h>

#define MAX_LENGTH 100

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    double length = sqrt(a * a + b * b);
    printf(length > MAX_LENGTH ? "Radius length exceeds value of MAX_LENGTH" : "%.2f", length); 

    return 0;
}