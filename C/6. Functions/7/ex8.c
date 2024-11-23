#include <stdio.h>
#include <string.h>

void fromMorze(char* source, char* result, char* curent, short i_cur, short i_res, short i, size_t max_len)
{
    char alph[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'
    , 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', ' '};
    
    char* morze[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", 
    ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-",
    "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-",
    ".....", "-....", "--...", "---..", "----.", "-----", "-...-"};

    if(i < max_len)
    {
        if(source[i] != ' ')
        {
            curent[i_cur] = source[i];
            i_cur++;
            i++;
            fromMorze(source, result, curent, i_cur, i_res, i, max_len);
        }
        else
        {
            curent[i_cur] = '\0';
            for(int j = 0; j < 37; j++)
                if(strncmp(curent, morze[j], strlen(curent) + 1) == 0)
                {
                    result[i_res] = alph[j];
                    i_res++;
                    i++;
                    strcpy(curent, "    ");
                    break;
                }
            fromMorze(source, result, curent, 0, i_res, i, max_len);   
        }   
    }
}

int main(void)
{
    char str[100] = {0};
    char res[100] = {0};
    char cur[5] = "";
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    size_t len = strlen(str);
    printf("%ld, %c%c%c\n", len, str[18], str[19], str[20]);

    fromMorze(str, res, cur, 0, 0, 0, len);

    printf("%s\n", res);

    return 0;
}