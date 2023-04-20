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
    char nap1[] = "Testabcabccdecd";
    char nap2[] = "Tessssssssst";
    kopiujn(nap1,nap2,20);
    printf("%s\n",nap2);
    char nap1a[] = "Alicja";
    char nap2b[] = "Franek";
    kopiujn(nap1a,nap2b,4);
    printf("%s\n",nap2b);
    return 0;
}
