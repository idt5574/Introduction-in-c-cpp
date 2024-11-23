#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tag_obj
{
    char url[1024];
    struct tag_obj* next;
} OBJ;

OBJ* push(OBJ* top, const char* url)
{
    OBJ* temp = malloc(sizeof(OBJ));
    strcpy(temp->url, url);

    printf("\nAdded: %s\nNext: %s\n", url, top->url);

    temp->next = top;
    return temp;
}

OBJ* pop(OBJ* top)
{
    if (top == NULL)
        return top;

    printf("Removed: %s\n", top->url);
    OBJ* ptr_next = top->next;
    free(top);
    
    return ptr_next;
}

void show_stack(const OBJ* top)
{
    const OBJ* current = top;
    while(current != NULL) {
        printf("%s\n", current->url);
        current = current->next;
    }
}

int main(void)
{
    OBJ* top = NULL;

    top = push(top, "https://proproprogs.ru/c_base/c_etapy-translyacii-programmy-v-mashinnyy-kod-standarty");
    top = push(top, "https://proproprogs.ru/c_base/c_struktura-i-ponimanie-raboty-programmy-hello-world");
    top = push(top, "https://proproprogs.ru/c_base/c_dvoichnaya-shestnadcaterichnaya-i-vosmerichnaya-sistemy-schisleniya");
    top = push(top, "https://proproprogs.ru/c_base/c_lokalnye-i-globalnye-peremennye");
    top = push(top, "https://proproprogs.ru/c_base/c_perechisleniya-enum-direktiva-typedef");

    while (top)
    {
        top = pop(top);
    }
    

    return 0;
}