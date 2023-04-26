#include <stdio.h>
#include <stdlib.h>
void wytnijzw(char *nap1, char *nap2) {
    int i,j;
    int wystepuje[256] = {};
    for (i = 0; nap2[i] != 0; i++) {
        wystepuje[nap2[i]] = 1;

    }
    for (i = 0, j = 0; nap1[i] != 0; i++) {
    if (wystepuje[nap1[i]] == 0) {
        if (j < i)
            nap1[j] = nap1[i];
        j++;
    }
    }
    nap1[j] = 0;
}
int main()
{
    char nap1[] = "Testowy napis";
    char nap2[] = "towy";
    wytnijzw(nap1,nap2);
    printf("%s\n", nap1);
    return 0;
}
