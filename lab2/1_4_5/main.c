#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int suma = 0;
    printf("Podaj n: ");
    scanf ("%i",&n);
    for (int i = 0; i<=n; i++){
        suma += i *i;
    }
    printf("Suma kwadratow wynosi: %i ",suma);
    return 0;
}
