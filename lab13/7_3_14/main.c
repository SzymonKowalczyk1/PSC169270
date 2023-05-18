#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
void dodajw(struct element *Lista, struct element * elem,int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk ->i=a;
    wsk ->next=elem->next;
    elem->next=wsk;
}
int main()
{
    struct element *lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 7;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = -4;
    lista->next->next->next->next = NULL;
    struct element *wsk = lista->next;
    while (wsk != NULL)
    {
        printf("%d ", wsk->i);
        wsk = wsk->next;
    }
    printf("\n");
    return 0;
}

