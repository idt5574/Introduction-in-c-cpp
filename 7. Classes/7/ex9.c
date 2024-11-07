#include <stdio.h>
#include <string.h>
#include <stdarg.h>

typedef struct
{
    char fname[100];
    char old;
    char stag;
    int salary;
    double efs;
} PERSON;

int count_symb(char* str, char symb)
{
    int temp = 0;
    for(int i = 0; i < strlen(str); i++)
        if(str[i] == symb)
            temp++;
    return temp;
}

void fill_data(PERSON* p, char* format, ...)
{
    //printf("func starded\n");
    int n = count_symb(format, '#');
    //printf("vars inic\n");
    

    va_list var;
    va_start(var, n);

    for(int i = 0; i < strlen(format); i++)
    {
        //printf("i = %d, c = %c\n", i, format[i]);
        switch (format[i])
        {
        case 'f':
            strcpy(p->fname, va_arg(var, char*));
            break;
        
        case 'o':
            p->old = va_arg(var, int);
            break;

        case 'g':
            p->stag = va_arg(var, int);
            break;

        case 's':
            p->salary = va_arg(var, int);
            break;
        
        case 'e':
            p->efs = va_arg(var, double);
            break;
        
        default:
            continue;
        }
    }
}

int main(void)
{
    char f[] = "#o #e #s #f";

    PERSON new_person;
    fill_data(&new_person, f, 24, 2.2, 100000, "Gruzzdev");

    printf("%d %.1f %d %s", new_person.old, new_person.efs, new_person.salary, new_person.fname);

    return 0;
}