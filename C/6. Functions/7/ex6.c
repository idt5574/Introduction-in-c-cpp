#include <stdio.h>
#include <string.h>

void toMorze(char* source, char* result, short i)
{
    printf("IN: %s, %d\n", result, i);
    char alph[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'
    , 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', ' '};
    
    char* morze[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", 
    ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-",
    "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-",
    ".....", "-....", "--...", "---..", "----.", "-----", "-...-"};
    if(i < strlen(source))
    {
        for(int j = 0; j < 37; j++)
            if((source[i] >= 97 ? source[i] - 32 : source[i]) == alph[j])
            {
                strcat(result, morze[j]);
                strcat(result, " ");
                break;
            }
        i++;
        toMorze(source, result, i);
    }
    printf("OUT: %s, %d\n", result, i);
}

int main(void)
{
    char str[100] = {0};
    char res[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    toMorze(str, res, 0);

    printf("%s\n", res);

    return 0;
}