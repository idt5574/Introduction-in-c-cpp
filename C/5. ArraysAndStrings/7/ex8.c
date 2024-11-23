#include <stdio.h>

int main(void)
{
    char str[50] = "Best   language  \"C\"";

    for(int i = 0; i < sizeof(str) / sizeof(char); i++) {
        if(str[i] == ' ') {
            int left = i, right = i;
            for(int j = i; j < sizeof(str) / sizeof(char); j++) {
                if(str[j + 1] != ' ') {
                    right = j;
                    break;
                }
            }
            str[left] = '\n';
            for(int j = i + 1; j < sizeof(str) / sizeof(char); j++)
                str[j] = str[j + (right - left)];
        }
    }

    return 0;
}