#include <stdio.h>

int main(void)
{
    unsigned short var_1;
    unsigned int var_2;
    unsigned long long var_3;
    unsigned char ar[sizeof(short) + sizeof(int) + sizeof(long long)];
    char i = 0;

    scanf("%hu, %u, %llu", &var_1, &var_2, &var_3);
    unsigned char *ptr_var_1 = (unsigned char *)&var_1, 
    *ptr_var_2 = (unsigned char *)&var_2, 
    *ptr_var_3 = (unsigned char *)&var_3; 

    for(int j = 0; j < sizeof(short); j++, i++, ptr_var_1++) {
        ar[i] = *ptr_var_1;
        printf("%u ", ar[i]);
    }

    for(int j = 0; j < sizeof(int); j++, i++, ptr_var_2++) {
        ar[i] = *ptr_var_2;
        printf("%u ", ar[i]);
    }

    for(int j = 0; j < sizeof(long long); j++, i++, ptr_var_3++) {
        ar[i] = *ptr_var_3;
        printf("%u ", ar[i]);
    }

    return 0;
}