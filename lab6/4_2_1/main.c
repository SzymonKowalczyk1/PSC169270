#include <stdio.h>
#include <stdlib.h>
//w notacji tablicowej
void fooa(int n, int tab[])
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = 0;
    }
}
void foob(int n, int tab[]) {
    for (int i = 0; i < n; i++)
    {
        tab[i] = i;
    }
}
void fooc(int n, int tab[]) {
    for (int i = 0; i < n; i++)
    {
        tab[i] *= 2;
    }
}
void food(int n, int tab[]) {
    for (int i = 0; i < n; i++)
    {
        if (tab[i] < 0) {
           tab[i] = -tab[i];
        }
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
int main()
{
    int tab[]={3,4,5,6,-3};
    int tab2[]={3,-4};
    food(5,tab);
    wyswietlTablice(5,tab);
    return 0;
}
