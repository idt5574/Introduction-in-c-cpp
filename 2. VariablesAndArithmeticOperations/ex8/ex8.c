#include <stdio.h>

int main(void)
{
    unsigned height = 12345012;
    long long dist = 1234567890LL;
    double weight = 45.7845;

    printf("%u %llu %.4f", height, dist, weight);

    return 0;
}