#include <stdio.h>
#include <string.h>

int main(void)
{
    char city[51];
    char max_len = -100;
    
    for(int i = 0; i < 6; i++) {
        char temp[51];
        scanf("%50s", temp);
        char temp_len = strlen(temp);
        if(temp_len > max_len) {
            max_len = temp_len;
            strcpy(city, temp);
        }
    }

    printf("%s", city);

    return 0;
}