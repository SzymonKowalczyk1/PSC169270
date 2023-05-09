#include <stdio.h>
#include <stdlib.h>
void foo (int **tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = temp;
        }
    }

}
int main() {
    int n = 3;
    int **tab = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        tab[i] = malloc(n * sizeof(int));
    }

    tab[0][0] = 5;
    tab[0][1] = 4;
    tab[0][2] = 3;
    tab[1][0] = 1;
    tab[1][1] = 4;
    tab[1][2] = 9;
    tab[2][0] = 0;
    tab[2][1] = 4;
    tab[2][2] = 2;

    printf("Przed: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    foo(tab, n);

    printf("Po: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
