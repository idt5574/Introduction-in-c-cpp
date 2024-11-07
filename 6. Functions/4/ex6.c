#include <stdio.h>

#define SIZE    4

int main(void)
{
    short matrix[SIZE][SIZE] = {0};
    short* ptr = &matrix[0][0];
    int count = 0;
    while(count < SIZE * SIZE && scanf("%hd", ptr) == 1) {
        ptr++;
        count++;
    }

    // здесь продолжайте программу

    return 0;
}