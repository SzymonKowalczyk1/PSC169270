#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double a,b,h,pole;
    printf("Wybierz figure, ktorej chcesz policzyc pole?\n");
    printf("1 - kwadrat \n");
    printf("2 - prostokat \n");
    printf("3 - trojkat \n");
    scanf("%d",&x);
    switch(x) {
    case 1:
        printf("Podaj bok kwadratu: ");
        scanf("%lf",&a);
        pole = a*a;
        break;
    case 2:
        printf("Podaj boki prostokata: ");
        scanf("%lf",&a);
        scanf("%lf",&b);
        pole = a * b;
        break;
    case 3:
        printf("Podaj bok i wysokosc trojkata: ");
        scanf("%lf ",&a);
        scanf("%lf",&h);
        pole = 0.5 * a * h;
}
    printf("%f",pole);
    return 0;
}
