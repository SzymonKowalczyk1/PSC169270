#include <stdio.h>
#include <math.h>
double pierwiastek(double n, double m) {
    return pow (n, 1.0 / m);

}
double suma_pierw(int n, int m) {
    double suma = 0;
    for (int i = 0; i <= n; i++) {
        suma += pierwiastek(i, m);
    }
    return suma;
}

int main (){
double n,m;
printf("Podaj stopnien pierwiastka: ");
scanf("%lf",&m);
printf("Podaj liczbe pod pierwiastkiem: ");
scanf ("%lf", &n);
printf("Pierwiastek z tej liczby wynosi: %lf", pierwiastek(n,m));

printf("\n Suma pierwiastkow od 0 do n wynosi: %lf", suma_pierw(n,n));


return 0;
}
