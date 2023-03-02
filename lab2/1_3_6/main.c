#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj wspolczynniki: \n");
    float x1,x2,y1,y2,b1,b2,wx,wy,w,x,y;
    printf("x1: ");
    scanf("%f",&x1);
    printf("y1: ");
    scanf("%f",&y1);
    printf("b1: ");
    scanf("%f",&b1);
    printf("x2: ");
    scanf("%f",&x2);
    printf("y2: ");
    scanf("%f",&y2);
    printf("b2: ");
    scanf("%f",&b2);

    wx = b1 * y2 - y1 * b2;
    wy = x1 * b2 - b1 * x2;
    w = x1 * y2 - y1 * x2;

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
