#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 20

int to_csv(char *str, const double* ar, int length)
{
    short cnt = 0;
    char template_1[] = "%.2f; ";
    char template_2[] = "%.2f\0";

    strcpy(str, "csv: ");
    str = strrchr(str, ':');
    str += 2;

    for(int i = 0; i < length; i++) {
        char sub_str[10];
        if(i != length - 1)
            sprintf(sub_str, template_1, ar[i]);
        else
            sprintf(sub_str, template_2, ar[i]);
        strcat(str, sub_str);
        str = strrchr(str, ';');
        str += 2;
        cnt++;
    }

    return cnt;
}

int main(void)
{
    char str[100] = {0};
    double ar[SIZE];
    short cnt = 0;
    while (scanf("%lf", &ar[cnt]) == 1) cnt++;
    int res = to_csv(&str[0], ar, cnt);
    printf("%s", str);

    return 0;
}
