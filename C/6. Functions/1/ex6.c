#include <stdio.h>
#include <stdbool.h>

int is_triangle(int a, int b, int c)
{
    if(a + b > c && a + c > b && b + c > a) return 1;
    else return 0;
}

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int answ = is_triangle(a, b, c);
    printf("%d", answ);

    return 0;
}