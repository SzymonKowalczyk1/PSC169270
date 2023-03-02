#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a;
    int b;
    printf("Podaj a: ");
    scanf("%i", &a);
    printf("Podaj b: ");
    scanf("%i", &b);

    if (abs(a) > abs(b)){
        printf("Liczba a jest wieksza");
    }
    else if(abs(a)<abs(b)) {
        printf("Liczba b jest wieksza");
    }
    else {
        printf("Liczba a i b sa rowne");
    }


    return 0;
}
