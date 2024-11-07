#include <stdio.h>

enum menu_item {
    item_exit = 1,
    item_c,
    item_python,
    item_java
};

int main(void)
{
    int item;
    scanf("%d", &item);

    switch (item)
    {
    case item_exit:
        printf("Выход\n");
        break;
    case item_c:
        printf("Язык Си\n");
        break;
    case item_python:
        printf("Язык Python\n");
        break;
    case item_java:
        printf("Язык Java\n");
        break;
    
    default:
        printf("Не верный пункт меню");
    }

    return 0;
}