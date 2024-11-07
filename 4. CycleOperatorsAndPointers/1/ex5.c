#include <stdio.h>

int main(void)
{
    int n, m;
    if(scanf("%d %d", &n, &m) != 2) {
        printf("Error input.");
        return 0;
    }
    while(n <= m) {
        if(n % 3 == 0) printf("%d ", n);
        n++;
    }

    return 0;
}