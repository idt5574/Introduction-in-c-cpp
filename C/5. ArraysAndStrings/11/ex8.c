#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TOTAL   10

int main(void)
{
    int y = 0, x = 0, z = 0, cnt = 0;
    char al[] = "0123456789-";
    char tags[10][50] = {"0"};
    float prices[10] = {0};
    char str[TOTAL][50] = {"0"};
    int count = 0;
    while(count < TOTAL && fgets(str[count], sizeof(str)-1, stdin)) {
        char* ptr_n = strrchr(str[count], '\n');
        if(ptr_n != NULL)
            *ptr_n = '\0';
        count++;
    }

    for(int i = 0; i < TOTAL; i++) {
        x = 0;
        if(strchr(str[i], ';') != NULL) {
            cnt++;
            char *ptr_n = strrchr(str[i], ';');
            while (strchr(al, *++ptr_n) == NULL);
            prices[z++] = atof(ptr_n);
            int j = 0;
            while (str[i][j] != ':')
            {
                tags[y][x++] = str[i][j++];
            }
            tags[y++][x++] = ' ';
        }
    }

    for(int i = 0; i < count; i++) {
        for(int j = i; j < count; j++) {
            if(prices[i] < prices[j]) {
                float temp_num = prices[i];
                prices[i] = prices[j];
                prices[j] = temp_num;

                char temp_str[50];
                strcpy(temp_str, tags[i]);
                strcpy(tags[i], tags[j]);
                strcpy(tags[j], temp_str);
            }
        }
    }

    for(int i = 0; i < cnt; i++) printf("%s", tags[i]);

    return 0;
}