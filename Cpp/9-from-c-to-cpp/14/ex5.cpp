#include <iostream>
#include <cstring>

void set_tag(char* str, size_t len, char* tag = "h1\0")
{
    len = strlen(str) + (strlen(tag) * 2) + 2 + 3;
    short start_str_len = strlen(str);

    str = (char *)realloc(str, len);

    for(int i = len - 1; i >= 0 + strlen(tag) + 2; i--)
        str[i] = str[i - (strlen(tag) + 2)];

    str[0] = '<';
    str[strlen(tag) + 1] = '>';
    for(int i = 1; i < strlen(tag) + 1; i++)
        str[i] = tag[i - 1];

    str[start_str_len + 2 + strlen(tag)] = '<';
    str[start_str_len + 3 + strlen(tag)] = '/';
    str[start_str_len + 4 + (strlen(tag) * 2)] = '>';

    for(int i = start_str_len + 4 + strlen(tag); i < start_str_len + 4 + (strlen(tag) * 2); i++)
        str[i] = tag[i - (start_str_len + 4 + strlen(tag))];
    
    printf("%s\n", str);
}

int main()
{
    std::string title, tag;

    getline(std::cin, title);
    getline(std::cin, tag);

    char* title_buffer = (char *)malloc(sizeof(title));
    char* tag_buffer = (char *)malloc(sizeof(tag));

    strcpy(title_buffer, title.c_str());
    strcpy(tag_buffer, tag.c_str());

    set_tag(title_buffer, 1);

    title_buffer = (char *)malloc(sizeof(title));
    tag_buffer = (char *)malloc(sizeof(tag));

    strcpy(title_buffer, title.c_str());
    strcpy(tag_buffer, tag.c_str());

    set_tag(title_buffer, 1, tag_buffer);
    
    free(title_buffer);
    free(tag_buffer);

    return 0;
}