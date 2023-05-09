#include <stdio.h>
#include <stdlib.h>
void foo (int **tab, int wiersze, int kolumny)
{
    for (int i = 0; i < wiersze; i++)
    {
        for(int j = 0; j < kolumny; j++)
        {
            printf("%d",tab[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int wiersze = 6;
    int kolumny = 2;
    int **tab = (int **)malloc(wiersze * sizeof(int *));
    for (int i=0; i<wiersze; i++)
    {
         tab[i] = (int *)malloc(kolumny * sizeof(int));
    }

    for (int i = 0; i < wiersze; i++)
    {
        for(int j = 0; j < kolumny; j++)
        {
            tab[i][j] = i * kolumny + j;
        }
    }
    foo(tab,wiersze,kolumny);
    return 0;
}
