#include <stdio.h>
#include <string.h>

int main(void)
{
    char hh, mm, ss;
    scanf("%hhd:%hhd:%hhd", &hh, &mm, &ss);
    printf("%02d:%02d:%02d", ss, mm, hh);

    return 0;
}