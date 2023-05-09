#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int suma (int ***tab)
{
    int sum = 0;
    for (int i = 0; i<100; i++){
        for (int j = 0; j<100; j++){
            for (int z = 0; z<100; z++) {
                sum += tab[i][j][z];
            }
        }
    }
    return sum;
}

int main()
{
    int ***tab = malloc(100 * sizeof(int**));
    for (int i = 0; i < 100; i++) {
        tab[i] = malloc(100 * sizeof(int*));
        for (int j = 0; j < 100; j++) {
            tab[i][j] = calloc(100, sizeof(int));
        }
    }

    tab[0][0][0] = 1;
    tab [99][99][99] = 4;
    printf("%d\n", suma(tab));
    return 0;
}
