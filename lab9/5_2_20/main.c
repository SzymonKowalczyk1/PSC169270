#include <stdio.h>
#include <stdlib.h>
 int godzina (int godz, int min, int sek)
 {
     char * wynik = malloc(9*sizeof(char));
     sprintf(wynik,"%02d:%02d:%02d",godz,min,sek);
     return wynik;
 }
int main()
{
    char *wynik = godzina(15, 53,53);
    printf("%s\n", wynik);
    return 0;
}
