#include <iostream>
#include <cstring>
#include <cassert>

void set_tag(char* str, size_t len, char* tag = "h1\0")
{
    char* temp = (char *)calloc(strlen(str), sizeof(char));
    strcpy(temp, str);

    sprintf(str, "<%s>%s</%s>", tag, temp, tag);

    free(temp);
}

int main()
{
    std::string title, tag;

    getline(std::cin, title);
    getline(std::cin, tag);

    char title_buff_1[100];
    char title_buff_2[100];
    char c_tag[100];

    strcpy(title_buff_1, title.c_str());
    strcpy(title_buff_2, title.c_str());
    strcpy(c_tag, tag.c_str());

    set_tag(title_buff_1, 100);
    printf("%s\n", title_buff_1);

    set_tag(title_buff_2, 100, c_tag);
    printf("%s\n", title_buff_2);

    return 0;
}