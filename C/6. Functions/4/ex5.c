#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 20

int get_data_csv(double* ar, int lengthm, char* str)
{
    char al[] = "0123456789-";
    int i = 0;

    char* ptr = strchr(str, ':');
    while (strchr(al, *++ptr) == NULL);
    ar[i++] = atof(ptr);
    while (strchr(ptr, ';') != NULL)
    {
        ptr = strchr(ptr, ';');
        while (strchr(al, *++ptr) == NULL);
        ar[i++] = atof(ptr);

    }

    return i;
}

int main(void)
{
    char str[100] = {0};
    double ar[20];
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    int len = get_data_csv(&ar[0], MAX_LENGTH, &str[0]);
    for(int i = 0; i < len; i++) printf("%.2f ", ar[i]);
    
    return 0;
}