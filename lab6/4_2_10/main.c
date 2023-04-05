#include <stdio.h>
#include <stdlib.h>

int fooa(int n, int * tab)
{
    int max = tab[0];
    for (int i = 1; i < n; i++)
    {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}
int foob(int n, int * tab)
{
    int temp = * tab;
    for(int i = 1; i < n; i++){
        if (temp > * (tab+i))
        {
            temp = *(tab+i);
        }
    }
    return temp;

}
int fooc(int n, int * tab)
{
    int najw = 0;
    for (int i = 1; i < n; i++) {
        if (tab[i] > tab[najw]) {
            najw = i;
        }
    }
    return najw;
}
int food(int n, int * tab)
{
    int najm = 0;
    for (int i = 1; i < n; i++) {
        if (tab[i] < tab[najm]) {
            najm = i;
        }
    }
    return najm;
}

int fooe(int n, int *tab)
{
    int max = abs(tab[0]);
    for (int i = 1; i < n; i++)
    {
        if (abs(tab[i]) > max)
        {
            max = abs(tab[i]);
        }
    }
    return max;
}
int foof(int n, int *tab)
{
    int maxi = 0;
    for (int i = 1; i < n; i++) {
        if (abs(tab[i]) > abs(tab[maxi])) {
            maxi = i;
        }
    }
    return maxi;
}
int main()
{

  int tab[] = {3, -5, 2, 7, -8};

    printf("%d\n", fooa(5, tab));
    printf("%d\n", fooc(5, tab));
    printf("%d\n", fooe(5, tab));
    printf("%d\n", food(5, tab));




    return 0;
}
