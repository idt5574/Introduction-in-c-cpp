#include <stdio.h>
#include <string.h>

int main(void)
{
    char city[51];
    char city2[51];
    char max_len1 = -100;
    char max_len2 = -100;
    
    for(int i = 0; i < 6; i++) {
        char temp[51];
        scanf("%50s", temp);
        char temp_len = strlen(temp);
        if(temp_len > max_len1) {
            max_len2 = max_len1;
            max_len1 = temp_len;
            strcpy(city2, city);
            strcpy(city, temp);
        } else if(temp_len > max_len2) {
            max_len2 = temp_len;
            strcpy(city2, temp);
        }
    }

    printf("%s %s", city, city2);

    return 0;
}