#include <stdio.h>
#include <stdlib.h>
void kopiujn (char nap1[],char nap2[], int n)
{
    int i;
    for (i = 0; i < n && nap1[i] != '\0'; i++ )
    {
        nap2[i] = nap1[i];
    }
    nap2[i] = '\0';
}
int main()
{
    char nap1[] = "Tescikpykpyk";
    char nap2[] = "Esst";
    kopiujn(nap1,nap2,12);
    printf("%s\n",nap2);
    return 0;
}
