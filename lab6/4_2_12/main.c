#include <stdio.h>
#include <stdlib.h>
void fooa(int n, int tab[])
{
    for (int i = 0; i < n/2; i++)
    {
        int temp = tab[i];
        tab[i] = tab[n-i-1];
        tab[n-i-1] = temp;
    }
}
void foob(int n, int tab[])
{
    int temp = tab[0];
    for (int i = 0; i < n-1; i++) {
        tab[i] = tab[i+1];
    }
    tab[n-1] = temp;
}
void fooc(int n, int tab[])
{
    int temp = tab[n-1];
    for (int i = n-1; i > 0; i--)
    {
        tab[i] = tab[i-1];
    }
    tab[0] = temp;
}
int maksimum(int n, int tab[])
{
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (tab[i] > tab[max])
        {
            max = i;
        }
    }
    return max;
}
void sortuj(int n, int tab[]) {
    for (int i = n-1; i > 0; i--) {
        int max = maksimum(i+1, tab);
        int temp = tab[i];
        tab[i] = tab[max];
        tab[max] = temp;
    }
}
int minimum(int n, int tab[]) {
    int min = 0;
    for (int i = 1; i < n; i++) {
        if (tab[i] < tab[min]) {
            min = i;
        }
    }
    return min;
}
void sortujm (int n, int tab[])
{
    for (int i = n-1; i > 0; i--)
    {
        int min = minimum(i+1, tab);
        int temp = tab[i];
        tab[i] = tab[min];
        tab[min] = temp;
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
    int tab1[] = {4,2,3,5,-2};
    fooa(5,tab1);
    wyswietlTablice(5,tab1);
    foob(5,tab1);
    wyswietlTablice(5,tab1);
    fooc(5,tab1);
    wyswietlTablice(5,tab1);
    return 0;
}
