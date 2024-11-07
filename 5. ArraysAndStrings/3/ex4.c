#include <stdio.h>

char buff_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
char buff_2[] = {12, 13, 14, 15, 16, 17, 18, 19};

int main(void)
{
    char buffer[128];
    char *ptr_ar = buffer;
    
    for(int i = 0; i < sizeof(buff_1) / sizeof(char); i++) {
        *ptr_ar = buff_1[i];
        ptr_ar++;
    }
    
    for(int i = 0; i < sizeof(buff_2) / sizeof(char); i++) {
        *ptr_ar = buff_2[i];
        ptr_ar++;
    }
    

    return 0;
}