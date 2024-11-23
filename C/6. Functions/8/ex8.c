#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int get_data_csv(double*, int, char*);

int main(void)
{
    char str[100] = {0};
    double res[20] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    int len = get_data_csv(res, 20, str);

    for(int i = 0; i < len; i++)
        printf("%.2lf ", res[i]);

    return 0;
}

int get_data_csv(double* ar, int max_len, char* source)
{
    char* ptr = source;
    int count = 0;
    while(((ptr = strchr(ptr, ' ')) != NULL) && (count < max_len))
    {
       sscanf(ptr++, "%lf", ar[count++]);
    }
    
    return count;
}