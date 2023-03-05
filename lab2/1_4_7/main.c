#include <stdio.h>

int main()
{
    int n,m;
    int iloczyn = 1;
    printf ("Podaj n: ");
    scanf("%i", &n);
    printf ("Podaj m (n<m): ");
    scanf("%i", &m);
    for (int i = n; i<=m; i++){
        iloczyn *= i;
    }
    printf("Iloczyn liczb od n do m wynosi: %i",iloczyn);

  return 0;
}
