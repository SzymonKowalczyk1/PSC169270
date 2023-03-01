#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj 3 liczby calkowite: ");
    float a,b,c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float srednia;
    srednia = (a + b + c) / 3.0;
     printf("Srednia artmeyczna tych liczb to: %f",srednia);
    return 0;
}
