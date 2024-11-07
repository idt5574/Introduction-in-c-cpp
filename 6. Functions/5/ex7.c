#include <stdio.h>

int sum_big2(int a, int b, int c, int d)
{
    int ar[4] = {a, b, c, d};
    
    for(int i = 0; i < 4; i++)
        for(int j = i; j < 4; j++)
            if(ar[j] > ar[i]) {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }

    return ar[0] + ar[1];
}

int main(void)
{
    int a, b, d, c;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int sum = sum_big2(a, b, c, d);
    printf("%d", sum);

    return 0;
}