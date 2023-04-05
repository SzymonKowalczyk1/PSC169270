#include <stdio.h>
#include <stdlib.h>
void fooa(int n, int *tab1, int *tab2, int *tab3)
{
    for (int i = 0; i < n; i++)
    {
        *(tab3 + i) = *(tab1 + i) + *(tab2 + i);
    }
}
void foob(int n, int *tab1, int *tab2, int *tab3)
{
    for (int i = 0; i< n; i++){
        if (*(tab1 + i) > *(tab2 + i)) {
            *(tab3 + i) = *(tab1 + i);
        }
        else {
            *(tab3 + i) = *(tab2 + i);
        }
    }
}
void fooc(int n, int *tab1, int *tab2, int *tab3)
{
    int temp[n];
    for (int i = 0; i < n; i++) {
    *(temp + i) = *(tab1 + i);
    *(tab1 + i) = *(tab3 + i);
    *(tab3 + i) = *(tab2 + i);
    *(tab2 + i) = *(temp + i);
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
    int n = 5;
    int tab1[] = {3,4,5,7,-2};
    int tab2[] = {4,5,6,-3,2};
    int tab3[n];
    fooa(n,tab1,tab2,tab3);
    wyswietlTablice(n, tab3);
    foob(n, tab1, tab2, tab3);
    wyswietlTablice(n, tab3);
    fooc(n, tab1, tab2, tab3);
    wyswietlTablice(n, tab3);
    return 0;
}
