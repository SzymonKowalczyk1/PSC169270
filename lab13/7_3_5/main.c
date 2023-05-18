#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
void wyczysc (struct element* lista)
{
    struct element *wsk = lista;
    while (lista != NULL)
    {
        lista = lista ->next;
        free(wsk);
        wsk = lista;
    }
}
int main()
{
    struct element *lista = NULL;
    printf("%p\n",lista);
    wyczysc(lista);
    return 0;
}
