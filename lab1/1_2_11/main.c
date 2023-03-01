#include <stdio.h>
#include <stdlib.h>

int main()
{
    double liczba;
    printf("Podaj liczbe wymierna: ");
    scanf("%lf",&liczba);
    printf("Liczba z 2 miejsc po przecinku: %.2lf\n", liczba);
    return 0;
}
