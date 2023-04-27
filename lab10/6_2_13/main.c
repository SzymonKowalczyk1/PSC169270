#include <stdio.h>
#include <stdlib.h>
int suma(int n,int m, int tab[n][m])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j < m; j++) {
            sum += tab[i][j];
        }
    }
    return sum;
}

int main()
{
    int tab[2][3] = {{8, 2, 6}, {1, 9, 3}};
    printf("%d\n", suma(2, 3, tab));

    return 0;
}
