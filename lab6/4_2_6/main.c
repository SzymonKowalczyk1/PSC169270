#include <stdio.h>
#include <stdlib.h>
void fooa(int n, int * tab1, int * tab2)
{
    for (int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}
void wyswietlTablice (int n, int tab[])
{
    for (int i =0; i<n;i++)
    {
        printf("[%d]=%d\n",i,tab[i]);
    }
    printf("--\n");
}
void foob(int n, int *tab1, int *tab2)
{
    for (int i = 0; i < n; i++)
    {
        tab2[n - 1 - i] = tab1[i];
    }
}
int main()
{
    int tab1[] = {2,4,5,6};
    int tab2[] = {8,7,9,5};
    fooa(4,tab1,tab2);
    printf("tab1:\n");
    wyswietlTablice(4, tab1);
    printf("tab2:\n");
    wyswietlTablice(3, tab2);
    foob(4,tab1,tab2);
    wyswietlTablice(4, tab1);
    wyswietlTablice(4, tab2);

    return 0;
}
