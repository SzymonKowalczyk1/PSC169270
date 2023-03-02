#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj wspolczynniki: \n");
    float a1,a2,b1,b2,c1,c2,wx,wy,w,x,y;
    printf("a1: ");
    scanf("%f",&a1);
    printf("b1: ");
    scanf("%f",&b1);
    printf("c1: ");
    scanf("%f",&c1);
    printf("a2: ");
    scanf("%f",&a2);
    printf("b2: ");
    scanf("%f",&b2);
    printf("c2: ");
    scanf("%f",&c2);

    wx = c1 * b2 - b1 * c2;
    wy = a1 * c2 - c1 * a2;
    w = a1 * b2 - b1 * a2;

if (w != 0) {
    x = wx / w;
    printf("X wynosi: %f\n", x);
    y = wy / w;
    printf("Y wynosi: %f",y);
}
else if (wx == 0 && wy == 0) {
    printf ("Nieskonczenie wiele rozwiazan");
}
else {
    printf ("Uklad jest sprzeczny");
}
    return 0;
}
