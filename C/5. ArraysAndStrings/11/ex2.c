#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char h, m, s;
    char time[10];
    char template[] = "%02d";
    char hh[3], mm[3], ss[3];

    scanf("%hhd %hhd %hhd", &h, &m, &s);

    if(h > 23) strcpy(hh, "--"); else sprintf(hh, template, h);
    if(m > 59) strcpy(mm, "--"); else sprintf(mm, template, m);
    if(s > 59) strcpy(ss, "--"); else sprintf(ss, template, s);

    printf("%s:%s:%s", hh, mm ,ss);

    return 0;
}