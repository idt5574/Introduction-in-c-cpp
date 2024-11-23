#include <stdio.h>
#define MAX_LENGTH    20

int sum_ar(const short* ar, size_t len, size_t indx);

int main(void)
{
    short ar[MAX_LENGTH];
    int count = 0;
    while(count < MAX_LENGTH && scanf("%hd", &ar[count]) != EOF)
        count++;

    int res = sum_ar(ar, count, 0);
    printf("%d\n", res);

    return 0;
}

int sum_ar(const short* ar, size_t len, size_t indx)
{
    int res = ar[indx];
    printf("Deep IN: %lu\n res = %d\n", indx, res);
    if (indx < len - 1)
        res += sum_ar(ar, len, indx + 1);
    
    printf("Deep OUT: %lu\n res = %d\n", indx, res);
    return res;
}