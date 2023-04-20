#include <stdio.h>
#include <stdlib.h>
int porownaj (char* napis, char* napis2)
{
    int i;
    for (i=0; napis[i] != 0 && napis2[i] !=0; i++)
    {
        if (napis[i] != napis2[i])
            return 0;
    }
    if(napis[i] !=0)
        return 0;
    if (napis2[i] !=0)
        return 0;
    return 1;

}
int porownaj2 (wchar_t* napis, wchar_t* napis2)
{
    int i;
    for (i=0; napis[i] != 0 && napis2[i] !=0; i++)
    {
        if (napis[i] != napis2[i])
            return 0;
    }
    if(napis[i] !=0)
        return 0;
    if (napis2[i] !=0)
        return 0;
    return 1;

}
int main()
{
    char napis[] = "Test";
    char napis2[] = "Test";
    char napis3[] = "Test11";
    printf("Rowne napisy: %d\n", porownaj(napis,napis2));
    printf("Nierowne napisy: %d\n", porownaj(napis,napis3));
    wchar_t wnapis[] =L"Test";
    wchar_t wnapis2[]=L"Tescik";
    printf("%d\n", porownaj2(wnapis, wnapis2));
    return 0;
}
