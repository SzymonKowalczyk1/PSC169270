#include <stdio.h>
#include <stdlib.h>
int *** alokuj(int n, int m, int z)
{
    int *** temp = malloc(n*sizeof(int**));
    for (int i =0; i<n; i++)
    {
        temp[i] = malloc(m*sizeof(int));
        for (int j = 0; j<m; j++){
            temp[i][j] = malloc(z*sizeof(int));
        }
    }
    return temp;
}

void zwolnij(int *** tab, int n,int m, int z)
{
    for (int i = 0; i<n;i++)
    {
        for (int j =0; j<m; j++)
        {
            free(tab[i][j]);
        }
        free(tab[i]);
    }
    free(tab);
}
int main()
{
    int ***tab = alokuj(2,3,5);
    printf("%p\n", tab);
    zwolnij(tab,2,3,5);
    return 0;
}
