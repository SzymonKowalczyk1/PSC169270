#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj 3 liczby calkowite: ");
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &a);
    scanf("%d", &a);

    float srednia;
    srednia = (a + b + c) / 3;
     printf("Srednia artmeyczna tych liczb to: %f",srednia);
    return 0;
}
