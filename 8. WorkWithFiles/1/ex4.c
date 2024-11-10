#include <stdio.h>

int main(void)
{
    FILE* fl = fopen("test.dat", "r");
    
    if(fl == NULL) 
        return 2;

    return 0;
}