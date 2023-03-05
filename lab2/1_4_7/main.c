#include <stdio.h>

int main()
{
    int n,m;
    printf ("Podaj n: ");
    scanf("%i", &n);
    printf ("Podaj m (n<m): ");
    scanf("%i", &m);
    int iloczyn = 1;
    for (int i = n; i<=m; i++){
        iloczyn *= i;
    }
    printf("Iloczyn liczb od n do m wynosi: %i",iloczyn);

  return 0;
}
