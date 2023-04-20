#include <stdio.h>
#include <stdlib.h>
int dlugosc (char*napis)
{
   int i = 0;
   while (napis[i]!=0)
   {
       i++;
   }
   return i;
}
int dlugosc2 (wchar_t * napis)
{
    int i = 0;
    while (napis[i] != 0)
    {
       i++;
    }
    return i;
}
int main()
{

    printf("%d\n", dlugosc("abc"));
    wprintf(L"%d\n", dlugosc2(L"abcdef"));
    return 0;
}
