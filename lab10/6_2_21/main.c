#include <stdio.h>
#include <stdlib.h>

void foo(int **tab, int wiersze, int kolumny)
{
    for(int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny / 2; j++)
        {
            int temp = tab[i][j];
            tab[i][j] = tab[i][kolumny - j - 1];
            tab[i][kolumny - j - 1] = temp;
        }
    }
}

int main()
{
    int wiersze = 6;
    int kolumny = 2;
    int **tab = (int **)malloc(wiersze * sizeof(int *));
    for (int i = 0; i < wiersze; i++)
    {
         tab[i] = (int *)malloc(kolumny * sizeof(int));
    }

    printf("Przed:\n");
    for (int i = 0; i<wiersze; i++)
    {
        for(int j = 0; j<kolumny; j++)
        {
            tab[i][j] = i * kolumny + j;
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    foo(tab, wiersze, kolumny);

    printf("Po:\n");
    for (int i = 0; i <wiersze; i++)
    {
        for(int j = 0; j <kolumny; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
