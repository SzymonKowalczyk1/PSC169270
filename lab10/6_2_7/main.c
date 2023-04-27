#include <stdio.h>
#include <stdlib.h>
int** alokuj(int n)
{
    int ** t=malloc(n*sizeof(int*));
    int i;
    for (i = 0; i<n; i++)
    {
       t[i] = malloc ((i+1)*sizeof(int));
    }
    return t;
}
void wyswietl(int n, int **tab) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("[%d,%d]=%d ", i, j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}
int main()
{
    int **tab = alokuj(5);
    wyswietl(5,tab);
    return 0;
}
