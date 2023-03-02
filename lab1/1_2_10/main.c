#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double liczba;
    scanf("%lf", &liczba);
    double wynik = fabs(liczba);
    printf("%lf",wynik);
    return 0;
}
