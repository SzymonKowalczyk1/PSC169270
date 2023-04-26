#include <stdio.h>
#include <stdlib.h>
void foo (char * nap)
{
    for (int i = 0; nap[i] != '\0'; i++)
    if (nap[i] >= 'a' && nap[i] <= 'z'){
        nap[i] = nap[i] - 'a' + 'A';
    }
}
int main()
{
    char nap[] = "Testowy napis";
    printf("Przed %s\n", nap);
    foo(nap);
    printf("Po: %s\n", nap);
    return 0;
}
