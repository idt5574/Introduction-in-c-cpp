#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_correct(const char* str)
{
    if(strstr(str, "ra") != NULL)
        return 1;
    if(strstr(str, "Ra") != NULL)
        return 1;
    if(strstr(str, "rA") != NULL)
        return 1;
    if(strstr(str, "RA") != NULL)
        return 1;
    return 0;
}

typedef int (*FUNC_CORRECT)(const char*);

int get_correct_words(const char (*words)[50], int count_words, FUNC_CORRECT filter)
{
    int res = 0;
    for(int i = 0; i < count_words; i++)
        if(filter(words[i]) == 1)
            res++;
}

int main(void)
{
    char (*ar)[50] = malloc(50 * sizeof(*ar));
    short i = 0;

    while (scanf("%s", ar[i]) == 1 && i < 20)
    {
        i++;
    }

    int res = get_correct_words(ar, i, is_correct);
    printf("%d", res);

    return 0;
}