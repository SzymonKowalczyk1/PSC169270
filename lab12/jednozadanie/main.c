#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Ksiazka
{
    char tytul[20];
    int liczba_stron;
};
struct Ksiazka* initKsiazka(char* tytul, int liczba_stron)
{
    if (strlen(tytul) < 5 || liczba_stron <= 50)
    {
        return NULL;
    }
    struct Ksiazka *nowa_ksiazka = malloc(sizeof(struct Ksiazka));
    strcpy(nowa_ksiazka -> tytul, tytul);
    nowa_ksiazka ->liczba_stron = liczba_stron;
    return nowa_ksiazka;
}
void pokazKsiazka(struct Ksiazka* ksiazka)
{
    printf("Tytul: %s\n", ksiazka -> tytul);
    printf("Liczba stron: %d\n",ksiazka -> liczba_stron);
}
void dodajStrony (struct Ksiazka* ksiazka)
{
    ksiazka ->liczba_stron += 10;
}
int main()
{
    struct Ksiazka* ksiazka = initKsiazka("Harry Potter",600);
    pokazKsiazka(ksiazka);
    dodajStrony(ksiazka);
    pokazKsiazka(ksiazka);
    struct Ksiazka* ksiazka2 = initKsiazka("Hobbit",800);
    pokazKsiazka(ksiazka2);
    dodajStrony(ksiazka2);
    pokazKsiazka(ksiazka2);
    struct Ksiazka* ksiazka3 = initKsiazka("Bajka",5);
    pokazKsiazka(ksiazka3);
    dodajStrony(ksiazka3);
    pokazKsiazka(ksiazka3);

    return 0;
}
