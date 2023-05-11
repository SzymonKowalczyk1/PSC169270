#include <stdio.h>
#include <stdlib.h>
struct zespolone
{
    double im;
    double re;
};
struct zespolone dodaj (struct zespolone x, struct zespolone y)
{
    struct zespolone wynik;
    wynik.re = x.re + y.re;
    wynik.im = x.im + y.im;
    return wynik;
}
int main()
{
    struct zespolone x;
    x.re = 5;
    x.im = 3;
    struct zespolone y;
    y.re = 3;
    y.im = 4;
    struct zespolone suma = dodaj(x,y);
    printf("Suma re: ");
    printf("%lf",suma.re);
    printf("\nSuma im: ");
    printf ("%lf",suma.im);
    return 0;
}
