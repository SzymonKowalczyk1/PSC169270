#include <stdio.h>
#include <stdlib.h>

union liczba {
    int calkowita;
    double wymierna;
};

struct dane {
    int tp;
    union liczba zaw;
};

struct dane wczytaj() {
    struct dane d;
    printf("Aby podac liczbe calkowita wpisz 0\n");
    printf("Aby podac liczbe wymierna wpisz 1\n ");
    scanf("%d", &d.tp);
    if (d.tp == 0) {
        printf("Wpisz liczbe calkowita: ");
        scanf("%d", &d.zaw.calkowita);
    } else {
        printf("Wpisz liczbe wymierna: ");
        scanf("%lf", &d.zaw.wymierna);
    }
    return d;
}

int main() {
    struct dane d = wczytaj();
    if (d.tp == 0)
    {
        printf("Wprowadzona liczba calkowita: %d\n",d.zaw.calkowita);
    }
    else
    {
        printf("wprowadzona liczba wymierna: %lf\n",d.zaw.wymierna);
    }
    return 0;
}
